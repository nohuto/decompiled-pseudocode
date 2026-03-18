/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4
 * Callers:
 *     NtUserCheckMenuItem @ 0x14000A5D0 (NtUserCheckMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14000B280 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     NtUserDeleteMenu @ 0x14000D4A0 (NtUserDeleteMenu.c)
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     NtUserRemoveMenu @ 0x14004A3E0 (NtUserRemoveMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x140175948 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     NtUserDestroyMenu @ 0x1401F4A70 (NtUserDestroyMenu.c)
 *     NtUserEnableMenuItem @ 0x140203FC0 (NtUserEnableMenuItem.c)
 *     NtUserMenuItemFromPoint @ 0x14020CFD0 (NtUserMenuItemFromPoint.c)
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserThunkedMenuInfo @ 0x14020F5E0 (NtUserThunkedMenuInfo.c)
 *     NtUserSetMenu @ 0x140222360 (NtUserSetMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x140224710 (NtUserSetMenuDefaultItem.c)
 *     LockDesktopMenu @ 0x14022E8F8 (LockDesktopMenu.c)
 *     NtUserSetSystemMenu @ 0x140255BB0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenuFlagRtoL @ 0x14025DE40 (NtUserSetMenuFlagRtoL.c)
 *     NtUserHiliteMenuItem @ 0x1402B6200 (NtUserHiliteMenuItem.c)
 *     NtUserSetMenuContextHelpId @ 0x1402BD250 (NtUserSetMenuContextHelpId.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1)
{
  return !*(_QWORD *)(a1 + 16) && **(_QWORD **)a1 == 0LL;
}
