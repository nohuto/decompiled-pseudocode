/*
 * XREFs of ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180671E40
 * Callers:
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18067254C (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180673134 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     BindCtx_SetMode @ 0x180666F3C (BindCtx_SetMode.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackupLocationManager::_CreateKnownFolderPidl(
        PCWSTR *this,
        const unsigned __int16 *a2,
        struct _ITEMIDLIST **a3)
{
  int v6; // ebx
  const WCHAR *FileNameW; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  IBindCtx *pbc; // [rsp+30h] [rbp-D0h] BYREF
  PWSTR ppszPath; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  *a3 = 0LL;
  ppszPath = 0LL;
  v6 = SHGetKnownFolderPath(&FOLDERID_UserPinned, 0x8000u, 0LL, &ppszPath);
  if ( v6 >= 0 )
  {
    if ( (PathComparePaths(ppszPath, a2) & 8) != 0 )
    {
      v6 = StringCchCopyW((char *)pszPath, 260LL, (char *)L"::{1f3427c8-5c10-4210-aa03-2ee45287d668}\\");
      if ( v6 < 0 )
        goto LABEL_10;
      v6 = PathCchAppend(pszPath, 0x104uLL, *this);
      if ( v6 < 0 )
        goto LABEL_10;
      FileNameW = PathFindFileNameW(a2);
      if ( FileNameW )
      {
        v6 = PathCchAppend(pszPath, 0x104uLL, FileNameW);
        if ( v6 >= 0 )
        {
          pbc = 0LL;
          if ( (int)BindCtx_SetMode(v9, v8, &pbc) >= 0 )
          {
            v6 = SHParseDisplayName(pszPath, pbc, a3, 0, 0LL);
            ((void (__fastcall *)(IBindCtx *))pbc->lpVtbl->Release)(pbc);
          }
        }
        goto LABEL_10;
      }
    }
    v6 = -2147467259;
LABEL_10:
    CoTaskMemFree(ppszPath);
  }
  return (unsigned int)v6;
}
