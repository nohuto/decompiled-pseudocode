/*
 * XREFs of ??0?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802B021C
 * Callers:
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x180592BF0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z.c)
 * Callees:
 *     ??0?$producers_base@USnapMigrationHandler@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802B0254 (--0-$producers_base@USnapMigrationHandler@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@@std.c)
 */

_QWORD *__fastcall winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  winrt::impl::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>(
    a1 + 16,
    a2,
    a1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[1] = 1LL;
  *v2 = &winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::`vftable';
  return v2;
}
