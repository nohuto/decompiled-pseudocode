/*
 * XREFs of sub_140111A1C @ 0x140111A1C
 * Callers:
 *     sub_1400FA6EC @ 0x1400FA6EC (sub_1400FA6EC.c)
 *     sub_1400FAAB4 @ 0x1400FAAB4 (sub_1400FAAB4.c)
 *     sub_1400FB69C @ 0x1400FB69C (sub_1400FB69C.c)
 *     sub_1400FBA48 @ 0x1400FBA48 (sub_1400FBA48.c)
 *     sub_1401A6E7C @ 0x1401A6E7C (sub_1401A6E7C.c)
 * Callees:
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_140111898 @ 0x140111898 (sub_140111898.c)
 */

__int64 __fastcall sub_140111A1C(__int64 a1)
{
  __int64 v2; // rcx

  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 968LL) & 1) == 0 || sub_140111898(a1) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1272LL);
  if ( v2 )
    *(_DWORD *)(v2 + 48) |= 1u;
  sub_1400A9114(
    a1,
    1,
    3,
    (__int64)L"Namespace wait for remove lock timed out",
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  return 3221225653LL;
}
