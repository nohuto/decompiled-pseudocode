/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1800AF130 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800CF4A0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1800CF688 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1800CFBC8 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x1800D1010 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v4; // edi
  unsigned int BspPolygonListCount; // eax
  unsigned int v7; // r15d
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v9; // r11
  const struct CVisual *v10; // rdx
  __int64 v11; // rbx
  struct CVisual *v12; // r14
  int v13; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  const struct CMILMatrix *v19; // rax
  struct CVisualTree *v20; // rbx
  int v21; // eax
  struct ID2D1PathGeometry *v23; // [rsp+48h] [rbp-99h] BYREF
  struct CVisualTree *v24; // [rsp+50h] [rbp-91h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-89h] BYREF
  int v26; // [rsp+98h] [rbp-49h]
  _BYTE v27[64]; // [rsp+A8h] [rbp-39h] BYREF
  int v28; // [rsp+E8h] [rbp+7h]
  unsigned int v29; // [rsp+160h] [rbp+7Fh]

  v4 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v29 = BspPolygonListCount;
  while ( 1 )
  {
    if ( v7 >= BspPolygonListCount )
      return v4;
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)a2);
    v10 = v9;
    v11 = *(_QWORD *)(*BspPolygonList + 8LL * v7);
    v12 = *(struct CVisual **)(v11 + 216);
    if ( v12 != a2 )
      v10 = (const struct CVisual *)*((_QWORD *)v12 + 11);
    if ( !*(_BYTE *)(v11 + 240) && *((_DWORD *)this + 62) )
      goto LABEL_15;
    if ( !CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v11 + 216), v10) )
    {
      CDrawingContext::DrawPolygon(this, (struct CPolygon *)v11);
      goto LABEL_15;
    }
    v23 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PathGeometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
            g_DeviceManager,
            &v23);
    v4 = v13;
    if ( v13 < 0 )
      break;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
    v4 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v11, v23, TopByReference);
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x4FEu, 0LL);
      goto LABEL_25;
    }
    v15 = CDrawingContext::PushD2DLayer(this, v12, 0LL, v23, 0LL, 1.0, 0, 0);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x500u, 0LL);
LABEL_25:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
      return v4;
    }
    v16 = *(_OWORD *)(v11 + 160);
    v26 = *(_DWORD *)(v11 + 208);
    v17 = *(_OWORD *)(v11 + 144);
    v25[1] = v16;
    v18 = *(_OWORD *)(v11 + 192);
    LOBYTE(v26) = v26 & 0xF0 | 1;
    v25[0] = v17;
    v25[3] = v18;
    v25[2] = 0LL;
    v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
    CMILMatrix::Multiply((CMILMatrix *)v25, v19);
    v28 = 0;
    CVisual::GetRootTransform(v12, (struct CMILMatrix *)v27, 0, 0);
    CMILMatrix::Multiply((CMILMatrix *)v27, (const struct CMILMatrix *)v25);
    v24 = 0LL;
    CSubVisualTree::Create(v12, &v24);
    v20 = v24;
    v21 = CDrawingContext::DrawSubVisualTree((__int64)this, v24, (unsigned int *)v24 + 20, (CMILMatrix *)v27);
    v4 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x517u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
      CDrawingContext::PopLayer(this);
      return v4;
    }
    CDrawingContext::PopLayer(this);
    if ( v20 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v23 )
      (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_15:
    BspPolygonListCount = v29;
    ++v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x4FBu, 0LL);
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
  return v4;
}
