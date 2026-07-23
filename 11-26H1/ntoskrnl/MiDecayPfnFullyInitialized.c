/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140491EA8
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiActivateDecayNode @ 0x140298EF4 (MiActivateDecayNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiDecayPfnFullyInitialized(PSLIST_ENTRY ListEntry, int a2)
{
  PSLIST_ENTRY v2; // rbx
  unsigned __int8 CurrentIrql; // di
  int v4; // esi
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = ListEntry;
  if ( a2 )
  {
    CurrentIrql = 17;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v2[1].Next + 2, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *((__int64 *)&v2[1].Next + 1) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(ListEntry) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(ListEntry, 2LL);
    }
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v2[1].Next + 2, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *((__int64 *)&v2[1].Next + 1) < 0 );
    }
  }
  if ( ((__int64)v2[2].Next & 0x8000000) != 0 )
    v4 = MiActivateDecayNode((__int64)v2);
  else
    v4 = 0;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)&v2[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql <= 1u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !v4 )
    return (__int64)RtlpInterlockedPushEntrySList(&stru_140E34940, v2);
  return result;
}
