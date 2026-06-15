/*
 * XREFs of sub_140046C10 @ 0x140046C10
 * Callers:
 *     sub_1400B4880 @ 0x1400B4880 (sub_1400B4880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140046C10(struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1 + 1);
  return sub_140046C3C(a1);
}
