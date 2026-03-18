/*
 * XREFs of ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x180171B90
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800375A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D9900 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x180171C40 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18018A560 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

void __fastcall CSurfaceDrawListBrush::ComputeLocalToSourceTransform(CSurfaceDrawListBrush *this, struct Matrix3x3 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  float *v7; // rax
  float *v8; // rax
  float v9; // [rsp+20h] [rbp-19h] BYREF
  __int64 v10; // [rsp+24h] [rbp-15h]
  int v11; // [rsp+2Ch] [rbp-Dh]
  float v12; // [rsp+30h] [rbp-9h]
  int v13; // [rsp+34h] [rbp-5h]
  float v14; // [rsp+38h] [rbp-1h]
  float v15; // [rsp+3Ch] [rbp+3h]
  int v16; // [rsp+40h] [rbp+7h]
  float v17[9]; // [rsp+48h] [rbp+Fh] BYREF
  float v18[9]; // [rsp+6Ch] [rbp+33h] BYREF
  int v19; // [rsp+A0h] [rbp+67h]
  int v20; // [rsp+A4h] [rbp+6Bh]

  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 8) = 1065353216;
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *((_BYTE *)this + 144) == (_BYTE)v5 )
    {
      CDrawListBitmap::GetSize((CSurfaceDrawListBrush *)((char *)this + 56));
      v10 = 0LL;
      v11 = 0;
      v13 = 0;
      v16 = 1065353216;
      v9 = (float)v19;
      v12 = (float)v20;
      v14 = 0.0 - (float)((float)v19 * 0.0);
      v15 = 0.0 - (float)((float)v20 * 0.0);
      v7 = Matrix3x3::operator*((float *)a2, v17, (float *)this + 21);
      v8 = Matrix3x3::operator*(v7, v18, &v9);
      *(_OWORD *)a2 = *(_OWORD *)v8;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v8 + 1);
      *((float *)a2 + 8) = v8[8];
    }
  }
  else
  {
    *(_QWORD *)v4 = 2139095040LL;
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)(v4 + 16) = 2139095040LL;
    *(_QWORD *)(v4 + 24) = v5;
    *(_DWORD *)(v4 + 32) = v6;
  }
}
