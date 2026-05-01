/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D2E8
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033DE2C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExperien.c)
 *     ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033E98C (--$_Uninitialized_move@PEAU-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180341EE0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@Gaming.c)
 *     ??1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ @ 0x1803423E8 (--1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAA@XZ @ 0x180342C84 (--1_Reallocation_guard@-$vector@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allo.c)
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18035716C (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?_Change_array@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAXQEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@_K1@Z @ 0x180357A04 (-_Change_array@-$vector@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@U-.c)
 * Callees:
 *     ??1?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ @ 0x180341D94 (--1-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = OwnedHWinEventHook<GamingOverlayExperienceManager>::~OwnedHWinEventHook<GamingOverlayExperienceManager>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
