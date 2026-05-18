/*
 * XREFs of sub_18003AD4C @ 0x18003AD4C
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_18003C930 @ 0x18003C930 (sub_18003C930.c)
 *     sub_18003CCD0 @ 0x18003CCD0 (sub_18003CCD0.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003AD4C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003D758();
  if ( (__int64)(a1[5] - a1[4]) >> 4 )
  {
    sub_180012C40(&v6, (_QWORD *)(a1[5] - 16LL));
    sub_18003C930(v6, a2);
    sub_18003CCD0(*a2, &v6);
    if ( v7 )
      sub_180010EC8(v7);
  }
  v4 = (_QWORD *)a1[5];
  if ( v4 == (_QWORD *)a1[6] )
    return sub_18001310C(a1 + 4, a1[5], a2);
  result = sub_180013084(v4, a2);
  a1[5] += 16LL;
  return result;
}
