/*
 * XREFs of MiReturnBadPagesToBadList @ 0x1406F6894
 * Callers:
 *     MiRemoveBadPages @ 0x1406F6410 (MiRemoveBadPages.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnBadPagesToBadList(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // edx
  unsigned __int8 v8; // cl
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v5 = 0LL;
  if ( v2 )
  {
    v6 = v3 + 24;
    do
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)v6 < 0 );
      }
      if ( !*(_QWORD *)(v6 - 16) )
        *(_QWORD *)(v6 - 16) = -4LL;
      *(_DWORD *)(v6 + 8) &= 0xFFFF0000;
      MiSetPfnContainingFrame(v3, 0LL);
      *(_QWORD *)v6 &= ~0x4000000000000000uLL;
      MiInsertPageInList(v3, 0x20u);
      _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v5 & 0x3F) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v8 = KeGetCurrentIrql();
        if ( v8 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v7) = 2;
          KiRaiseIrqlProcessIrqlFlags(v8, v7);
        }
      }
      v3 += 48LL;
      v6 += 48LL;
    }
    while ( v5 < v2 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
