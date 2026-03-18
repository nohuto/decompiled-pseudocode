/*
 * XREFs of ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181C90
 * Callers:
 *     ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180181BF0 (-HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180181DD8 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1, float *a2, float *a3)
{
  unsigned int v6; // esi
  __int64 v7; // xmm0_8
  int v8; // eax
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  _BYTE v16[4]; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+34h] [rbp-4Ch]
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  int v20; // [rsp+4Ch] [rbp-34h]
  void *v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+5Ch] [rbp-24h]
  int v24; // [rsp+64h] [rbp-1Ch]
  __int64 v25; // [rsp+68h] [rbp-18h]

  v6 = 0;
  if ( *(_BYTE *)(a1 + 96) )
  {
    v7 = *(_QWORD *)a2;
    v23 = 0LL;
    v21 = 0LL;
    v24 = 0;
    v20 = 1;
    v17 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v22 = 0;
    v25 = v7;
    v8 = CShapeTreeIterator::Walk<CShapeBoundingContext>(v16, a1, v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2Fu, 0LL);
      operator delete(v21);
      return v6;
    }
    operator delete(v21);
  }
  if ( a3 )
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
  if ( !*(_BYTE *)(a1 + 97) )
    goto LABEL_18;
  v9 = *a3;
  v10 = *a2;
  v11 = a2[1];
  if ( *a3 < 0.0 )
  {
    *a3 = 0.0;
    v9 = 0.0;
  }
  v12 = a3[1];
  if ( v12 < 0.0 )
  {
    a3[1] = 0.0;
    v12 = 0.0;
  }
  v13 = a3[2];
  if ( v13 > v10 )
  {
    a3[2] = v10;
    v13 = v10;
  }
  v14 = a3[3];
  if ( v14 > v11 )
  {
    a3[3] = v11;
    v14 = v11;
  }
  if ( v13 <= v9 || v14 <= v12 )
  {
LABEL_18:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
  }
  return v6;
}
