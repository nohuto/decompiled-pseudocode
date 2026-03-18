/*
 * XREFs of PopFireThermalWmiEvent @ 0x140607A94
 * Callers:
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PpmFireWmiEvent @ 0x14060C8C8 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  LOBYTE(v3) = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, &v3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
