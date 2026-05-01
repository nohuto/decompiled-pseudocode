/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___ @ 0x1806A4CB8
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A71A0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v6[2] = 1;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)v6 + 2) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_1808D21B8;
  *a1 = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  return a1;
}
