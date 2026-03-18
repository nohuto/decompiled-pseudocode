/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44
 * Callers:
 *     xxxCalcMenuBar @ 0x140009E50 (xxxCalcMenuBar.c)
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     NtUserMenuItemFromPoint @ 0x14020CFD0 (NtUserMenuItemFromPoint.c)
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserThunkedMenuInfo @ 0x14020F5E0 (NtUserThunkedMenuInfo.c)
 *     NtUserSetMenu @ 0x140222360 (NtUserSetMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x140224710 (NtUserSetMenuDefaultItem.c)
 *     xxxSetDialogSystemMenu @ 0x14022E75C (xxxSetDialogSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x14022E8F8 (LockDesktopMenu.c)
 *     MenuRecalc @ 0x14023D0D0 (MenuRecalc.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     NtUserSetSystemMenu @ 0x140255BB0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenuFlagRtoL @ 0x14025DE40 (NtUserSetMenuFlagRtoL.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserHiliteMenuItem @ 0x1402B6200 (NtUserHiliteMenuItem.c)
 *     NtUserSetMenuContextHelpId @ 0x1402BD250 (NtUserSetMenuContextHelpId.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E1904 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != **(_QWORD **)a1 )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(a1);
    if ( a2 )
    {
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 152);
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
    else
    {
      *(_QWORD *)a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
