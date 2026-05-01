/*
 * XREFs of ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x1801467B4
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 * Callees:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800717B8 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E6BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperB.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall wil::MakeOrThrow<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &,int>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        HSTRING *a7,
        int *a8,
        __int64 a9,
        int *a10,
        int *a11)
{
  void *v15; // rax
  const char *v16; // r9
  void *v17; // rsi
  __int64 v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a1 = 0LL;
  v15 = operator new(0x2E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v15;
  if ( v15 )
  {
    v18 = UwpWindowWrapper::UwpWindowWrapper(
            (__int64)v15,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            L"Windows.Internal.ShellExperience.TopLevelApplication",
            *a10,
            *a11);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(*a1);
    *a1 = v18;
    v17 = 0LL;
  }
  if ( v17 )
    operator delete(v17, (const struct std::nothrow_t *)1);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v16);
  return a1;
}
