/*
 * XREFs of ?IsManipulationInMap@InteractionSourceManager@@AEAA_NPEAVCManipulation@@@Z @ 0x180213E48
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801518B4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV?$vector@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@V?$allocator@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@@2@@std@@@Z @ 0x18028E2F4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV-$vector@U-$pair@PEAVCManipulation@@.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213EB8 (-find@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall InteractionSourceManager::IsManipulationInMap(InteractionSourceManager *this, struct CManipulation *a2)
{
  bool v4; // di
  struct CManipulation *v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CManipulation *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *(_QWORD *)std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::find(
                    (char *)this + 8,
                    &v7,
                    &v6) != *((_QWORD *)this + 2);
  if ( a2 )
    (*(void (__fastcall **)(struct CManipulation *))(*(_QWORD *)a2 + 16LL))(a2);
  return v4;
}
