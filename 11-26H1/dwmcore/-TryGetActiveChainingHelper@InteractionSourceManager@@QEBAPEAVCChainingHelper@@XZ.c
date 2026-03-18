/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18013AFA0
 * Callers:
 *     ?ShouldChainForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18013AD24 (-ShouldChainForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18013AF0C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveChainingHelper@CInteractionTracker@@UEBAPEAVCChainingHelper@@XZ @ 0x18013AF80 (-TryGetActiveChainingHelper@CInteractionTracker@@UEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveChainingHelper@CInteractionTracker2@@UEBAPEAVCChainingHelper@@XZ @ 0x18021E230 (-TryGetActiveChainingHelper@CInteractionTracker2@@UEBAPEAVCChainingHelper@@XZ.c)
 *     ?ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18028E4AC (-ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213EB8 (-find@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(InteractionSourceManager *this)
{
  char *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 8;
  if ( *((_QWORD *)v2 + 2)
    && *((_QWORD *)this + 13)
    && (std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::find(
          v2,
          &v4,
          *(_QWORD *)(*((_QWORD *)this + 10) + 8 * ((*((_QWORD *)this + 11) - 1LL) & (*((_QWORD *)this + 12) >> 1)))
        + 8 * (*((_QWORD *)this + 12) & 1LL)),
        v4 != *((_QWORD *)this + 2)) )
  {
    return *(struct CChainingHelper **)(v4 + 24);
  }
  else
  {
    return 0LL;
  }
}
