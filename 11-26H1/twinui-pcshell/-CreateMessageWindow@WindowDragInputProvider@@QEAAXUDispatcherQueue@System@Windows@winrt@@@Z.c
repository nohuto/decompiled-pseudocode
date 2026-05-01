/*
 * XREFs of ?CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z @ 0x1805BF98C
 * Callers:
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B536C (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180269914 (-HasThreadAccess@-$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InitMessageWindow@WindowDragInputProvider@@AEAAXXZ @ 0x1805BFA60 (-InitMessageWindow@WindowDragInputProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowDragInputProvider::CreateMessageWindow(__int64 *a1, __int64 *a2)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v4);
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 6, a2);
  WindowDragInputProvider::InitMessageWindow((WindowDragInputProvider *)a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
