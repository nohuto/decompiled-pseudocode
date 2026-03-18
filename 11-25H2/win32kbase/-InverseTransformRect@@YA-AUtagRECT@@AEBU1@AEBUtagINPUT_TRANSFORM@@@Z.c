/*
 * XREFs of ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401ADABC
 * Callers:
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x14020C0A8 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 * Callees:
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AD9C0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

struct tagRECT *__fastcall InverseTransformRect(
        struct tagRECT *__return_ptr retstr,
        const struct tagRECT *a2,
        const struct tagINPUT_TRANSFORM *a3)
{
  LONG left; // edi
  LONG top; // ebx
  LONG right; // r14d
  LONG bottom; // r15d
  __int64 v8; // kr00_8
  float *v9; // rax
  int v10; // edx
  __m128 v11; // xmm6
  float *v12; // rax
  __m128 v13; // xmm7
  int v14; // esi
  int v15; // r13d
  float *v16; // rax
  __m128 v17; // xmm6
  int v18; // edi
  int v19; // r12d
  float *v20; // rax
  int v21; // ebx
  int v22; // r14d
  float *v23; // rax
  int v24; // r8d
  int v25; // r10d
  int v26; // r9d
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // r8d
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // r11d
  int v40; // eax
  LONG v41; // r9d
  struct tagRECT *result; // rax
  unsigned __int64 v43; // [rsp+20h] [rbp-38h] BYREF
  char v44[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp+50h] BYREF
  float *v47; // [rsp+B0h] [rbp+58h]
  int v48; // [rsp+B8h] [rbp+60h] BYREF

  v47 = (float *)a3;
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v8 = right - a2->left;
  *retstr = 0LL;
  v46 = _mm_unpacklo_ps(
          (__m128)COERCE_UNSIGNED_INT((float)(int)(left + v8 / 2)),
          (__m128)COERCE_UNSIGNED_INT((float)(top + (bottom - top) / 2))).m128_u64[0];
  v9 = (float *)InverseTransformPoint((__int64)&v48, (float *)&v46, (float *)a3);
  v10 = (int)v9[1];
  LODWORD(v46) = (int)*v9;
  v11 = (__m128)COERCE_UNSIGNED_INT((float)top);
  v48 = v10;
  v43 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)left), v11).m128_u64[0];
  v12 = (float *)InverseTransformPoint((__int64)v44, (float *)&v43, (float *)a3);
  v13 = (__m128)COERCE_UNSIGNED_INT((float)right);
  v14 = (int)*v12;
  v15 = (int)v12[1];
  v43 = _mm_unpacklo_ps(v13, v11).m128_u64[0];
  v16 = (float *)InverseTransformPoint((__int64)v44, (float *)&v43, (float *)a3);
  v17 = (__m128)COERCE_UNSIGNED_INT((float)bottom);
  v18 = (int)*v16;
  v19 = (int)v16[1];
  v43 = _mm_unpacklo_ps(v13, v17).m128_u64[0];
  v20 = (float *)InverseTransformPoint((__int64)v44, (float *)&v43, v47);
  v21 = (int)*v20;
  v22 = (int)v20[1];
  v43 = _mm_unpacklo_ps(v13, v17).m128_u64[0];
  v23 = (float *)InverseTransformPoint((__int64)v44, (float *)&v43, v47);
  v24 = (int)*v23;
  v25 = (int)v23[1];
  v26 = v14 - v46;
  if ( v14 - (int)v46 < 0 )
    v26 = v46 - v14;
  v27 = v18 - v46;
  if ( v18 - (int)v46 < 0 )
    v27 = v46 - v18;
  v28 = v26 + v27;
  v29 = v21 - v46;
  if ( (int)v46 - v21 > 0 )
    v29 = v46 - v21;
  v30 = v29 + v28;
  v31 = v24 - v46;
  if ( v24 - (int)v46 < 0 )
    v31 = v46 - v24;
  v32 = (v31 + v30) / 4;
  v33 = v15 - v48;
  if ( v15 - v48 < 0 )
    v33 = v48 - v15;
  v34 = v19 - v48;
  if ( v48 - v19 > 0 )
    v34 = v48 - v19;
  v35 = v34 + v33;
  v36 = v22 - v48;
  if ( v22 - v48 < 0 )
    v36 = v48 - v22;
  v37 = v36 + v35;
  v38 = v25 - v48;
  if ( v25 - v48 < 0 )
    v38 = v48 - v25;
  v39 = v46 - v32;
  v40 = (v38 + v37) / 4;
  v41 = v48 - v40;
  retstr->left = v46 - v32;
  retstr->top = v41;
  retstr->bottom = v41 + 2 * v40;
  result = retstr;
  retstr->right = v39 + 2 * v32;
  return result;
}
