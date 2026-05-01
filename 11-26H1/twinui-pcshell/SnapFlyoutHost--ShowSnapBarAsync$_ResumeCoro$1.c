/*
 * XREFs of SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x18026A7C0
 * Callers:
 *     ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x18026A8E8 (-ShowSnapBarAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@Windo.c)
 * Callees:
 *     ??$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18007AD44 (--$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1801CC944 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180269D9C (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *v3; // r8
  HMONITOR v4; // rax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_8;
      case 2:
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 72);
        SnapFlyoutTelemetry::SnapBar_ShowAsync<unsigned __int64,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind &>(
          (__int64 *)(a1 + 16),
          (_DWORD *)(a1 + 64));
        v1 = *(_DWORD *)(a1 + 64);
        if ( v1 == 3 || !v1 )
          goto LABEL_8;
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          *(_QWORD *)(a1 + 56),
          (__int64 *)(a1 + 24));
        *(_BYTE *)(a1 + 32) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        break;
      case 4:
        v4 = MonitorFromWindow(*(HWND *)(a1 + 72), 2u);
        SnapFlyoutHost::InternalShowBar(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), *(_DWORD *)(a1 + 64), (__int64)v4);
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 24));
        goto LABEL_8;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 24));
LABEL_8:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
