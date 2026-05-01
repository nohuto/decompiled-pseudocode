/*
 * XREFs of ?HampHostIdStoreIsKeyWellFormed@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180059F6C
 * Callers:
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180059F34 (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreIsKeyWellFormed(const wchar_t *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(unsigned __int8)PsmIsValidKey(a1) || wcsnlen(a1 + 268, 0x100uLL) == 256 )
    return 0LL;
  LOBYTE(v2) = RtlValidSid((PSID)(a1 + 232)) != 0;
  return v2;
}
