/*
 * XREFs of ??$_Emplace@AEBQEAVCInteractionTrackerBase@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801383BC
 * Callers:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_N@Z @ 0x1801364DC (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180136A28 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@@std@@_N@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801379CC (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTrackerBase@@U-$less@PEAVCInteraction.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollState@@@Z @ 0x180137A00 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@PEAVCBaseExpression@@@Z @ 0x1801D99BC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractio.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x1801D9BC0 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEBQEAVCInteractionTrackerBase@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@1@AEBQEAVCInteractionTrackerBase@@@Z @ 0x1801384D4 (--$-0AEBQEAVCInteractionTrackerBase@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAVCInteract.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@2@QEAU32@@Z @ 0x180138554 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAPEA.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::_Emplace<CInteractionTrackerBase * const &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // r11
  __int64 *v6; // r9
  __int64 *v7; // rdx
  unsigned __int64 v8; // r10
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  void *v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v16 = (unsigned __int64)v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v16 = v7;
      if ( v7[4] < v8 )
      {
        v9 = 1;
        DWORD2(v16) = 0;
      }
      else
      {
        v9 = 0;
        DWORD2(v16) = 1;
        v6 = v7;
      }
      v10 = v7 + 2;
      if ( !v9 )
        v10 = v7;
      v7 = (__int64 *)*v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < v6[4] )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>(
            v14,
            a1,
            v3,
            a3);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    if ( v15 )
      std::_Deallocate<16>(v15, 0x28uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Insert_node(a1, &v16, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
