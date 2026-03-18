/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x180250EF8
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180236C1C (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800F928C (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(struct IDeviceTarget *a1, UINT32 *a2, struct CGammaBlendLayer **a3)
{
  bool v3; // zf
  int v4; // eax
  struct RenderTargetInfo *v8; // rax
  int Bitmap; // eax
  unsigned int v10; // edi
  CExternalLayer *v11; // rax
  struct CGammaBlendLayer *v12; // rbx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+34h] [rbp-3Ch]
  const char *v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+90h] [rbp+20h] BYREF

  v3 = CCommonRegistryData::GammaBlendWithFP16 == 0;
  v4 = 87;
  *a3 = 0LL;
  v19 = 0LL;
  if ( !v3 )
    v4 = 10;
  v14 = v4;
  v15 = 1LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v8 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                    a1,
                                    v18);
  v17 = 44;
  v16 = "DWM Scratch Rendertarget (gamma blend layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v16,
             a2,
             (struct PixelFormatInfo *)&v14,
             v8,
             1,
             (__int64 *)&v19);
  v10 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x27u, 0LL);
  }
  else
  {
    v11 = (CExternalLayer *)operator new(0x78uLL);
    v12 = v11;
    if ( v11 )
    {
      CExternalLayer::CExternalLayer(v11, (const struct D2D_POINTANDSIZE_L *)a2, v19);
      *a3 = v12;
      *(_QWORD *)v12 = &CGammaBlendLayer::`vftable';
    }
    else
    {
      v10 = -2147024882;
      *a3 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Bu, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v10;
}
