/*
 * XREFs of ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801711AC
 * Callers:
 *     _lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator() @ 0x18016FD10 (_lambda_2c3f3b4f1bafb50fab998dee840e32d8_--operator().c)
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x18016FFE4 (_lambda_a408cc100a5b103155a70fabf7a2049b_--operator().c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::Run @ 0x180174AD0 (Windows--Internal--COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows--Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$emplace_back@PEAVAsyncHRESULTPrincipal@@@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVAsyncHRESULTPrincipal@@@Z @ 0x18013EA5C (--$emplace_back@PEAVAsyncHRESULTPrincipal@@@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_e.c)
 *     std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long___lambda_f331ad8aa7f9e8b97a1a62f842df472b__0_ @ 0x18016C6E4 (std--_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_--_Func_impl_no_all.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180170C58 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x180177CA0 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall MPCConstantManagerClient::CreateHRPrincipal(MPCConstantManagerClient *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[7]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+70h] [rbp-10h]
  _QWORD *v12; // [rsp+B8h] [rbp+38h] BYREF
  __int64 *v13; // [rsp+C0h] [rbp+40h]

  v13 = a3;
  v12 = a2;
  MPCConstantManagerClient::CleanupPrincipals(a1);
  v6 = operator new(0x80uLL);
  v12 = v6;
  v8 = *a3;
  v9 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
  v11 = 0LL;
  v11 = std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long___lambda_f331ad8aa7f9e8b97a1a62f842df472b__0_(
          v10,
          &v8);
  v12 = (_QWORD *)AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(v6, *((_QWORD *)a1 + 4), v10);
  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::emplace_back<AsyncHRESULTPrincipal *>(
    (_QWORD *)a1 + 9,
    (__int64 *)&v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*((_QWORD *)a1 + 10) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3 + 1);
  return a2;
}
