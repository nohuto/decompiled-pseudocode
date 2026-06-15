/*
 * XREFs of sub_14002B828 @ 0x14002B828
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 *     sub_1400B0105 @ 0x1400B0105 (sub_1400B0105.c)
 *     sub_1400B186F @ 0x1400B186F (sub_1400B186F.c)
 * Callees:
 *     sub_14004935C @ 0x14004935C (sub_14004935C.c)
 */

__int64 __fastcall sub_14002B828(struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1 + 3);
  return sub_14004935C(a1, 48LL, 2LL, sub_14003ED90);
}
