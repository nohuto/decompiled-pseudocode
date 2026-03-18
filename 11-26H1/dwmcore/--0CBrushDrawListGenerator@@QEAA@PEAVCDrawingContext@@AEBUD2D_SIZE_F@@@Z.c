/*
 * XREFs of ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003DAE0
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180198E90 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CBrushDrawListGenerator *__fastcall CBrushDrawListGenerator::CBrushDrawListGenerator(
        CBrushDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __m128i si128; // xmm1
  __int64 v6; // xmm0_8
  CBrushDrawListGenerator *result; // rax

  *(_QWORD *)this = a2;
  wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>((char *)this + 8);
  wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>((char *)this + 16);
  wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>((char *)this + 24);
  wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>((char *)this + 32);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *((_DWORD *)this + 10) = 0;
  v6 = (__int64)*a3;
  *((_DWORD *)this + 13) = 0;
  result = this;
  *(_QWORD *)((char *)this + 44) = v6;
  *(__m128i *)((char *)this + 56) = si128;
  return result;
}
