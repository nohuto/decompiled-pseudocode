/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18025041C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800F928C (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180215AE4 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802670D8 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IDeviceTarget *a1,
        UINT32 *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct D2D_POINTANDSIZE_F *a5,
        struct CFilterEffectLayer **a6)
{
  bool IsOpaque; // al
  int v11; // ecx
  int v12; // ebx
  struct RenderTargetInfo *v13; // rax
  int Bitmap; // eax
  unsigned int v15; // edi
  CExternalLayer *v16; // rax
  CExternalLayer *v17; // rbx
  struct IRenderTargetBitmap *v19; // [rsp+30h] [rbp-39h] BYREF
  const char *v20; // [rsp+38h] [rbp-31h] BYREF
  int v21; // [rsp+40h] [rbp-29h]
  _BYTE v22[24]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v23[4]; // [rsp+60h] [rbp-9h] BYREF
  int v24; // [rsp+64h] [rbp-5h]

  *a6 = 0LL;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v23);
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v11 = v24;
  v12 = 1;
  if ( !IsOpaque )
    v11 = 1;
  v24 = v11;
  if ( (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 53LL)
    || (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 130LL) )
  {
    v12 = 2;
  }
  v19 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v13 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                     a1,
                                     v22);
  v21 = 46;
  v20 = "DWM Scratch Rendertarget (filter effect layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v20,
             a2,
             (struct PixelFormatInfo *)v23,
             v13,
             v12,
             (__int64 *)&v19);
  v15 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x25u, 0LL);
  }
  else
  {
    v16 = (CExternalLayer *)operator new(0x90uLL);
    v17 = v16;
    if ( v16 )
    {
      CExternalLayer::CExternalLayer(v16, (const struct D2D_POINTANDSIZE_L *)a2, v19);
      *(_QWORD *)v17 = &CFilterEffectLayer::`vftable';
      *((_QWORD *)v17 + 15) = a3;
      *a6 = v17;
      *((_OWORD *)v17 + 8) = *(_OWORD *)a5;
    }
    else
    {
      v15 = -2147024882;
      *a6 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v15;
}
