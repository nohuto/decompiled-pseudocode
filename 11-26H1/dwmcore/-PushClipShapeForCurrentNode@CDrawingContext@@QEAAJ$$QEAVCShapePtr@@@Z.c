/*
 * XREFs of ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180236A34
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180140660 (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::PushClipShapeForCurrentNode(struct CDrawingContext *a1, __int64 a2)
{
  struct CVisual *CurrentVisual; // rax
  __int64 *v5; // rdx
  char v6; // di
  __int64 v7; // rbx
  const struct CMILMatrix *TopByReference; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct CVisual *v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  char v14; // [rsp+40h] [rbp-69h]
  __int128 v15; // [rsp+9Ch] [rbp-Dh]
  __int128 v16; // [rsp+ACh] [rbp+3h]
  __int128 v17; // [rsp+BCh] [rbp+13h]
  __int128 v18; // [rsp+CCh] [rbp+23h]
  int v19; // [rsp+DCh] [rbp+33h]
  char v20; // [rsp+110h] [rbp+67h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)&v12);
  CurrentVisual = CDrawingContext::GetCurrentVisual(a1);
  v6 = *((_BYTE *)v5 + 8);
  v7 = *v5;
  v12 = CurrentVisual;
  CShapePtr::~CShapePtr((CShapePtr *)&v13);
  v14 = v6;
  v13 = v7;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a1 + 280));
  v20 = 0;
  v15 = *(_OWORD *)TopByReference;
  v16 = *((_OWORD *)TopByReference + 1);
  v17 = *((_OWORD *)TopByReference + 2);
  v18 = *((_OWORD *)TopByReference + 3);
  v19 = *((_DWORD *)TopByReference + 16);
  v9 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(a1, 0LL, (__int64)&v12, (__int64)&v20);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xCE0u, 0LL);
  CShapePtr::~CShapePtr((CShapePtr *)&v13);
  return v10;
}
