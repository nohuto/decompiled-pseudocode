/*
 * XREFs of ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800A25A0
 * Callers:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800A24EC (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x180580330 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_a17548d10af2541a2c37e0dd1a1d4086___ @ 0x1800A2704 (CreationThreadDispatcher--RunSyncWithNoMessagePumping__lambda_a17548d10af2541a2c37e0dd1a1d4086__.c)
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800A2768 (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::implementation::TabProxyWindow **__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow **a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a3,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a4,
        unsigned __int64 a5)
{
  DWORD v9; // eax
  const char *v10; // r9
  struct ITaskbarList4 *v11; // rdi
  struct IWICImagingFactory *v12; // rsi
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v13; // r14
  __int64 v14; // rcx
  __int64 *v16; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v18; // [rsp+80h] [rbp+8h] BYREF

  v9 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 32), 0xFFFFFFFF, 0);
  if ( v9 != 258 && v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAE9,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v10);
  v11 = *(struct ITaskbarList4 **)(a1 + 64);
  v12 = *(struct IWICImagingFactory **)(a1 + 56);
  v13 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)operator new(0xC0uLL);
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow(
    v13,
    v12,
    v11,
    (const struct winrt::Windows::Internal::Tiles::ITileStore *)(a1 + 72),
    a3,
    a4,
    a5);
  *(_QWORD *)v13 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)v13 + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)v13 + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  v18 = v13;
  v16 = (__int64 *)&v18;
  if ( (int)CreationThreadDispatcher::RunSyncWithNoMessagePumping__lambda_a17548d10af2541a2c37e0dd1a1d4086___(
              *(_QWORD *)(a1 + 48),
              &v16) < 0 )
  {
    *a2 = 0LL;
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
      (*(void (__fastcall **)(__int64, winrt::Windows::Internal::Shell::implementation::TabProxyWindow *))(*(_QWORD *)v14 + 48LL))(
        v14,
        v18);
    *a2 = v18;
  }
  return a2;
}
