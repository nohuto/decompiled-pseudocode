/*
 * XREFs of ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x18017196C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x180174C30 (Windows--Internal--COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247___ea_180174C30.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x180174CD0 (Windows--Internal--COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994___ea_180174CD0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$emplace_back@PEAVAsyncHRESULTPrincipal@@@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVAsyncHRESULTPrincipal@@@Z @ 0x18013EA5C (--$emplace_back@PEAVAsyncHRESULTPrincipal@@@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_e.c)
 *     std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_ @ 0x18016C5CC (std--_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___-.c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long___lambda_902f91128e69d2cf33c0410a5e5ad4c7__0_ @ 0x18016C6A4 (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Func_impl_no_all.c)
 *     _lambda_07471f410bb64c4d3d31f6ab24fa2971_::_lambda_07471f410bb64c4d3d31f6ab24fa2971_ @ 0x18016DDC0 (_lambda_07471f410bb64c4d3d31f6ab24fa2971_--_lambda_07471f410bb64c4d3d31f6ab24fa2971_.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180170C58 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXPEBG@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1801774F0 (--0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXPEBG@Z@std@@V-$f.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *MPCConstantManagerClient::CreateStringVectorPrincipal(
        MPCConstantManagerClient *a1,
        _QWORD *a2,
        __int64 *a3,
        ...)
{
  void *v6; // rbx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-91h] BYREF
  __int64 v10; // [rsp+30h] [rbp-89h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+38h] [rbp-81h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp-41h]
  _QWORD v14[7]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD *v15; // [rsp+B8h] [rbp-1h]
  __int64 v16; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v17[8]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v18; // [rsp+138h] [rbp+7Fh] BYREF
  va_list va; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v11 = StringToHstringVectorParser;
  MPCConstantManagerClient::CleanupPrincipals(a1);
  v6 = operator new(0xC0uLL);
  v18 = (__int64)v6;
  v9 = *a3;
  v10 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
  v13 = 0LL;
  v13 = std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long___lambda_902f91128e69d2cf33c0410a5e5ad4c7__0_(
          v12,
          &v9);
  v7 = lambda_07471f410bb64c4d3d31f6ab24fa2971_::_lambda_07471f410bb64c4d3d31f6ab24fa2971_(&v16, (__int64)a1, a3, &v11);
  v15 = 0LL;
  v15 = std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_(
          v14,
          v7);
  v18 = AsyncStringPrincipal::AsyncStringPrincipal(v6, *((_QWORD *)a1 + 4), v14, v12, 3, v9);
  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::emplace_back<AsyncHRESULTPrincipal *>(
    (_QWORD *)a1 + 12,
    (__int64 *)va);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*((_QWORD *)a1 + 13) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3 + 1);
  return a2;
}
