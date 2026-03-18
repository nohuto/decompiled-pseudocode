/*
 * XREFs of PopDeviceConstraintsEnforced @ 0x140500E54
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall PopDeviceConstraintsEnforced(__int64 a1)
{
  bool v1; // bl
  unsigned __int8 CurrentIrql; // di

  v1 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( KeGetCurrentPrcb()->PowerState.IdleStates )
    v1 = PpmPlatformStates != 0;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v1;
}
