/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC
 * Callers:
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D97C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1401BC1C0 (xxxGetMenuBarInfo.c)
 *     MNFlushDestroyedPopups @ 0x1402222C0 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140267AFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNUnlinkDelayedFreePopups @ 0x1402B5A50 (MNUnlinkDelayedFreePopups.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402BEDCC (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BF430 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1402BF8CC (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxGetSystemMenu @ 0x1402CA414 (xxxGetSystemMenu.c)
 *     xxxMNDragOver @ 0x1402E9810 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1402E998C (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x140045BC0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != **(_QWORD **)a1 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(a1);
    if ( a2 )
    {
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
    else
    {
      *(_QWORD *)a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
