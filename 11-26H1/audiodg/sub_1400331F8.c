/*
 * XREFs of sub_1400331F8 @ 0x1400331F8
 * Callers:
 *     sub_1400330E4 @ 0x1400330E4 (sub_1400330E4.c)
 *     sub_14003322C @ 0x14003322C (sub_14003322C.c)
 *     sub_140033284 @ 0x140033284 (sub_140033284.c)
 *     sub_140055EB8 @ 0x140055EB8 (sub_140055EB8.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_1400331F8(struct _RTL_CRITICAL_SECTION *a1)
{
  InitializeCriticalSection(a1);
  return a1;
}
