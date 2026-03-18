/*
 * XREFs of ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180009D50 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18027F590 (-GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180288970 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x180009EB0 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::SetScale(CMILMatrix *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  CMILMatrix *v7; // r9
  _OWORD *v8; // rax
  char v9; // al
  _DWORD v10[3]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v11[3]; // [rsp+2Ch] [rbp-6Ch] BYREF
  _BYTE v12[72]; // [rsp+38h] [rbp-60h] BYREF

  v7 = this;
  if ( a4 == 1.0 && a5 == 0.0 && a6 == 0.0 && a7 == 0.0 )
  {
    *(float *)this = a2;
    *(_QWORD *)((char *)this + 4) = 0LL;
    *(_QWORD *)((char *)this + 12) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((float *)this + 5) = a3;
    *((_QWORD *)this + 5) = 1065353216LL;
    *(_QWORD *)((char *)this + 60) = 1065353216LL;
  }
  else
  {
    *(float *)v10 = a5;
    *(float *)&v10[1] = a6;
    *(float *)&v10[2] = a7;
    *(float *)v11 = a2;
    *(float *)&v11[1] = a3;
    *(float *)&v11[2] = a4;
    v8 = (_OWORD *)((__int64 (__fastcall *)(_BYTE *, _DWORD *, _DWORD *, CMILMatrix *))Windows::Foundation::Numerics::make_float4x4_scale)(
                     v12,
                     v11,
                     v10,
                     this);
    *(_OWORD *)v7 = *v8;
    *((_OWORD *)v7 + 1) = v8[1];
    *((_OWORD *)v7 + 2) = v8[2];
    *((_OWORD *)v7 + 3) = v8[3];
  }
  v9 = *((_BYTE *)v7 + 65) & 0xC0 | 0x29;
  *((_BYTE *)v7 + 64) = -120;
  *((_BYTE *)v7 + 65) = v9;
}
