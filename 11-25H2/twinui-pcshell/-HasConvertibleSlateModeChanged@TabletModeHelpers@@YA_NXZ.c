/*
 * XREFs of ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x18014B1B4
 * Callers:
 *     DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x18014B114 (DeviceConvertibilityHelpers--QueryDeviceConvertibility.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall TabletModeHelpers::HasConvertibleSlateModeChanged(
        TabletModeHelpers *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  return (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
                L"ConvertibleSlateModeChanged",
                a4,
                &v5) >= 0
      && v5 != 0;
}
