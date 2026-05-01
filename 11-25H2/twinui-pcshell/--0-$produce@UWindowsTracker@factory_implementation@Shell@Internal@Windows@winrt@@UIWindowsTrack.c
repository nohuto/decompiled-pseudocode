/*
 * XREFs of ??0?$produce@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@@impl@winrt@@QEAA@XZ @ 0x18063899C
 * Callers:
 *     ??0?$producer@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806389F0 (--0-$producer@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrac.c)
 * Callees:
 *     ??0?$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806389C0 (--0-$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindows.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>::`vftable';
  return result;
}
