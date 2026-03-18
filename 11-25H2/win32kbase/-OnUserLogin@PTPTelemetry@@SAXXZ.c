/*
 * XREFs of ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x14015B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x14015B4FC (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 */

void __fastcall PTPTelemetry::OnUserLogin(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 12057) = 1;
  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL, v2);
    if ( *(_BYTE *)(W32GetUserSessionState(v4, v3) + 12058) )
      *(_BYTE *)(W32GetUserSessionState(v6, v5) + 12056) = 1;
  }
}
