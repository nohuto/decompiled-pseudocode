/*
 * XREFs of KeWaitPhysicalFaultCompletion @ 0x1405F96E4
 * Callers:
 *     HvlNotifyPageHeat @ 0x140511814 (HvlNotifyPageHeat.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiEpfDrainCompletionQueue @ 0x1405F986C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405F9914 (KiEpfStart.c)
 */

__int64 __fastcall KeWaitPhysicalFaultCompletion(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  ++dword_140F14F3C;
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
