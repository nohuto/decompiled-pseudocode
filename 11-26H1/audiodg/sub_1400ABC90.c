/*
 * XREFs of sub_1400ABC90 @ 0x1400ABC90
 * Callers:
 *     sub_1400ABD00 @ 0x1400ABD00 (sub_1400ABD00.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140036020 @ 0x140036020 (sub_140036020.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall sub_1400ABC90(__int64 a1, char a2)
{
  __int64 v4; // rcx
  double result; // xmm0_8
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  sub_140036020(&v6, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    result = sub_1400B6010(v4);
  sub_140018FF0(&v6);
  if ( a2 )
    return sub_1400B6010(a1);
  return result;
}
