/*
 * XREFs of sub_1400560EC @ 0x1400560EC
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_14004935C @ 0x14004935C (sub_14004935C.c)
 */

__int64 __fastcall sub_1400560EC(__int64 a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  return sub_14004935C(a1, 64LL, 2LL);
}
