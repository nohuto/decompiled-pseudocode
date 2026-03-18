/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801942F0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021AB54 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPEAVCDrawListEntryBuilder@@@Z @ 0x18023642C (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        __m128 *a3,
        const struct CShape *a4,
        _OWORD *a5)
{
  char v8; // r15
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v16[20]; // [rsp+38h] [rbp-79h] BYREF
  __int128 v17; // [rsp+4Ch] [rbp-65h]
  int v18; // [rsp+5Ch] [rbp-55h]
  _BYTE v19[64]; // [rsp+60h] [rbp-51h] BYREF
  int v20; // [rsp+A0h] [rbp-11h]
  __int128 v21; // [rsp+B0h] [rbp-1h] BYREF

  v20 = 0;
  v8 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 24), a3, (struct CMILMatrix *)v19);
  v9 = *(_QWORD *)a4;
  v21 = 0uLL;
  v10 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, _BYTE *))(v9 + 48))(a4, &v21, v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x13Au, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_7;
    *(_OWORD *)&v16[4] = 0LL;
    *(_QWORD *)v16 = 2LL;
    v18 = 0;
    v17 = 0LL;
    v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v16, 1);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, (const struct CMILMatrix *)v19, 0, 1);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x14Bu, 0LL);
        goto LABEL_10;
      }
      v8 = 1;
      v14 = CDrawingContext::FillShapeWithBitmap(
              a2,
              *(struct IBitmapResource **)(a1 + 8),
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              a4,
              1,
              0LL);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x151u, 0LL);
LABEL_8:
        CDrawingContext::PopTransformInternal(a2, 1);
LABEL_10:
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
        goto LABEL_13;
      }
LABEL_7:
      if ( !v8 )
        goto LABEL_13;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x148u, 0LL);
  }
LABEL_13:
  if ( a5 )
    *a5 = v21;
  return v11;
}
