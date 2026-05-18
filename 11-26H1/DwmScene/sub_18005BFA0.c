/*
 * XREFs of sub_18005BFA0 @ 0x18005BFA0
 * Callers:
 *     sub_18005C6D4 @ 0x18005C6D4 (sub_18005C6D4.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 */

__int64 __fastcall sub_18005BFA0(__int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_180011CC4(v5, a2);
  return sub_18005C940(a1, v3);
}
