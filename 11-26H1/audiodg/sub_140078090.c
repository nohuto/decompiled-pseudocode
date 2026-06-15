/*
 * XREFs of sub_140078090 @ 0x140078090
 * Callers:
 *     sub_140077E38 @ 0x140077E38 (sub_140077E38.c)
 * Callees:
 *     sub_140047C6C @ 0x140047C6C (sub_140047C6C.c)
 *     sub_14007BEA4 @ 0x14007BEA4 (sub_14007BEA4.c)
 */

__int64 __fastcall sub_140078090(struct _RTL_CRITICAL_SECTION *a1)
{
  sub_14007BEA4();
  sub_140047C6C(a1 + 5);
  return sub_1400781C0(&a1->LockCount);
}
