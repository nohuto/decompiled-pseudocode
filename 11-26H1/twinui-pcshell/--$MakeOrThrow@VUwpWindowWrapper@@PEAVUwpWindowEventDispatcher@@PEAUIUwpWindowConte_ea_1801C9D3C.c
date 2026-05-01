/*
 * XREFs of ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1801C9D3C
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180037DF0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x18006BDEC (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?Attach@?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVUwpWindowWrapper@@@Z @ 0x1801C9E90 (-Attach@-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVUwpWindowWrapper@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall wil::MakeOrThrow<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind const &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        HSTRING *a7,
        int *a8,
        PCNZWCH *a9,
        int *a10,
        __int64 *a11)
{
  void *v15; // rax
  const char *v16; // r9
  void *v17; // r10
  __int64 v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a1 = 0LL;
  v15 = operator new(0x2D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v15;
  if ( v15 )
  {
    v19 = UwpWindowWrapper::UwpWindowWrapper(
            (__int64)v15,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            *a9,
            *a10,
            *a11);
    Microsoft::WRL::ComPtr<UwpWindowWrapper>::Attach(a1, v19);
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
