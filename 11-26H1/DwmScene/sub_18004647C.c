/*
 * XREFs of sub_18004647C @ 0x18004647C
 * Callers:
 *     sub_180047EF0 @ 0x180047EF0 (sub_180047EF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180045F88 @ 0x180045F88 (sub_180045F88.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 */

__int64 __fastcall sub_18004647C(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 *v10; // rax
  int v11; // eax
  int v12; // ecx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = sub_180045F88(a6, &v14);
    sub_180011F5C(a1, v10);
    if ( v15 )
      sub_180010EC8(v15);
    sub_180029310(*a1, 8, 0);
  }
  v11 = sub_18004744C(12LL);
  return sub_180082258(*a1, a2, a3, a4 * v11, a5, v12);
}
