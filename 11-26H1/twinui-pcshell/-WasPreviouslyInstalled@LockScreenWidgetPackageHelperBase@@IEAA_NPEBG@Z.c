/*
 * XREFs of ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NPEBG@Z @ 0x1805DA080
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(
        LockScreenWidgetPackageHelperBase *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v6 = HIDWORD(this);
  v5 = 0;
  return (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
                a2,
                a4,
                &v5) >= 0
      && v5 != 0;
}
