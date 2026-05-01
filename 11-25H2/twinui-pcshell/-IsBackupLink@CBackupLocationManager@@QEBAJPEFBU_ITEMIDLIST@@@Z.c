/*
 * XREFs of ?IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x18066D130
 * Callers:
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180672AA0 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x18066C1DC (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackupLocationManager::IsBackupLink(const WCHAR **this, const struct _ITEMIDLIST *a2)
{
  const WCHAR *v2; // r8
  HRESULT v4; // ebx
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-28h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-20h] BYREF

  v2 = *this;
  punk = 0LL;
  v4 = SHCreateItemInKnownFolder(
         &FOLDERID_UserPinned,
         0x1000u,
         v2,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&punk);
  if ( v4 >= 0 )
  {
    ppidl = 0LL;
    v4 = SHGetIDListFromObject(punk, &ppidl);
    if ( v4 >= 0 )
    {
      if ( ILIsParent(ppidl, a2, 0) || (v4 = 1, (unsigned int)CPinnedList::ILIsParentByPath(ppidl, a2, 1u)) )
        v4 = 0;
      ILFree(ppidl);
    }
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->Release)(punk);
  }
  return (unsigned int)v4;
}
