/*
 * XREFs of ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18013B374
 * Callers:
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18013D67C (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x18013D7BC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x1801E1688 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213EB8 (-find@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToIdle(InteractionSourceManager *a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(v2 + 96);
      v5 = v4 + *(_QWORD *)(v2 + 104);
      while ( v4 != v5 )
      {
        v6 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 8 * ((*((_QWORD *)a1 + 11) - 1LL) & (v4 >> 1))) + 8 * (v4 & 1));
        CManipulation::SetCaptureState_RenderThread(*v6, 0LL);
        std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::find(
          (char *)a1 + 8,
          &v7,
          v6);
        CInteraction::ReportInertiaStop(*(CInteraction **)(*(_QWORD *)(v7 + 24) + 40LL));
        ++v4;
      }
    }
    InteractionSourceManager::ClearActiveManipulations(a1);
  }
  InteractionSourceManager::ReconfigureAllManipulations(a1);
}
