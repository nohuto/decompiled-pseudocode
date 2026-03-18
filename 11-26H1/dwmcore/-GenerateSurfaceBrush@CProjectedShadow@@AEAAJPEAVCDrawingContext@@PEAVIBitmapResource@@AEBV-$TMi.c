/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801DA024
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1802629F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetVerticalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA1C8 (-SetVerticalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetStretchMode@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJW4Enum@MilStretchMode@@@Z @ 0x1801DA1F4 (-SetStretchMode@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJW4Enum@MilStretchMode@.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18020C9F4 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ?SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020FE5C (-SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?SetHorizontalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x18021F004 (-SetHorizontalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180282DE4 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IBitmapRealization *a5)
{
  struct IBitmapRealization *v5; // r14
  CResource *v6; // rbx
  struct CBitmapResource *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  CSurfaceBrush *v12; // rax
  CSurfaceBrush *v13; // rax
  CResource *v14; // rbp
  int v15; // eax
  struct CBitmapResource *v17; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v6 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  *(_QWORD *)v5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, struct IBitmapRealization **))(*(_QWORD *)a3 + 64LL))(a3, &a5);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x495u, 0LL);
    goto LABEL_12;
  }
  v11 = CBitmapResource::Create(*(struct CComposition **)(a1 + 24), a5, &v17);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x496u, 0LL);
    goto LABEL_10;
  }
  v12 = (CSurfaceBrush *)DefaultHeap::AllocClear(0x108uLL);
  if ( !v12 || (v13 = CSurfaceBrush::CSurfaceBrush(v12, *(struct CComposition **)(a1 + 24)), (v6 = v13) == 0LL) )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x499u, 0LL);
LABEL_10:
    v8 = v17;
    goto LABEL_12;
  }
  CMILRefCountImpl::AddReference((CSurfaceBrush *)((char *)v13 + 8));
  v8 = v17;
  v14 = v6;
  v15 = CSurfaceBrush::SetSurfaceInternal(v6, v17);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x49Bu, 0LL);
  }
  else
  {
    CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetStretchMode(v6, 0LL);
    CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetHorizontalAlignment(v6);
    CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetVerticalAlignment(v6);
    v6 = 0LL;
    *(_QWORD *)v5 = v14;
  }
LABEL_12:
  if ( v8 )
    (*(void (__fastcall **)(struct CBitmapResource *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( a5 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v6 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v6);
  return v10;
}
