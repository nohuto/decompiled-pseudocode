/*
 * XREFs of ExpWnfEnumeratePermanentDataStoreHandles @ 0x140847398
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x140847008 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140B66BE8 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfEnumeratePermanentDataStoreHandles(unsigned int a1, __int64 a2, int a3)
{
  if ( a1 == 2 || a3 )
    return 3221225524LL;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(a1, a2, 0LL);
}
