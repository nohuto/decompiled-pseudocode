/*
 * XREFs of ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140160D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x140160D7C (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 */

void __fastcall PTPTelemetry::OnUserLogin(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 12057) = 1;
  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    if ( *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 12058) )
      *(_BYTE *)(W32GetUserSessionState(v7, v6, v8) + 12056) = 1;
  }
}
