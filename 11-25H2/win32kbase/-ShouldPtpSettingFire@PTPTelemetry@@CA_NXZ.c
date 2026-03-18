/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x14015B4FC
 * Callers:
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x14015B4A0 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1402114A4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PTPTelemetry::ShouldPtpSettingFire(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl

  v4 = 0;
  if ( !*(_BYTE *)(W32GetUserSessionState(a1, a2) + 12056) )
    return *(_BYTE *)(W32GetUserSessionState(v3, v2) + 12057) != 0;
  return v4;
}
