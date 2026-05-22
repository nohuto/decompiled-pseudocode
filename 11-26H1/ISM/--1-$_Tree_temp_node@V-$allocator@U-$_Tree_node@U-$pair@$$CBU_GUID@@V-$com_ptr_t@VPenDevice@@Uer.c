/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18018DB24
 * Callers:
 *     ??$_Emplace@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018CF4C (--$_Emplace@AEBU_GUID@@AEAV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(v2 + 48));
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>,void *>>>(a1);
}
