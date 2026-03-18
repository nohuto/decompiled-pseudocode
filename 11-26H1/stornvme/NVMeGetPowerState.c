/*
 * XREFs of NVMeGetPowerState @ 0x14000F320
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1400136F4 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeMaxOperationalPower @ 0x1400187EC (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1400188C4 (NVMePowerInitialize.c)
 *     NVMeValidatePowerStates @ 0x1400192C8 (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1560);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
