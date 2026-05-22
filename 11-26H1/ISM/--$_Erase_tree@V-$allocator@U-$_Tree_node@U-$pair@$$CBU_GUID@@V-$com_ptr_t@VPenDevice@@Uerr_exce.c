/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18018D034
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18018D034 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exce.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18018DAF4 (--1-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGU.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18018D034 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exce.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  void *v7; // rbx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6 + 6);
      std::_Deallocate<16>(v7, (struct std::nothrow_t *)0x38);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
