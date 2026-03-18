/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC
 * Callers:
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x1400464EC (_SetMenuDefaultItem.c)
 *     NtUserDeleteMenu @ 0x140046680 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x1400467F0 (NtUserDestroyMenu.c)
 *     xxxSetMenuItemInfo @ 0x1400468EC (xxxSetMenuItemInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxMNCanClose @ 0x1400471A0 (xxxMNCanClose.c)
 *     NtUserRemoveMenu @ 0x1400473B0 (NtUserRemoveMenu.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     xxxInsertMenuItem @ 0x140048320 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     NtUserCheckMenuItem @ 0x1401D1CB0 (NtUserCheckMenuItem.c)
 *     NtUserSetMenu @ 0x1401FBBA0 (NtUserSetMenu.c)
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
