/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801979A0
 * Callers:
 *     _CEffectCompilationTask::Initialize_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x180244FA0 (_CEffectCompilationTask--Initialize_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180197B5C (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18020B34C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1802450E8 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD); // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  OLECHAR *v8; // rbp
  CEffectCompilationService *v9; // rcx
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_COMPILE_EFFECT_Start, (__int64)this);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v11);
  v3 = CompileEffectDescription(*((_QWORD *)this + 7), &v11);
  if ( v3 < 0 )
  {
    v8 = (OLECHAR *)*((_QWORD *)this + 11);
    if ( v8 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
      SysFreeString(v8);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
    }
    *((_QWORD *)this + 11) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 11);
  }
  else
  {
    v4 = MIDL_user_allocate(0x28uLL);
    v6 = v4;
    if ( v4 )
    {
      v5 = v11;
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = this;
      v4[4] = v5;
      if ( v5 )
        (**v5)(v5);
    }
    else
    {
      v6 = 0LL;
    }
    v7 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v6;
    if ( v7 )
      std::default_delete<CCompiledEffectCache>::operator()();
    if ( !*((_QWORD *)this + 10) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB9u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer((__int64)v5, &EVTDESC_COMPILE_EFFECT_Stop, (__int64)this);
  v9 = (CEffectCompilationService *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 19) = v3;
  *((_DWORD *)this + 18) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v9, this, 0);
  v10 = (__int64)v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
