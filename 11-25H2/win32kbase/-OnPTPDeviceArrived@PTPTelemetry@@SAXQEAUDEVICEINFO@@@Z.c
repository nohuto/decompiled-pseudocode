/*
 * XREFs of ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1402114A4
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140212A90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x14015B4FC (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 */

void __fastcall PTPTelemetry::OnPTPDeviceArrived(struct DEVICEINFO *const a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( PTPTelemetry::ShouldPtpSettingFire((__int64)a1, a2) )
  {
    PTPTelemetry::PTPConfigUpdateEx(a1, v3);
    if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 12058) )
      *(_BYTE *)(W32GetUserSessionState(v7, v6) + 12056) = 1;
  }
}
