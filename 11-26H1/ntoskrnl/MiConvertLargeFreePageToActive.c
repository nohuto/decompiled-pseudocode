/*
 * XREFs of MiConvertLargeFreePageToActive @ 0x1404C8DD8
 * Callers:
 *     MiLargeFreePageToMdl @ 0x1404C8C88 (MiLargeFreePageToMdl.c)
 * Callees:
 *     MiConvertLargePfnToSmall @ 0x140206E20 (MiConvertLargePfnToSmall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeFreePageToActive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bp
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  v4 = 3;
  v5 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = v3 + (a1 + 0x220000000000LL) / 48;
  v7 = a1 + 48 * v3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 2;
    LOBYTE(v2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v2, v5);
  }
  v9 = (volatile signed __int32 *)(v7 + 24);
  do
  {
    v7 -= 48LL;
    v9 -= 12;
    LOBYTE(v6) = v6 - 1;
    if ( v7 == a1 )
      v4 = v4 & 0xFA | 4;
    v13 = 0;
    while ( _interlockedbittestandset64(v9, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)v9 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v7, v4);
    _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v6 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(v12) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v12, v11);
      }
    }
  }
  while ( v7 != a1 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
