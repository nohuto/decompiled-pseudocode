/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x1800C84F8
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800F928C (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        struct IDeviceTarget *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        const struct MilColorTransform *a3,
        struct CColorTransformLayer **a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  struct IRenderTargetBitmap *v11; // rbx
  unsigned int v12; // ebp
  CExternalLayer *v14; // rax
  CExternalLayer *v15; // rdi
  struct IRenderTargetBitmap *v16; // [rsp+30h] [rbp-78h] BYREF
  const char *v17; // [rsp+38h] [rbp-70h] BYREF
  int v18; // [rsp+40h] [rbp-68h]
  _BYTE v19[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v20[4]; // [rsp+60h] [rbp-48h] BYREF
  int v21; // [rsp+64h] [rbp-44h]

  *a4 = 0LL;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v20);
  v8 = *(_QWORD *)a1;
  v16 = 0LL;
  v21 = 1;
  v9 = (*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(v8 + 120))(a1, v19);
  v18 = 48;
  v17 = "DWM Scratch Rendertarget (color transform layer)";
  v10 = CExternalLayer::CreateBitmap(&v17, a2, v20, v9, 1, &v16);
  v11 = v16;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v14 = (CExternalLayer *)operator new(0xE0uLL);
    v15 = v14;
    if ( v14 )
    {
      CExternalLayer::CExternalLayer(v14, a2, v11);
      *(_QWORD *)v15 = &CColorTransformLayer::`vftable';
      *(_OWORD *)((char *)v15 + 120) = *(_OWORD *)a3;
      *(_OWORD *)((char *)v15 + 136) = *((_OWORD *)a3 + 1);
      *(_OWORD *)((char *)v15 + 152) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)v15 + 168) = *((_OWORD *)a3 + 3);
      *(_OWORD *)((char *)v15 + 184) = *((_OWORD *)a3 + 4);
      *(_OWORD *)((char *)v15 + 200) = *((_OWORD *)a3 + 5);
      *((_DWORD *)v15 + 54) = *((_DWORD *)a3 + 24);
      *a4 = v15;
    }
    else
    {
      v12 = -2147024882;
      *a4 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Eu, 0LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  return v12;
}
