/*
 * XREFs of ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180180920
 * Callers:
 *     ?GetTransform@CGDIBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AF780 (-GetTransform@CGDIBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetTransform@CGDIBitmapRealization@@WBEA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AF7A0 (-GetTransform@CGDIBitmapRealization@@WBEA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  float *v3; // r11
  int v4; // eax
  _BYTE *v7; // r8
  int *v8; // r14
  int *v9; // rsi
  unsigned __int8 v10; // bp
  char v11; // cl
  char v12; // cl
  __int64 v13; // rcx
  int v14; // ecx
  float v15; // xmm1_4
  float v16; // xmm2_4
  __int32 v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  int v27; // [rsp+40h] [rbp+8h] BYREF
  int v28; // [rsp+44h] [rbp+Ch]

  *(_QWORD *)a2 = 1065353216LL;
  v3 = (float *)(a2 + 48);
  v4 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v7 = (_BYTE *)(a2 + 65);
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  v8 = (int *)(a1 + 328);
  *(_DWORD *)(a2 + 36) = 0;
  v9 = (int *)(a1 + 336);
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  v10 = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 52) = 0LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v11 = *(_BYTE *)(a2 + 65);
  *(_BYTE *)(a2 + 64) = -86;
  v12 = v11 & 0xC0 | 0x29;
  *(_BYTE *)(a2 + 65) = v12;
  if ( !*v8 )
  {
    if ( !*v9 )
      goto LABEL_3;
    v3 = (float *)(a2 + 48);
    v7 = (_BYTE *)(a2 + 65);
  }
  COERCE_FLOAT(v18 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  LODWORD(v19) = COERCE_UNSIGNED_INT((float)*v8) ^ _xmm;
  LODWORD(v20) = COERCE_UNSIGNED_INT((float)*v9) ^ _xmm;
  if ( COERCE_FLOAT(LODWORD(v19) & v18) >= 0.000081380211 )
    goto LABEL_10;
  if ( COERCE_FLOAT(LODWORD(v20) & v18) >= 0.000081380211 )
  {
    v3 = (float *)(a2 + 48);
    v7 = (_BYTE *)(a2 + 65);
LABEL_10:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(0.0 * 61440.0) - 0.0) & v18) >= 0.000081380211 )
    {
      v21 = *(float *)(a2 + 28);
      *v7 = v12 & 0xF3;
      *(float *)a2 = (float)(v19 * 0.0) + 1.0;
      v22 = v21 * v19;
      *(float *)(a2 + 4) = (float)(v20 * 0.0) + 0.0;
      v23 = (float)(v21 * v20) + *(float *)(a2 + 20);
      *(float *)(a2 + 16) = v22 + *(float *)(a2 + 16);
      v24 = (float)(v20 * 0.0) + *(float *)(a2 + 36);
      *(float *)(a2 + 20) = v23;
      v25 = *(float *)(a2 + 60);
      v26 = (float)(v19 * 0.0) + *(float *)(a2 + 32);
      *(float *)(a2 + 36) = v24;
      *(float *)(a2 + 32) = v26;
      v19 = v25 * v19;
      *(float *)(a2 + 52) = (float)(v25 * v20) + 0.0;
    }
    else
    {
      *(float *)(a2 + 52) = v20 + *(float *)(a2 + 52);
    }
    v9 = (int *)(a1 + 336);
    *v3 = v19 + 0.0;
    *(_BYTE *)(a2 + 64) = -88;
  }
  v10 = 1;
  v8 = (int *)(a1 + 328);
LABEL_3:
  if ( a3 )
  {
    v13 = *(_QWORD *)(a1 + 296);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v13 + 72) + 88LL))(v13 + 72, &v27);
      v4 = v28;
      v14 = v27;
    }
    else
    {
      v14 = 0;
      v8 = (int *)(a1 + 328);
    }
    v15 = (float)*v8;
    *a3 = v15;
    v16 = (float)*v9;
    a3[1] = v16;
    a3[2] = fmaxf(v15, (float)(v14 - *(_DWORD *)(a1 + 332)));
    a3[3] = fmaxf(v16, (float)(v4 - *(_DWORD *)(a1 + 340)));
  }
  return v10;
}
