/*
 * XREFs of ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180059F34
 * Callers:
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059D8C (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     ?HampHostIdStoreIsKeyWellFormed@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180059F6C (-HampHostIdStoreIsKeyWellFormed@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreCheckAndSanitizeKey(struct _HAM_HOSTID_STORE_KEY *a1)
{
  __int64 result; // rax

  if ( HampHostIdStoreIsKeyWellFormed(a1) )
    return 1LL;
  *((_WORD *)a1 + 231) = 0;
  result = 0LL;
  *((_WORD *)a1 + 523) = 0;
  return result;
}
