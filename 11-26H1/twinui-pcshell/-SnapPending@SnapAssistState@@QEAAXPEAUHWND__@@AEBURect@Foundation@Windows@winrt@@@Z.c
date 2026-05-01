/*
 * XREFs of ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1802AA4A4
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x1801B0124 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TagWindowForSnapAnimation@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x1806C06E4 (-TagWindowForSnapAnimation@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@.c)
 */

void __fastcall SnapAssistState::SnapPending(
        SnapAssistState *this,
        HWND a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  HWND PropW; // rax
  HWND v7; // rsi
  HWND v8; // r8
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  char v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((float *)a3 + 2) <= 0.0 || *((float *)a3 + 3) <= 0.0 )
  {
    v10 = (_QWORD *)((char *)this + 208);
    if ( (char *)this + 208 != &v11 )
    {
      if ( *v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 26);
      *v10 = 0LL;
    }
  }
  else
  {
    PropW = (HWND)GetPropW(a2, (LPCWSTR)0xA920);
    v7 = PropW;
    if ( !PropW )
    {
      v8 = a2;
      goto LABEL_7;
    }
    if ( !(unsigned int)IsWindowArranged(PropW) )
    {
      v8 = v7;
LABEL_7:
      v9 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::TagWindowForSnapAnimation(
                        (char *)this + 192,
                        &v12,
                        v8,
                        a3);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 26, v9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    }
  }
  *((_BYTE *)this + 176) = 1;
}
