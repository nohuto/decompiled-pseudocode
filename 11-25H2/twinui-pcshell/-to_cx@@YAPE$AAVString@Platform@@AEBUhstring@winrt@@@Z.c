/*
 * XREFs of ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x18067DCAC
 * Callers:
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18067A340 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1801D3898 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1802D37A2 (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING __fastcall to_cx(__int64 *a1, __int64 a2, unsigned int a3)
{
  HSTRING v3; // rdi
  HSTRING v4; // rbx
  struct winrt::impl::hstring_header *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( *a1 )
  {
    winrt::hstring::operator=(&v6, a1, a3);
    v3 = (HSTRING)v6;
  }
  v4 = __abi_winrt_ptrto_string_ctor(v3);
  WindowsDeleteString_0(v3);
  return v4;
}
