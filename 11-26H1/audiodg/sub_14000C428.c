/*
 * XREFs of sub_14000C428 @ 0x14000C428
 * Callers:
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 *     sub_140011F40 @ 0x140011F40 (sub_140011F40.c)
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 */

__int64 sub_14000C428()
{
  __int64 v0; // rax

  v0 = sub_14000DA4C();
  return sub_14000DF30(176LL, v0);
}
