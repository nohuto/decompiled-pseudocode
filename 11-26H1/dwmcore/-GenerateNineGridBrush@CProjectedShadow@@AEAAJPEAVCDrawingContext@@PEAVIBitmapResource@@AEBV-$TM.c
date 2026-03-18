/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1802629F8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z @ 0x1801B0570 (--0CNineGridBrush@@QEAA@PEAVCComposition@@_N@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801DA024 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 *     ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x18027CED8 (-SetInsets@CNineGridBrush@@QEAAXMMMM@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x18027D248 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        CNineGridBrush **a5)
{
  CNineGridBrush **v5; // r14
  CNineGridBrush *v9; // rax
  __int64 v10; // rdx
  CNineGridBrush *v11; // rdi
  unsigned int v12; // ebx
  int SurfaceBrush; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  struct CBrush *v17[5]; // [rsp+30h] [rbp-28h] BYREF
  CNineGridBrush *v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v18 = 0LL;
  v17[0] = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xB8uLL);
  if ( v9 )
    v9 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 24), 1);
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v18, (__int64)v9);
  v11 = v18;
  if ( v18 )
  {
    SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(a1, v10, a3, (__int64)a4, (struct IBitmapRealization *)v17);
    v12 = SurfaceBrush;
    if ( SurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SurfaceBrush, 0x454u, 0LL);
    }
    else
    {
      CNineGridBrush::SetSource(v11, v17[0]);
      v14 = (float)(a4[3] - a4[1]) * 0.5;
      v15 = (float)(a4[2] - *a4) * 0.5;
      CNineGridBrush::SetInsets(v11, v15, v14, 80.0 / v15, 80.0 / v14);
      v18 = 0LL;
      *v5 = v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x44Fu, 0LL);
  }
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v12;
}
