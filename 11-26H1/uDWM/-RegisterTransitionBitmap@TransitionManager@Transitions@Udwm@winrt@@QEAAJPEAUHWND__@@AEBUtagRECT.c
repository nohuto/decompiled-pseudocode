/*
 * XREFs of ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800D8EF0
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4818 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18008DA64 (--$-8UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ??$as@UIBitmapManager@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIBitmapManager@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D89A8 (--$as@UIBitmapManager@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@w.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800D94CC (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::RegisterTransitionBitmap(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2,
        const struct tagRECT *a3,
        const char *a4,
        unsigned __int64 a5)
{
  unsigned int v7; // eax
  __int64 v8; // r10
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 result; // rax
  __int64 (__fastcall ***v17)(_QWORD, __int64 *, __int64 *); // rdx
  wil::details::in1diag3 *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v23; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  if ( a3->right - a3->left >= 0 )
    v7 = a3->right - a3->left;
  v8 = v7;
  v9 = a3->bottom - a3->top;
  v10 = 0LL;
  if ( v9 >= 0 )
    v10 = (unsigned int)v9;
  try
  {
    v11 = v10;
    v12 = v8 * v10;
    if ( v12 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
        (const char *)0x80070216LL);
      result = 2147942934LL;
    }
    else
    {
      v13 = 4LL * (unsigned int)v12;
      if ( v13 > 0xFFFFFFFF )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x82,
          (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
          (const char *)0x80070216LL);
        result = 2147942934LL;
      }
      else
      {
        if ( a5 >= (unsigned int)v13 )
        {
          v23 = 0LL;
          v14 = CBitmapSource::Create(v8, v11);
          v15 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x90,
              (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
              (const char *)(unsigned int)v14);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v23);
            return v15;
          }
          v17 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*winrt::Udwm::Transitions::TransitionManager::GetHandler(
                                                                           (__int64)this,
                                                                           v21,
                                                                           6);
          winrt::impl::as<IBitmapManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v20, v17);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v21);
          if ( winrt::operator==<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>((__int64)&v20) )
            wil::details::in1diag3::_Throw_NullAlloc(
              v18,
              (void *)0x95,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
              (const char *)v18);
          v19 = v20;
          (*(void (__fastcall **)(__int64, HWND, CBaseObject *))(*(_QWORD *)v20 + 48LL))(v20, a2, v23);
          if ( v19 )
            winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v20);
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v23);
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
                           a4);
  }
  return result;
}
