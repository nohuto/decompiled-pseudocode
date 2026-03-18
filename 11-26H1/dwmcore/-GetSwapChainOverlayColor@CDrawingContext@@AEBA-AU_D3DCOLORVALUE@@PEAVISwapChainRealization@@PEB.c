/*
 * XREFs of ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z @ 0x1801B09FC
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CDrawingContext::GetSwapChainOverlayColor(
        CDrawingContext *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        int (__fastcall ***a3)(struct ISwapChainRealization *, GUID *, __int64 *),
        const struct IBitmapResource *a4)
{
  bool v4; // cf
  __int64 v9; // rax
  int (__fastcall *v10)(struct ISwapChainRealization *, GUID *, __int64 *); // rsi
  char v11; // cl
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = CCommonRegistryData::m_dwOverlayTestMode == 0;
  *(_OWORD *)&retstr->r = 0LL;
  if ( !v4 )
  {
    v9 = *(_QWORD *)a4;
    v12 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct IBitmapResource *))(v9 + 56))(a4) )
    {
      *(_QWORD *)&retstr->r = 1065353216LL;
      retstr->b = 0.0;
    }
    else
    {
      v10 = **a3;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v10((struct ISwapChainRealization *)a3, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v12) < 0 )
      {
        v11 = *(_BYTE *)(*((_QWORD *)this + 5) + 44LL);
        retstr->a = 0.5;
        if ( v11 )
        {
          retstr->r = 1.0;
          retstr->g = 0.77999997;
          retstr->b = 0.055;
        }
        else
        {
          retstr->r = 0.0;
          retstr->g = 1.0;
          retstr->b = 1.0;
        }
        goto LABEL_13;
      }
      retstr->r = 1.0;
      *(_QWORD *)&retstr->g = 1065353216LL;
    }
    retstr->a = 0.5;
LABEL_13:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
  }
  return retstr;
}
