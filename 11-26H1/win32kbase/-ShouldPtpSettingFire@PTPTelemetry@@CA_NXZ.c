/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x140160D7C
 * Callers:
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140160D20 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140219730 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PTPTelemetry::ShouldPtpSettingFire(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char v6; // bl

  v6 = 0;
  if ( !*(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 12056) )
    return *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 12057) != 0;
  return v6;
}
