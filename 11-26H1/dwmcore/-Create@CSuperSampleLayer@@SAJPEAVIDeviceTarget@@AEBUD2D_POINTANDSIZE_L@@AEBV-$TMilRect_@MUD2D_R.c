/*
 * XREFs of ?Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18025069C
 * Callers:
 *     ?PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236CE0 (-PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_RECT_F.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800F928C (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperSampleLayer::Create(_QWORD *a1, UINT32 *a2, _OWORD *a3, CExternalLayer **a4)
{
  struct RenderTargetInfo *v8; // rax
  int Bitmap; // eax
  unsigned int v10; // edi
  CExternalLayer *v11; // rax
  CExternalLayer *v12; // rbx
  struct IRenderTargetBitmap *v14; // [rsp+30h] [rbp-50h] BYREF
  const char *v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-40h]
  char v17[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v18[4]; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+64h] [rbp-1Ch]

  *a4 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(a1[1] + 24LL))(a1 + 1, v18);
  v14 = 0LL;
  v19 = 1;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
  v8 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 120LL))(a1, v17);
  v16 = 44;
  v15 = "DWM Scratch Rendertarget (super-sample layer";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v15,
             a2,
             (struct PixelFormatInfo *)v18,
             v8,
             1,
             (__int64 *)&v14);
  v10 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x1Eu, 0LL);
  }
  else
  {
    v11 = (CExternalLayer *)operator new(0x88uLL);
    v12 = v11;
    if ( v11 )
    {
      CExternalLayer::CExternalLayer(v11, (const struct D2D_POINTANDSIZE_L *)a2, v14);
      *(_QWORD *)v12 = &CSuperSampleLayer::`vftable';
      *(_OWORD *)((char *)v12 + 120) = *a3;
    }
    else
    {
      v12 = 0LL;
    }
    *a4 = v12;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v10;
}
