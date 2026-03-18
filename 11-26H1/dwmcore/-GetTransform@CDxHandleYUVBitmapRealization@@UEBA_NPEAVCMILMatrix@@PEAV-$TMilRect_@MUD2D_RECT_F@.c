/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005F8A0
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AF400 (-GetTransform@CDxHandleYUVBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_REC.c)
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005FB24 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021C66C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  CBitmapRealization *v4; // rcx
  int v7; // r15d
  int v8; // r12d
  int v9; // edx
  char v10; // cl
  int v11; // edx
  int v12; // edx
  CMILMatrix *v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm2_4
  char result; // al
  __int32 v17; // xmm4_4
  float v18; // xmm2_4
  __int64 v19; // [rsp+28h] [rbp-59h] BYREF
  __int64 v20; // [rsp+30h] [rbp-51h]
  __int128 v21; // [rsp+38h] [rbp-49h]
  _BYTE v22[64]; // [rsp+48h] [rbp-39h] BYREF
  int v23; // [rsp+88h] [rbp+7h]

  v4 = (CBitmapRealization *)(a1 - 80);
  if ( (*((_DWORD *)v4 + 60) & 0x4000) == 0 )
  {
    v7 = *((_DWORD *)v4 + 54);
    v8 = *(_DWORD *)(a1 + 140);
    v9 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v4 + 56LL))(v4);
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 60) = 1065353216;
    v10 = *(_BYTE *)(a2 + 65) & 0xE9;
    *(_BYTE *)(a2 + 64) = -86;
    *(_BYTE *)(a2 + 65) = v10 | 0x29;
    if ( v9 == 1 )
    {
      result = 0;
LABEL_9:
      if ( a3 )
      {
        *(_QWORD *)a3 = 0LL;
        *(float *)(a3 + 8) = (float)*(int *)(a1 + 136);
        *(float *)(a3 + 12) = (float)*(int *)(a1 + 140);
      }
      return result;
    }
    v11 = v9 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
LABEL_8:
          result = 1;
          goto LABEL_9;
        }
        CMILMatrix::Rotate90((CMILMatrix *)a2);
        v14 = (float)v8;
        v15 = 0.0;
      }
      else
      {
        CMILMatrix::Scale((CMILMatrix *)a2, -1.0, -1.0, 1.0);
        v15 = (float)v8;
        v14 = (float)v7;
      }
    }
    else
    {
      CMILMatrix::Rotate270((CMILMatrix *)a2);
      v15 = (float)v7;
      v14 = 0.0;
    }
    CMILMatrix::Translate(v13, v14, v15);
    goto LABEL_8;
  }
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_BYTE *)(a2 + 65) &= 0xE9u;
  *(_BYTE *)(a2 + 65) |= 0x29u;
  *(_BYTE *)(a2 + 64) = -86;
  v23 = 0;
  v19 = 0LL;
  v20 = 0LL;
  CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(v4, (struct CMILMatrix *)v22, (__int64)&v19, 0LL);
  COERCE_FLOAT(v17 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v18 = (float)SHIDWORD(v19);
  *((float *)&v21 + 2) = (float)(int)v20;
  *(float *)&v21 = (float)(int)v19;
  *((float *)&v21 + 3) = (float)SHIDWORD(v20);
  *((float *)&v21 + 1) = (float)SHIDWORD(v19);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v19) & v17) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v18) & v17) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v19) ^ _xmm),
      COERCE_FLOAT(LODWORD(v18) ^ _xmm));
  }
  if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(v22) )
    CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v22);
  result = CMILMatrix::IsIdentity<0>(a2) ^ 1;
  if ( a3 )
    *(_OWORD *)a3 = v21;
  return result;
}
