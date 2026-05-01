/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18005EE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180042468 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     WPP_SF_qd @ 0x18005F070 (WPP_SF_qd.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18005F7B0 (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x1803040AC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___.c)
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_ @ 0x1803045AC (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct IUnknown *a2)
{
  int v4; // ebp
  __int64 v5; // rax
  HWND v6; // r14
  int v7; // ebx
  __int64 v8; // rax
  HWND *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct IUnknown *v13; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v14[352]; // [rsp+40h] [rbp-2E8h] BYREF
  volatile signed __int32 *v15[42]; // [rsp+1A0h] [rbp-188h] BYREF

  v4 = SHIsSameObject(a2, **((struct IUnknown ***)this + 13));
  v5 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
  v6 = (HWND)v5;
  if ( !v4 || v5 != **((_QWORD **)this + 14) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v7 = *((_DWORD *)this + 12);
      v8 = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[1].AddRef)(a2);
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        12LL,
        &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
        v8,
        v7);
    }
    v9 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v15,
      "PresentWindow");
    v15[0] = (volatile signed __int32 *)&CFramePresentationTelemetry::PresentWindow::`vftable';
    CFramePresentationTelemetry::PresentWindow::StartActivity(
      (CFramePresentationTelemetry::PresentWindow *)v15,
      *((_DWORD *)this + 12),
      *v9,
      v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 536LL))(*((_QWORD *)this + 79));
    ((void (__fastcall *)(struct IUnknown *, _QWORD, __int64))a2->lpVtbl[8].Release)(a2, *((_QWORD *)this + 16), 3LL);
    v10 = **((_QWORD **)this + 13);
    if ( v10 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 208LL))(v10, *((_QWORD *)this + 16), 1LL);
    v13 = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v11 = lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_(v14, &v13, this, v15);
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___(this, v11);
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
    v15[0] = (volatile signed __int32 *)&CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  }
  return 0LL;
}
