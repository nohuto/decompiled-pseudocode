/*
 * XREFs of sub_18003B950 @ 0x18003B950
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_180065DC4 @ 0x180065DC4 (sub_180065DC4.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18008DA30 @ 0x18008DA30 (sub_18008DA30.c)
 *     sub_18008DBE8 @ 0x18008DBE8 (sub_18008DBE8.c)
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003D1E8 @ 0x18003D1E8 (sub_18003D1E8.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003B950(__int64 a1, __int64 a2)
{
  char v4; // di
  _QWORD *v5; // rax
  _OWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v14[64]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  sub_18003D718(a1);
  if ( *sub_180013644(a1, &v10) )
  {
    v5 = sub_180013644(a1, &v8);
    v4 = 1;
    v6 = (_OWORD *)sub_18003BCCC(*v5, v14);
  }
  else
  {
    v12[0] = xmmword_1800FA780;
    v12[1] = xmmword_1800FA790;
    v12[2] = xmmword_1800FA7A0;
    v12[3] = xmmword_1800FA7B0;
    v6 = v12;
  }
  v13[0] = *v6;
  v13[1] = v6[1];
  v13[2] = v6[2];
  v13[3] = v6[3];
  if ( (v4 & 1) != 0 && v9 )
    sub_180010EC8(v9);
  if ( v11 )
    sub_180010EC8(v11);
  sub_18003D1E8(a2, a1 + 144, v13);
  return a2;
}
