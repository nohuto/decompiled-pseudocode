/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180
 * Callers:
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserTrackPopupMenuEx @ 0x14003CDB0 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetMenuItemRect @ 0x14003D5F0 (NtUserGetMenuItemRect.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1400406C0 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     NtUserDeleteMenu @ 0x140046680 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x1400467F0 (NtUserDestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140047038 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     NtUserRemoveMenu @ 0x1400473B0 (NtUserRemoveMenu.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x14016EA90 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     NtUserThunkedMenuInfo @ 0x1401B24D0 (NtUserThunkedMenuInfo.c)
 *     LockDesktopMenu @ 0x1401B2D64 (LockDesktopMenu.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     NtUserCheckMenuItem @ 0x1401D1CB0 (NtUserCheckMenuItem.c)
 *     NtUserEnableMenuItem @ 0x1401E53F0 (NtUserEnableMenuItem.c)
 *     NtUserSetMenu @ 0x1401FBBA0 (NtUserSetMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1401FBE60 (NtUserSetMenuDefaultItem.c)
 *     NtUserMenuItemFromPoint @ 0x1402151F0 (NtUserMenuItemFromPoint.c)
 *     NtUserSetSystemMenu @ 0x14021ECA0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenuFlagRtoL @ 0x140224B50 (NtUserSetMenuFlagRtoL.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x14026F0D8 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 *     NtUserHiliteMenuItem @ 0x140299C40 (NtUserHiliteMenuItem.c)
 *     NtUserSetMenuContextHelpId @ 0x14029F660 (NtUserSetMenuContextHelpId.c)
 *     NtUserThunkedMenuItemInfo @ 0x1402A2A70 (NtUserThunkedMenuItemInfo.c)
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     xxxGetSystemMenu @ 0x1402CA414 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E378C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1)
{
  return !*(_QWORD *)(a1 + 16) && **(_QWORD **)a1 == 0LL;
}
