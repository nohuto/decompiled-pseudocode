/*
 * XREFs of ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x180692B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180693C48 (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x180696930 (-SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180699770 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 */

_BOOL8 __fastcall CPinList::ILWriteCallback(const struct _ITEMIDLIST **p, struct CPinnedList **pData)
{
  const ITEMIDLIST *v2; // rbp
  const struct _ITEMIDLIST *v4; // rcx
  CPinList *v6; // rcx
  unsigned int v8; // edi
  LPITEMIDLIST *v9; // rsi
  LPITEMIDLIST v10; // rcx
  HRESULT v11; // eax
  _BYTE pv[16]; // [rsp+20h] [rbp-258h] BYREF
  WCHAR pszPath; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v14[526]; // [rsp+32h] [rbp-246h] BYREF

  v2 = *p;
  v4 = *p;
  pv[0] = 0;
  if ( IsExpiredTombstone(v4) )
  {
    pszPath = 0;
    memset_0(v14, 0, 0x206uLL);
    CPinList::_GetBackupShortcutToDelete(v6, pData[24], *p, &pszPath);
    if ( pszPath )
    {
      SHRemoveLocalizedName(&pszPath);
      DeleteFileW(&pszPath);
    }
    return 1LL;
  }
  else
  {
    v8 = 0;
    v9 = (LPITEMIDLIST *)(pData + 4);
    while ( v8 < 0x14 )
    {
      if ( *v9 )
      {
        v10 = ILFindChild(*v9, *p);
        if ( v10 )
        {
          v2 = v10;
          pv[0] = byte_1807D61F0[4 * v8];
          break;
        }
      }
      ++v8;
      ++v9;
    }
    v11 = IStream_Write(*pData, pv, 1u);
    *((_DWORD *)pData + 6) = v11;
    if ( v11 >= 0 )
    {
      v11 = IStream_WritePidl(*pData, v2);
      *((_DWORD *)pData + 6) = v11;
      if ( v11 >= 0 )
      {
        v11 = CPinList::SaveShellLink(pData[2], (struct PINENTRY *)p, pData[1]);
        *((_DWORD *)pData + 6) = v11;
      }
    }
    return v11 >= 0;
  }
}
