/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98
 * Callers:
 *     NtUserCheckMenuItem @ 0x14000A5D0 (NtUserCheckMenuItem.c)
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
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     NtUserRemoveMenu @ 0x14004A3E0 (NtUserRemoveMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     NtUserDestroyMenu @ 0x1401F4A70 (NtUserDestroyMenu.c)
 *     NtUserEnableMenuItem @ 0x140203FC0 (NtUserEnableMenuItem.c)
 *     NtUserSetMenu @ 0x140222360 (NtUserSetMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
      {
        v2 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        return Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v2);
      }
    }
  }
  return result;
}
