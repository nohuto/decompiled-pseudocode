/*
 * XREFs of MiReturnPfnList @ 0x1406FA308
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408807B0 (MiDeleteSparseRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // r14
  __int64 *i; // rbx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // di
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  for ( i = MiUnlinkPageChainHead(a1); i; i = MiUnlinkPageChainHead(a1) )
  {
    v4 = (unsigned __int128)((__int64)(i + 0x44000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( i[3] < 0 );
    }
    i[3] &= 0xC000000000000000uLL;
    *((_DWORD *)i + 8) &= 0xFFFF0000;
    MiInsertPageInFreeOrZeroedList((__int64)(i + 0x44000000000LL) / 48);
    _InterlockedAnd64(i + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v1;
}
