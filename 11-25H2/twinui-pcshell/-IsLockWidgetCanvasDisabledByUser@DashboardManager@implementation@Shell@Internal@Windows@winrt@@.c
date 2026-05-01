/*
 * XREFs of ?IsLockWidgetCanvasDisabledByUser@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805B0718
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805B2880 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805B2880.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByUser(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // bl
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]

  v7 = HIDWORD(this);
  v4 = 0;
  v6 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Lock Screen",
              L"LockScreenWidgetsEnabled",
              a4,
              &v6) >= 0 )
    return v6 != 0;
  return v4;
}
