/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ld @ 0x18002324C (WPP_SF_Ld.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B0C84 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800B0C84.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x1800B0EFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B10A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B1188 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800B1188.c)
 *     ?SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B213C (-SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYST.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B228C (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto_ea_1800B228C.c)
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x1800B2344 (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_ @ 0x180304240 (_lambda_31520e38682400c193ecfa4924368fd9_--_lambda_31520e38682400c193ecfa4924368fd9_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  bool v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v12; // [rsp+38h] [rbp-C8h] BYREF
  char v13; // [rsp+48h] [rbp-B8h] BYREF
  void **v14; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v15[272]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v16[8]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v17[48]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v12 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xFu,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      a2,
      *(_DWORD *)(a1 + 48));
  }
  v4 = *(_QWORD *)(a1 + 608);
  v5 = *(_QWORD **)(a1 + 112);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v14);
  v14 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFramePresentationTelemetry::SetSystemVisual::StartActivity(&v14, *(unsigned int *)(a1 + 48), *v5, a2, v4);
  v6 = **(_QWORD **)(a1 + 104);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 208LL))(v6, *(_QWORD *)(a1 + 128), 3LL);
  if ( *(_DWORD *)(a1 + 220) != 1 || a2 == 1 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 52) != 0;
    if ( *(_DWORD *)(a1 + 560) == 1 )
    {
      v7 = 1;
      goto LABEL_7;
    }
  }
  v7 = 0;
LABEL_7:
  v11 = v7;
  CFrameApplicationPresentation::FrameSystemVisual::SetDesiredSystemVisual(a1 + 216, a1, a2);
  if ( *(_BYTE *)(a1 + 52) && a2 == 1 && *(_DWORD *)(a1 + 220) != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 0LL);
  v8 = lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_(
         (unsigned int)&v13,
         (unsigned int)&v12,
         (unsigned int)&v10,
         (unsigned int)&v11,
         a1,
         (__int64)&v14);
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___(a1, v8);
  v14 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v14);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v16);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v15);
  return 0LL;
}
