/*
 * XREFs of sub_180046298 @ 0x180046298
 * Callers:
 *     sub_180048454 @ 0x180048454 (sub_180048454.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180045FA8 @ 0x180045FA8 (sub_180045FA8.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 */

__int64 __fastcall sub_180046298(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 *v11; // rax
  int v12; // eax
  int v13; // ecx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v11 = (__int64 *)sub_180045FA8(a6, (__int64)&v15, a7);
    sub_180011F5C(a1, v11);
    if ( v16 )
      sub_180010EC8(v16);
    sub_180029310(*a1, 8, 0);
  }
  v12 = sub_18004744C(6LL);
  return sub_180082258(*a1, a2, a3, a4 * v12, a5, v13);
}
