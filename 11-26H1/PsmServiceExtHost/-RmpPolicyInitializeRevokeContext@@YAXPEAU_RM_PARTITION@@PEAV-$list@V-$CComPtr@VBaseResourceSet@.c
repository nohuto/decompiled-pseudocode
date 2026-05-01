/*
 * XREFs of ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18002C80C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

__int64 __fastcall RmpPolicyInitializeRevokeContext(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  a4[1] = 0LL;
  a4[2] = 0LL;
  a4[3] = 0LL;
  a4[4] = 0LL;
  *a4 = a3;
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(a2);
  a4[1] = a2;
  result = a1 + 120;
  a4[3] = a1 + 120;
  a4[2] = a1;
  return result;
}
