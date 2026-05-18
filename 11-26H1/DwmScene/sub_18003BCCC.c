/*
 * XREFs of sub_18003BCCC @ 0x18003BCCC
 * Callers:
 *     sub_1800136B0 @ 0x1800136B0 (sub_1800136B0.c)
 *     sub_180015B30 @ 0x180015B30 (sub_180015B30.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003BDF4 @ 0x18003BDF4 (sub_18003BDF4.c)
 *     sub_18003CF74 @ 0x18003CF74 (sub_18003CF74.c)
 *     sub_18003D2F4 @ 0x18003D2F4 (sub_18003D2F4.c)
 *     sub_18003D360 @ 0x18003D360 (sub_18003D360.c)
 *     sub_180048D48 @ 0x180048D48 (sub_180048D48.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18005B3C0 @ 0x18005B3C0 (sub_18005B3C0.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18007A6E0 @ 0x18007A6E0 (sub_18007A6E0.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 *     sub_18003B8E0 @ 0x18003B8E0 (sub_18003B8E0.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003BE64 @ 0x18003BE64 (sub_18003BE64.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_18003BCCC(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // rbp
  _OWORD *v5; // rbx
  __int128 *v6; // rax
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v12; // [rsp+20h] [rbp-118h] BYREF
  __int64 v13; // [rsp+28h] [rbp-110h]
  _BYTE v14[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v15[4]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v16[64]; // [rsp+B0h] [rbp-88h] BYREF
  _OWORD v17[4]; // [rsp+F0h] [rbp-48h] BYREF

  sub_18003D718(a1);
  v4 = sub_18003BE64(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180013644(a1, &v12);
    if ( v12 )
    {
      v5 = (_OWORD *)sub_18003BCCC(v12, v14);
      v6 = sub_18003B8E0(a1, v15);
      v7 = sub_18001896C((__int64)v16, v6, v5);
    }
    else
    {
      v7 = sub_18003B8E0(a1, v17);
    }
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    *(_OWORD *)(a1 + 288) = *v7;
    *(_OWORD *)(a1 + 304) = v8;
    *(_OWORD *)(a1 + 320) = v9;
    *(_OWORD *)(a1 + 336) = v10;
    *(_QWORD *)(a1 + 360) = v4;
    if ( v13 )
      sub_180010EC8(v13);
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
