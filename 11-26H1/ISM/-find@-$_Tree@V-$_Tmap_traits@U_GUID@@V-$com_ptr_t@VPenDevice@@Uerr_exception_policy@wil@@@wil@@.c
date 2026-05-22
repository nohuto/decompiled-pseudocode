/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180191FC0
 * Callers:
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x18018ED88 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 *     ?TryFindPenDeviceForUniqueId@HapticDeviceManager@@QEAAXU_GUID@@PEAPEAVPenDevice@@@Z @ 0x180191C20 (-TryFindPenDeviceForUniqueId@HapticDeviceManager@@QEAAXU_GUID@@PEAPEAVPenDevice@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x18018D0A8 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exce.c)
 *     ??$_Lower_bound_duplicate@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBU_GUID@@@Z @ 0x18018D130 (--$_Lower_bound_duplicate@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,HapticDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::find(
        __int64 *a1,
        __int64 *a2,
        const void *a3)
{
  const void *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,HapticDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Find_lower_bound<_GUID>(
    (__int64)a1,
    &v10,
    a3);
  v6 = a3;
  v7 = v11;
  if ( !std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,HapticDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Lower_bound_duplicate<_GUID>(
          v8,
          v11,
          v6) )
    v7 = *a1;
  result = a2;
  *a2 = v7;
  return result;
}
