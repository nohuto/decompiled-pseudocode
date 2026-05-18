/*
 * XREFs of sub_180012FA4 @ 0x180012FA4
 * Callers:
 *     sub_18001EBB8 @ 0x18001EBB8 (sub_18001EBB8.c)
 *     sub_18001EC60 @ 0x18001EC60 (sub_18001EC60.c)
 *     sub_18001ED64 @ 0x18001ED64 (sub_18001ED64.c)
 *     sub_18001EE58 @ 0x18001EE58 (sub_18001EE58.c)
 *     sub_1800307B8 @ 0x1800307B8 (sub_1800307B8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 */

__int64 __fastcall sub_180012FA4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax

  v3 = sub_18001323C(++*a2);
  result = sub_180011790(v3);
  --*a2;
  return result;
}
