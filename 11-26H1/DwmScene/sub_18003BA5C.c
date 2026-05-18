/*
 * XREFs of sub_18003BA5C @ 0x18003BA5C
 * Callers:
 *     sub_18003BA5C @ 0x18003BA5C (sub_18003BA5C.c)
 *     sub_18003D09C @ 0x18003D09C (sub_18003D09C.c)
 *     sub_180065DC4 @ 0x180065DC4 (sub_180065DC4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003AC54 @ 0x18003AC54 (sub_18003AC54.c)
 *     sub_18003BA5C @ 0x18003BA5C (sub_18003BA5C.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall sub_18003BA5C(__int64 a1, __m128 *a2)
{
  char v4; // di
  _QWORD *v5; // rax
  __m128 *v6; // rax
  __m128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  sub_18003D718(a1);
  if ( *sub_180013644(a1, &v11) )
  {
    v5 = sub_180013644(a1, &v9);
    v4 = 1;
    v6 = (__m128 *)sub_18003BA5C(*v5, v13);
  }
  else
  {
    v8 = (__m128)xmmword_1800FA7C0;
    v6 = &v8;
  }
  v8 = *v6;
  if ( (v4 & 1) != 0 && v10 )
    sub_180010EC8(v10);
  if ( v12 )
    sub_180010EC8(v12);
  sub_18003AC54(a2, (__m128 *)(a1 + 156), &v8);
  return a2;
}
