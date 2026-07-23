/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x1402A2F40
 * Callers:
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL);
  *v3 = 0LL;
  return MiSetPageTablePfnBuddy(v3, a3, 16LL);
}
