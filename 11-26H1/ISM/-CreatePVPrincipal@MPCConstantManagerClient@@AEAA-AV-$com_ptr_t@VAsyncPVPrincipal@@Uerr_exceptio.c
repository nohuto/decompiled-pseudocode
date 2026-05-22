/*
 * XREFs of ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801714C4
 * Callers:
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x18016FDCC (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$emplace_back@PEAVAsyncHRESULTPrincipal@@@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVAsyncHRESULTPrincipal@@@Z @ 0x18013EA5C (--$emplace_back@PEAVAsyncHRESULTPrincipal@@@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_e.c)
 *     std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long___lambda_824b94053d2fecabe388e187688ff60e__0_ @ 0x18016C61C (std--_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_--_Func_impl_no_all.c)
 *     std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&___lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_ @ 0x18016C65C (std--_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_-_-.c)
 *     _lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_ @ 0x18016DE38 (_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_--_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180170C58 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x180176C24 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall MPCConstantManagerClient::CreatePVPrincipal(MPCConstantManagerClient *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-81h] BYREF
  __int64 v10; // [rsp+30h] [rbp-79h] BYREF
  __int64 v11; // [rsp+38h] [rbp-71h] BYREF
  __int64 v12; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v13[7]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp-21h]
  _QWORD v15[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v16; // [rsp+C8h] [rbp+1Fh]
  _QWORD *v17; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 *v18; // [rsp+120h] [rbp+77h]

  v18 = a3;
  v17 = a2;
  MPCConstantManagerClient::CleanupPrincipals(a1);
  v6 = operator new(0xC0uLL);
  v17 = v6;
  v9 = *a3;
  v10 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
  v14 = 0LL;
  v14 = std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long___lambda_824b94053d2fecabe388e187688ff60e__0_(
          v13,
          &v9);
  v7 = lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_(&v11, (__int64)a1, a3);
  v16 = 0LL;
  v16 = std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const___::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_____lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_(
          v15,
          v7);
  v17 = (_QWORD *)AsyncPVPrincipal::AsyncPVPrincipal(v6, *((_QWORD *)a1 + 4), v15, v13, 3, v9);
  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::emplace_back<AsyncHRESULTPrincipal *>(
    (_QWORD *)a1 + 6,
    (__int64 *)&v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*((_QWORD *)a1 + 7) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3 + 1);
  return a2;
}
