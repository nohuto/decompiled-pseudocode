/*
 * XREFs of ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x180017360
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::GetContentAsBrushNoRef(CVisual *this, struct CBrush **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 31);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, 16LL) )
    return 0;
  *a2 = (struct CBrush *)*((_QWORD *)this + 31);
  return 1;
}
