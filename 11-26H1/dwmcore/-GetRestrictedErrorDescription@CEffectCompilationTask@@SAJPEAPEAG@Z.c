/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18020B34C
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801979A0 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  unsigned int v3; // edi
  __int64 v4; // rbx
  OLECHAR *v5; // rdi
  __int64 (__fastcall *v6)(__int64, BSTR *, int *, unsigned __int16 **, BSTR *); // r14
  OLECHAR *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  BSTR bstrString; // [rsp+80h] [rbp+40h] BYREF
  BSTR v15; // [rsp+88h] [rbp+48h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v12 = 0;
  v15 = 0LL;
  bstrString = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v13);
  v3 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RestrictedErrorInfo, 0x99u, 0LL);
  }
  else
  {
    v4 = v13;
    if ( v13 )
    {
      v5 = bstrString;
      v6 = *(__int64 (__fastcall **)(__int64, BSTR *, int *, unsigned __int16 **, BSTR *))(*(_QWORD *)v13 + 24LL);
      if ( bstrString )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)v11);
        SysFreeString(v5);
        wil::last_error_context::~last_error_context((wil::last_error_context *)v11);
      }
      v7 = v15;
      if ( v15 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)v11);
        SysFreeString(v7);
        wil::last_error_context::~last_error_context((wil::last_error_context *)v11);
      }
      v8 = v6(v4, &v15, &v12, a1, &bstrString);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x9Cu, 0LL);
    }
  }
  if ( bstrString )
    SysFreeString(bstrString);
  if ( v15 )
    SysFreeString(v15);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v3;
}
