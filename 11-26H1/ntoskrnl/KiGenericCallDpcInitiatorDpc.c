/*
 * XREFs of KiGenericCallDpcInitiatorDpc @ 0x1403CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInitiateGenericCallDpc @ 0x1403CC3E8 (KiInitiateGenericCallDpc.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGenericCallDpcInitiatorDpc(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int DpcWatchdogCount; // esi
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bl

  CurrentPrcb = KeGetCurrentPrcb();
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  KiInitiateGenericCallDpc(CurrentPrcb);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 13 )
    __writecr8(0xDuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 13LL);
  }
  if ( DpcWatchdogCount < CurrentPrcb->DpcWatchdogCount )
    CurrentPrcb->DpcWatchdogCount = DpcWatchdogCount;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return KeSignalGate(a2 + 80, 0LL);
}
