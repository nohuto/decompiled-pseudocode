/*
 * XREFs of ?SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800D64C0
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800D5960 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800D49C0 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801C1AD4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1801C1AD4.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C1B58 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801C1BF8 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1801C1BF8.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1801C1C68 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x1802BAFDC (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::FrameSystemVisual::SetDesiredSystemVisual(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  void **v12; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v13[272]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v14[8]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v15[48]; // [rsp+168h] [rbp+60h] BYREF

  v9 = a2;
  v10 = 0LL;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v8);
  v6 = 0LL;
  if ( &v11 != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
  }
  v10 = v6;
  v7 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( a3 != *(_DWORD *)a1 )
  {
    *(_BYTE *)(a1 + 336) = 0;
    if ( *(_DWORD *)(a1 + 4) == 1 )
    {
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v12);
      v12 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
        (CFramePresentationTelemetry::SplashScreenSuppressed *)&v12,
        1u);
      v12 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v12);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v15);
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v14);
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v13);
    }
    *(_DWORD *)(a1 + 4) = 0;
  }
  *(_DWORD *)a1 = a3;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v9);
}
