/*
 * XREFs of MiConvertActiveLargePageToSmall @ 0x140206C98
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiInitializeFoundLargeNodePage @ 0x1406EF99C (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiCreateKernelHalSlabRange @ 0x140D04620 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiConvertLargePfnToSmall @ 0x140206E20 (MiConvertLargePfnToSmall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertActiveLargePageToSmall(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // r15d
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v5 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex()];
  v6 = a1 + 48 * v5;
  v7 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = v5 + (a1 + 0x220000000000LL) / 48;
  v9 = (a2 != 0) + 2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, v7);
  }
  v11 = (volatile signed __int32 *)(v6 + 24);
  do
  {
    v6 -= 48LL;
    v15 = 0;
    LOBYTE(v8) = v8 - 1;
    v11 -= 12;
    while ( _interlockedbittestandset64(v11, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(__int64 *)v11 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v6, v9);
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v8 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        LOBYTE(v14) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v14, v12);
      }
    }
  }
  while ( v6 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
