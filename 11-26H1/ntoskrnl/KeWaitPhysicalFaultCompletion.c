/*
 * XREFs of KeWaitPhysicalFaultCompletion @ 0x1405F6D24
 * Callers:
 *     HvlNotifyPageHeat @ 0x140517DA4 (HvlNotifyPageHeat.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiEpfDrainCompletionQueue @ 0x1405F6EAC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405F6F54 (KiEpfStart.c)
 */

__int64 __fastcall KeWaitPhysicalFaultCompletion(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  ++dword_140F14B9C;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KiEpfDrainCompletionQueue();
  KiEpfStart(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
