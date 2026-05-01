/*
 * XREFs of ?UpdateMonitorInfoCollectionAsync@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x180293028
 * Callers:
 *     ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180292C80 (-subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1803E0FA4 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMonitorInfoColl.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
