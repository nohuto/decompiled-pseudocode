/*
 * XREFs of ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401CFC08
 * Callers:
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x140216E04 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 * Callees:
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401CFB00 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

struct tagRECT *__fastcall InverseTransformRect(
        struct tagRECT *__return_ptr retstr,
        const struct tagRECT *a2,
        const struct tagINPUT_TRANSFORM *a3)
{
  LONG left; // edi
  LONG top; // ebx
  LONG right; // esi
  LONG bottom; // r14d
  __int64 v8; // kr00_8
  float *v9; // rax
  int v10; // r13d
  __m128 v11; // xmm6
  __m128 v12; // xmm7
  float *v13; // r12
  __m128 v14; // xmm6
  float *v15; // rdi
  __int64 v16; // rax
  float *v17; // rbx
  float *v18; // rax
  float *v19; // r9
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // r10d
  int v33; // ecx
  int v34; // r8d
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  LONG v45; // r13d
  int v46; // eax
  LONG v47; // r9d
  struct tagRECT *result; // rax
  char v49[8]; // [rsp+20h] [rbp-40h] BYREF
  char v50[8]; // [rsp+28h] [rbp-38h] BYREF
  char v51[8]; // [rsp+30h] [rbp-30h] BYREF
  char v52[8]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v55; // [rsp+B8h] [rbp+58h] BYREF

  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v8 = right - a2->left;
  *retstr = 0LL;
  v54 = _mm_unpacklo_ps(
          (__m128)COERCE_UNSIGNED_INT((float)(int)(left + v8 / 2)),
          (__m128)COERCE_UNSIGNED_INT((float)(top + (bottom - top) / 2))).m128_u64[0];
  v9 = (float *)InverseTransformPoint((__int64)&v55, (float *)&v54, (float *)a3);
  v10 = (int)*v9;
  LODWORD(v54) = (int)v9[1];
  v11 = (__m128)COERCE_UNSIGNED_INT((float)top);
  v55 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)left), v11).m128_u64[0];
  v12 = (__m128)COERCE_UNSIGNED_INT((float)right);
  v13 = (float *)InverseTransformPoint((__int64)v49, (float *)&v55, (float *)a3);
  v55 = _mm_unpacklo_ps(v12, v11).m128_u64[0];
  v14 = (__m128)COERCE_UNSIGNED_INT((float)bottom);
  v15 = (float *)InverseTransformPoint((__int64)v50, (float *)&v55, (float *)a3);
  v55 = _mm_unpacklo_ps(v12, v14).m128_u64[0];
  v16 = InverseTransformPoint((__int64)v51, (float *)&v55, (float *)a3);
  v55 = _mm_unpacklo_ps(v12, v14).m128_u64[0];
  v17 = (float *)v16;
  v18 = (float *)InverseTransformPoint((__int64)v52, (float *)&v55, (float *)a3);
  v19 = v18;
  v20 = (int)*v13;
  v21 = (int)*v17 - v10;
  if ( v21 < 0 )
    v21 = v10 - (int)*v17;
  v22 = v10 - v20;
  v23 = (int)*v18;
  v24 = v20 - v10;
  if ( v24 < 0 )
    v24 = v22;
  v25 = v24 + v21;
  v26 = (int)*v15;
  v27 = v10 - v23;
  v28 = v23 - v10;
  if ( v28 < 0 )
    v28 = v27;
  v29 = v25 + v28;
  v30 = v10 - v26;
  v31 = v26 - v10;
  if ( v31 < 0 )
    v31 = v30;
  v32 = (v31 + v29) / 4;
  v33 = (int)v17[1];
  v34 = (int)v19[1] - v54;
  if ( (int)v54 - (int)v19[1] > 0 )
    v34 = v54 - (int)v19[1];
  v35 = (int)v15[1];
  v36 = v54 - v33;
  v37 = v33 - v54;
  if ( v37 < 0 )
    v37 = v36;
  v38 = v37 + v34;
  v39 = (int)v13[1];
  v40 = v54 - v35;
  v41 = v35 - v54;
  if ( v41 < 0 )
    v41 = v40;
  v42 = v38 + v41;
  v43 = v54 - v39;
  v44 = v39 - v54;
  if ( v44 < 0 )
    v44 = v43;
  v45 = v10 - v32;
  v46 = (v44 + v42) / 4;
  v47 = v54 - v46;
  retstr->left = v45;
  retstr->top = v47;
  retstr->bottom = v47 + 2 * v46;
  result = retstr;
  retstr->right = v45 + 2 * v32;
  return result;
}
