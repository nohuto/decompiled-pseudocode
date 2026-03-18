/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1800D1ECC (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800D1F58 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180180C50 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801810A0 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r13
  char v6; // r12
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  char v10; // r14
  const struct CMILMatrix *v11; // r10
  int v12; // eax
  __int64 v14; // r14
  struct CGeometry *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const struct CMILMatrix *TopByReference; // rax
  const struct CShape *v20; // r10
  int v21; // eax
  const struct CMILMatrix *v22; // rax
  int v23; // xmm1_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm0_4
  unsigned int v26; // xmm1_4
  __int64 *v27; // rax
  int v28; // eax
  char v29; // [rsp+48h] [rbp-39h]
  bool v30; // [rsp+49h] [rbp-38h] BYREF
  char v31; // [rsp+4Ah] [rbp-37h]
  struct ID2D1Geometry *v32; // [rsp+50h] [rbp-31h] BYREF
  __int64 v33; // [rsp+58h] [rbp-29h] BYREF
  char v34; // [rsp+60h] [rbp-21h]
  __int64 v35[2]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-9h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v31 = 0;
  v29 = 0;
  if ( !*((_QWORD *)a2 + 31) )
    goto LABEL_22;
  CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v35);
  if ( !LODWORD(v35[0]) )
  {
LABEL_3:
    v7 = *((_DWORD *)this + 790);
    if ( v7 )
      v8 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v7 - 1));
    else
      v8 = FLOAT_1_0;
    *(float *)&v32 = v8 * *((float *)a2 + 56);
    v9 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3152, &v32);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x543u, 0LL);
    }
    else
    {
      v10 = 1;
      v29 = 1;
      if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>((char *)a2 + 144) )
      {
        v12 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, v11, 1, 1);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x549u, 0LL);
          goto LABEL_9;
        }
        v5 = 1;
      }
      v14 = *((_QWORD *)a2 + 27);
      v15 = *(struct CGeometry **)(v14 + 240);
      if ( !v15 )
        goto LABEL_20;
      v33 = 0LL;
      v34 = 0;
      v18 = CDrawingContext::ShapeDataFromGeometry(
              (const struct D2D_SIZE_F *)(v14 + 140),
              v15,
              (struct CShapePtr *)&v33);
      v4 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x554u, 0LL);
      }
      else
      {
        if ( !v33 )
        {
LABEL_36:
          CShapePtr::~CShapePtr((CShapePtr *)&v33);
LABEL_20:
          *((_QWORD *)this + 412) = a2;
          v16 = CPolygon::Draw(a2, this);
          v4 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x571u, 0LL);
          goto LABEL_22;
        }
        v32 = 0LL;
        v30 = 1;
        v36 = 0LL;
        *(_OWORD *)v35 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
        v21 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v30, v20, TopByReference, &v32, &v30);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x55Fu, 0LL);
        }
        else
        {
          if ( v30 )
          {
            v27 = 0LL;
          }
          else
          {
            v22 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
            v23 = *((_DWORD *)v22 + 1);
            LODWORD(v35[0]) = *(_DWORD *)v22;
            v24 = *((_DWORD *)v22 + 4);
            HIDWORD(v35[0]) = v23;
            v35[1] = __PAIR64__(*((_DWORD *)v22 + 5), v24);
            v25 = *((_DWORD *)v22 + 12);
            v26 = *((_DWORD *)v22 + 13);
            v27 = v35;
            v36 = __PAIR64__(v26, v25);
          }
          v28 = CDrawingContext::PushD2DLayer(
                  this,
                  (struct CVisual *)v14,
                  0LL,
                  v32,
                  (struct D2D_MATRIX_3X2_F *)v27,
                  1.0,
                  0,
                  0);
          v4 = v28;
          if ( v28 >= 0 )
          {
            v6 = 1;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
            goto LABEL_36;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x569u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v33);
    }
LABEL_22:
    v10 = v29;
    goto LABEL_9;
  }
  v17 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v35, 1);
  v4 = v17;
  if ( v17 >= 0 )
  {
    v31 = 1;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x53Eu, 0LL);
  v10 = 0;
LABEL_9:
  *((_QWORD *)this + 412) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v10 )
    CWatermarkStack<void *,2,2,10>::Pop((__int64)this + 3152);
  if ( v31 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
