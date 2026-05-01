/*
 * XREFs of ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18069AD30
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068E1DC (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x180698C88 (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x180699214 (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall CBackupLocationManager::s_CopyLocalizedName(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  int result; // eax
  int pidsRes[4]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pszResModule[264]; // [rsp+30h] [rbp-228h] BYREF

  pidsRes[0] = 0;
  result = SHGetLocalizedName(a1, pszResModule, 0x104u, pidsRes);
  if ( result >= 0 )
    return SHSetLocalizedName(a2, pszResModule, pidsRes[0]);
  return result;
}
