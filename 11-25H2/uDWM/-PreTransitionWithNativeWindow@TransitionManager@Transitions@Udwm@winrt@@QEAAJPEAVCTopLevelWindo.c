/*
 * XREFs of ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x180061700
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5DF0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18002A840 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18002A93C (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800617DC (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ??$as@UITransitionStateNativePrivate@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800DBB48 (--$as@UITransitionStateNativePrivate@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@win.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800DC0C4 (-PreTransition@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
        __int64 a1,
        __int64 a2,
        int a3)
{
  const char *v4; // r9
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  winrt::Udwm::Transitions::TransitionManager::GetHandler(a1, &v7, a3);
  try
  {
    if ( v7 )
    {
      winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(&v11);
      winrt::impl::as<ITransitionStateNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        v8,
        v11);
      v5 = v8[0];
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8[0] + 48LL))(v8[0], a2);
      if ( v5 )
        winrt::com_ptr<IBitmapManager>::unconditional_release_ref(v8);
      winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PreTransition(
        &v7,
        &v10,
        &v11);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    }
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x73,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
                           v4);
  }
  return result;
}
