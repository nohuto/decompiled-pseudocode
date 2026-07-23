/*
 * XREFs of CcFlushCacheToLsn @ 0x140398870
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 */

__int64 __fastcall CcFlushCacheToLsn(int a1, int a2, __int64 a3)
{
  return CcFlushCachePriv(a1, 0, 0, a2, 0, a3, 0LL);
}
