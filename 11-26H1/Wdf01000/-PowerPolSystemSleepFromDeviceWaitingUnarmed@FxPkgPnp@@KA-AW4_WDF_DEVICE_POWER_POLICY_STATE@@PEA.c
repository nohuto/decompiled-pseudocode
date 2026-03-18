/*
 * XREFs of ?PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007B980
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x140040CAC (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemSleepFromDeviceWaitingUnarmed(FxPkgPnp *This)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // eax
  bool v5; // cc

  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1324LL;
  v4 = 6;
  if ( !*(_BYTE *)(v1 + 1227) )
    v4 = *(unsigned __int8 *)(v1 + 1041);
  v5 = v2 <= v4;
  result = 1293LL;
  if ( !v5 )
    return 1324LL;
  return result;
}
