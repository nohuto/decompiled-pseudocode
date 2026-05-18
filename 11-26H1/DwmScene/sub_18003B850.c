/*
 * XREFs of sub_18003B850 @ 0x18003B850
 * Callers:
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003B850(__int64 a1, __int64 *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18003D718(a1);
  sub_180012BF8(a1 + 8, a2);
  while ( 1 )
  {
    sub_180013644(*a2, &v5);
    if ( !v5 )
      break;
    sub_180013540(a2, &v5);
    if ( v6 )
      sub_180010EC8(v6);
  }
  if ( v6 )
    sub_180010EC8(v6);
  return a2;
}
