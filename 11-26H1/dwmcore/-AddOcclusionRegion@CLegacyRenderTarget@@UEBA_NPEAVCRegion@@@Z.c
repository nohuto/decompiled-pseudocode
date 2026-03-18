/*
 * XREFs of ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180181630
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::AddOcclusionRegion(CLegacyRenderTarget *this, FastRegion::CRegion **a2, double a3)
{
  unsigned int *v3; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rbx
  unsigned int *i; // rsi
  const struct tagRECT *v9; // rax
  int v10; // eax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (unsigned int *)((char *)this + 30064);
  if ( !*((_DWORD *)this + 7516) )
    return 0;
  if ( !*((_BYTE *)this + 30504) )
    CMergedRectBase<8>::Optimize((__int64)this + 30064);
  v6 = *v3;
  v7 = v3 + 1;
  if ( !v7 && v6 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  for ( i = &v7[4 * v6]; v7 != i; v7 += 4 )
  {
    v9 = (const struct tagRECT *)PixelAlign(v11, v7, a3);
    v10 = CRegion::TryAddRectangle(a2, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1CA,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v10,
        v11[0]);
  }
  return 1;
}
