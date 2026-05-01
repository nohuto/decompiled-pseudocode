/*
 * XREFs of ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180665FE4
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066DB10 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18066E4A0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5F74 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _DSA_MaybeShrink @ 0x18065DC44 (_DSA_MaybeShrink.c)
 *     DSA_InsertItem @ 0x18065E180 (DSA_InsertItem.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180668568 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180672AA0 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall CPinList::AppendPidl(CPinList *this, struct CPinnedList *a2, const struct _ITEMIDLIST *a3)
{
  const ITEMIDLIST **PidlOrAppID; // rax
  int inserted; // edi
  const struct _ITEMIDLIST **v8; // rbx
  CPinList *v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  LPITEMIDLIST pitem; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  WCHAR pszPath; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[526]; // [rsp+52h] [rbp-AEh] BYREF

  v13 = 0;
  PidlOrAppID = (const ITEMIDLIST **)CPinList::FindPidlOrAppID(this, a3, 1, &v13);
  inserted = -1;
  v8 = PidlOrAppID;
  if ( PidlOrAppID && ILFindHiddenIDOn(*PidlOrAppID, -1091633108) )
  {
    pszPath = 0;
    memset_0(v18, 0, 0x206uLL);
    CPinList::_GetBackupShortcutToDelete(v9, a2, *v8, &pszPath);
    v10 = *(_QWORD *)this;
    if ( v13 >= 0 )
    {
      v11 = *(_DWORD *)v10;
      if ( v13 < *(_DWORD *)v10 )
      {
        if ( v13 < v11 - 1 )
          memmove_0(
            (void *)(*(_QWORD *)(v10 + 8) + (unsigned int)(v13 * *(_DWORD *)(v10 + 20))),
            (const void *)(*(_QWORD *)(v10 + 8) + (unsigned int)(*(_DWORD *)(v10 + 20) * (v13 + 1))),
            (unsigned int)(*(_DWORD *)(v10 + 20) * (v11 - v13 - 1)));
        --*(_DWORD *)v10;
        DSA_MaybeShrink(v10);
      }
    }
    if ( pszPath )
    {
      SHRemoveLocalizedName(&pszPath);
      DeleteFileW(&pszPath);
    }
  }
  pitem = ILClone(a3);
  v16 = 0LL;
  v15 = 0LL;
  if ( pitem )
  {
    inserted = DSA_InsertItem(*(HDSA *)this, 0x7FFFFFFF, &pitem);
    if ( inserted < 0 )
      ILFree(pitem);
  }
  return (unsigned int)inserted;
}
