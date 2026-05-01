/*
 * XREFs of ??0?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802A6C34
 * Callers:
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x1805B6C30 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@USnapMigrationHandler@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802A6C74 (--0-$producers_base@USnapMigrationHandler@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@@std.c)
 */

_QWORD *__fastcall winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r8
  _QWORD *result; // rax

  winrt::impl::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>(
    a1 + 16,
    a2,
    a1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v2 + 8, 1LL);
  result = v3;
  *v3 = &winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::`vftable';
  return result;
}
