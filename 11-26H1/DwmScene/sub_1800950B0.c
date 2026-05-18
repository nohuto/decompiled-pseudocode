/*
 * XREFs of sub_1800950B0 @ 0x1800950B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o_ceilf @ 0x18000CE1C (_o_ceilf.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800950B0(__int64 a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  float v8; // xmm8_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // r14d
  int v14; // r15d
  __int64 *v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rdi
  __int64 result; // rax
  signed int v24; // esi
  signed int v25; // r15d
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  _QWORD v36[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v37[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v38[32]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v39[4]; // [rsp+C0h] [rbp-48h] BYREF

  v8 = (float)a3;
  v9 = (float)*(int *)(a1 + 376);
  v10 = (float)a3 / v9;
  v11 = (float)a4;
  v12 = (float)a4 / v9;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  o_ceilf();
  v13 = (int)v10;
  o_ceilf();
  v14 = (int)v12;
  if ( !(int)v10 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  LODWORD(v32) = *(_DWORD *)(a1 + 376);
  v35 = *(_QWORD *)(a2 + 3984);
  sub_1800116C8(v35, &v33);
  v15 = (__int64 *)(a1 + 184);
  sub_180011F5C((_QWORD *)(a1 + 184), &v33);
  if ( v34 )
    sub_180010EC8(v34);
  v16 = *v15;
  v17 = sub_180011CC4(v37, "ImageProcessingBlurX");
  sub_1800292C4(v16, (__int64)v17);
  sub_180027EC8(*v15, v13, v14, a5, a6, 0LL);
  sub_1800116C8(v35, &v33);
  v18 = (__int64 *)(a1 + 200);
  sub_180011F5C((_QWORD *)(a1 + 200), &v33);
  if ( v34 )
    sub_180010EC8(v34);
  v19 = *v18;
  v20 = sub_180011CC4(v37, "ImageProcessingBlurY");
  sub_1800292C4(v19, (__int64)v20);
  sub_180027EC8(*v18, v13, v14, a5, a6, 0LL);
  v21 = (_QWORD *)(a1 + 216);
  sub_18008F734((__int64 *)(a1 + 216));
  v22 = a1 + 240;
  result = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 != *(_QWORD *)(v22 + 8) )
    *(_QWORD *)(v22 + 8) = result;
  v24 = 2;
  v25 = v32;
  while ( v24 <= v25 )
  {
    sub_1800116C8(v35, &v33);
    v26 = sub_180028AE4(v39, v24);
    v27 = sub_18001C928((__int64)v38, (__int64)"ImageProcessingBlur Downsample ", v26);
    sub_18001C87C((__int64)v37, v27, (__int64)"x");
    sub_1800129D0((__int64)v38);
    sub_1800129D0((__int64)v39);
    v28 = v33;
    v29 = sub_1800181BC(v36, (__int64)v37);
    sub_1800292C4(v28, (__int64)v29);
    o_ceilf();
    o_ceilf();
    sub_180027EC8(v33, (int)(float)(v8 / (float)v24), (int)(float)(v11 / (float)v24), a5, a6, 0LL);
    v30 = (_QWORD *)v21[1];
    if ( v30 == (_QWORD *)v21[2] )
    {
      sub_18001310C(v21, v21[1], &v33);
    }
    else
    {
      sub_180013084(v30, &v33);
      v21[1] += 16LL;
    }
    *(float *)&v32 = v8 / (float)v24;
    *((float *)&v32 + 1) = v11 / (float)v24;
    v31 = *(_QWORD *)(v22 + 8);
    if ( v31 == *(_QWORD *)(v22 + 16) )
      sub_1800852C0((void **)v22, v31, &v32);
    else
      sub_180085270(v22, &v32);
    v24 *= 2;
    result = sub_1800129D0((__int64)v37);
    if ( v34 )
      result = sub_180010EC8(v34);
  }
  return result;
}
