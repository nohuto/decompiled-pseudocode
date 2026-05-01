/*
 * XREFs of EncodeRelativePath @ 0x18009C028
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18009B7DC (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x180219CF4 (-ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     PathCommonPrefixW_0 @ 0x1802D4206 (PathCommonPrefixW_0.c)
 *     lstrlenW_0 @ 0x1802D4212 (lstrlenW_0.c)
 */

void __fastcall EncodeRelativePath(unsigned __int16 *a1, WCHAR *a2, __int64 a3, __int64 a4, WCHAR *pszFile2)
{
  int v5; // r14d
  unsigned int i; // ebx
  int v9; // eax
  unsigned __int64 v10; // rsi
  PWSTR ppszPath; // [rsp+58h] [rbp+10h] BYREF

  ppszPath = a2;
  v5 = 0;
  for ( i = 0; i < 3; ++i )
  {
    ppszPath = 0LL;
    if ( SHGetKnownFolderPath((const KNOWNFOLDERID *const)(a3 + 16LL * i), 0x5000u, 0LL, &ppszPath) >= 0 )
    {
      v9 = PathCommonPrefixW_0(ppszPath, pszFile2, 0LL);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 == lstrlenW_0(ppszPath) )
        {
          ReplaceInitialPathCharactersWithGuid(a1, 0x104uLL, pszFile2, (const struct _GUID *)(a3 + 16LL * i), v10);
          v5 = 1;
        }
      }
      CoTaskMemFree_0(ppszPath);
    }
    if ( v5 )
      return;
  }
  StringCchCopyW((char *)a1, 260LL, (char *)pszFile2);
}
