/*
 * XREFs of ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180035F40
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreCompareSessionByKey(void *a1, _DWORD *a2)
{
  if ( a2[22] >= (unsigned int)a1 )
    return a2[22] > (unsigned int)a1;
  else
    return 0xFFFFFFFFLL;
}
