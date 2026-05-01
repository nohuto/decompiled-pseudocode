/*
 * XREFs of ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18069B130
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068D7D4 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x180698C88 (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x180699214 (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::s_ShouldCreateNewFile(WCHAR *pszPath)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( PathFileExistsW(pszPath) && !PathYetAnotherMakeUniqueName(pszPath, pszPath, 0LL, 0LL) )
    return (unsigned int)-2147467259;
  return v2;
}
