/*
 * XREFs of sub_14002B868 @ 0x14002B868
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 *     sub_1400B1888 @ 0x1400B1888 (sub_1400B1888.c)
 * Callees:
 *     sub_14004935C @ 0x14004935C (sub_14004935C.c)
 */

__int64 __fastcall sub_14002B868(__int64 a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  return sub_14004935C(a1, 144LL, 2LL, sub_14000EDE0);
}
