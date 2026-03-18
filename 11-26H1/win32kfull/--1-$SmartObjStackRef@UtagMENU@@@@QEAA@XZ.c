/*
 * XREFs of ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678
 * Callers:
 *     xxxCalcMenuBar @ 0x140009E50 (xxxCalcMenuBar.c)
 *     NtUserCheckMenuItem @ 0x14000A5D0 (NtUserCheckMenuItem.c)
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     _CheckMenuItem @ 0x14000ABE4 (_CheckMenuItem.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000BD3C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14000BDA4 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     NtUserDeleteMenu @ 0x14000D4A0 (NtUserDeleteMenu.c)
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     xxxGetSysMenuPtr @ 0x14000EF90 (xxxGetSysMenuPtr.c)
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 *     _SetMenuDefaultItem @ 0x14000F3B0 (_SetMenuDefaultItem.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNFreeItem @ 0x140034288 (MNFreeItem.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     NtUserRemoveMenu @ 0x14004A3E0 (NtUserRemoveMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     UnlockPopupMenu @ 0x1401758E0 (UnlockPopupMenu.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401BAF24 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1401BB010 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 *     NtUserDestroyMenu @ 0x1401F4A70 (NtUserDestroyMenu.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     NtUserEnableMenuItem @ 0x140203FC0 (NtUserEnableMenuItem.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     NtUserMenuItemFromPoint @ 0x14020CFD0 (NtUserMenuItemFromPoint.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserThunkedMenuInfo @ 0x14020F5E0 (NtUserThunkedMenuInfo.c)
 *     NtUserSetMenu @ 0x140222360 (NtUserSetMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x140224710 (NtUserSetMenuDefaultItem.c)
 *     xxxSetDialogSystemMenu @ 0x14022E75C (xxxSetDialogSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x14022E8F8 (LockDesktopMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     MenuRecalc @ 0x14023D0D0 (MenuRecalc.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     NtUserSetSystemMenu @ 0x140255BB0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenuFlagRtoL @ 0x14025DE40 (NtUserSetMenuFlagRtoL.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     NtUserHiliteMenuItem @ 0x1402B6200 (NtUserHiliteMenuItem.c)
 *     NtUserSetMenuContextHelpId @ 0x1402BD250 (NtUserSetMenuContextHelpId.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E1904 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     _GetMenuDefaultItem @ 0x140302918 (_GetMenuDefaultItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(__int64 *a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v5; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8) )
  {
    if ( *(_BYTE *)(*a1 + 12) )
    {
      v5 = *a1;
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v5);
    }
  }
  result = *(_QWORD **)(v3 + 1672);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v3 + 1672) = result;
  }
  return result;
}
