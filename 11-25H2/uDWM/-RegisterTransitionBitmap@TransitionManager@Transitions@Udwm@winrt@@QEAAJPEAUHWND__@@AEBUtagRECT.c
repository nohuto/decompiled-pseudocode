/*
 * XREFs of ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800DC1A0
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E88A8 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18002A840 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18002A93C (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180058914 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18009A05C (--$-8UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ??$as@UIUserResizeVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUserResizeVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D96D4 (--$as@UIUserResizeVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DC778 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2,
        const struct tagRECT *a3,
        void *a4,
        unsigned __int64 a5)
{
  signed int v7; // ecx
  signed int v8; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rdx
  wil::details::in1diag3 *v15; // r9
  __int64 v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v20; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3->right - a3->left;
  if ( v7 < 0 )
    v7 = 0;
  v8 = a3->bottom - a3->top;
  if ( v8 < 0 )
    v8 = 0;
  try
  {
    v9 = (unsigned int)v7 * (unsigned __int64)(unsigned int)v8;
    if ( v9 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
        (const char *)0x80070216LL);
      result = 2147942934LL;
    }
    else
    {
      v10 = 4LL * (unsigned int)v9;
      if ( v10 > 0xFFFFFFFF )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x82,
          (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
          (const char *)0x80070216LL);
        result = 2147942934LL;
      }
      else
      {
        if ( a5 >= (unsigned int)v10 )
        {
          v20 = 0LL;
          v11 = CBitmapSource::Create(v7, v8, v7, v8, a4, &v20);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x90,
              (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
              (const char *)(unsigned int)v11);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v20);
            return v12;
          }
          v14 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*winrt::Udwm::Transitions::TransitionManager::GetHandler(
                                                                           (__int64)this,
                                                                           v18,
                                                                           6);
          winrt::impl::as<IUserResizeVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
            &v17,
            v14);
          winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)v18);
          if ( winrt::operator==<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>((__int64)&v17) )
            wil::details::in1diag3::_Throw_NullAlloc(
              v15,
              (void *)0x95,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
              (const char *)v15);
          v16 = v17;
          (*(void (__fastcall **)(__int64, HWND, CBaseObject *))(*(_QWORD *)v17 + 48LL))(v17, a2, v20);
          if ( v16 )
            winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v17);
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v20);
        }
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9A,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
                           (const char *)a4);
  }
  return result;
}
