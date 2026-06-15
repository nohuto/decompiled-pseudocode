/*
 * XREFs of sub_14000A67C @ 0x14000A67C
 * Callers:
 *     sub_14002BB98 @ 0x14002BB98 (sub_14002BB98.c)
 *     sub_1400841E0 @ 0x1400841E0 (sub_1400841E0.c)
 * Callees:
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 */

__int64 __fastcall sub_14000A67C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  sub_14000C5E0(a1, a1, a2);
  sub_14000A6C4(v4, a1 + 48, a2 + 48);
  return sub_14000A6C4(v5, a1 + 96, a2 + 96);
}
