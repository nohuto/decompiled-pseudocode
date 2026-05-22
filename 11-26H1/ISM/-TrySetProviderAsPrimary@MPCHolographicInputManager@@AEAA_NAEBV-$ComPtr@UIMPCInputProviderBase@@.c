/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800BB7B8
 * Callers:
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x18000C9E0 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x1800B9FDC (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB1EC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18000D3AC (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001E93C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800BBED0 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  struct IMPCInputProviderBase *v6; // rdi
  char *v7; // r12
  _QWORD *v8; // rax
  char v9; // r15
  int v10; // ebx
  char result; // al
  char **v12; // rax
  struct IMPCInputProviderBase *v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // r15
  __int64 v16; // rbx
  const char *v17; // r9
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-40h] BYREF
  char *v19; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v20)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v22; // [rsp+A0h] [rbp+40h] BYREF
  struct IMPCInputProviderBase *v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x27F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v6 = *a2;
  v7 = (char *)this + 3600;
  v8 = (_QWORD *)*((_QWORD *)this + 450);
  v9 = 1;
  v22 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 112LL))(*v8);
  if ( v10 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v6 + 112LL))(v6)
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 272LL))(*a2) )
  {
    v9 = 0;
    v18 = off_1801E6848;
    v19 = &v22;
    v20 = &v18;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v18);
  }
  result = v22;
  if ( v22 )
  {
    if ( !v9 )
    {
      v12 = (char **)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
                       &v23,
                       (__int64)this);
      v20 = 0LL;
      v18 = off_1801E6818;
      v19 = *v12;
      v20 = &v18;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v18);
      std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear(v7);
    }
    v13 = *a2;
    v23 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v23);
    v14 = (__int64 *)*((_QWORD *)this + 413);
    v15 = (__int64 *)*((_QWORD *)this + 414);
    while ( v14 != v15 )
    {
      v24 = *v14;
      v16 = v24;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      if ( v13 == (struct IMPCInputProviderBase *)v16 )
        break;
      ++v14;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    if ( v14 == *((__int64 **)this + 414) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v17);
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v22;
  }
  return result;
}
