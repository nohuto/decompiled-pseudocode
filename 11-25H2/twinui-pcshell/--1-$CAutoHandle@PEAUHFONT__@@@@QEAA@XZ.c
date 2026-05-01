/*
 * XREFs of ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x180233C80
 * Callers:
 *     __lambda_6825ce5d1ace0209a4941c0102e86eff_::operator()_::_1_::dtor$0 @ 0x1806C7FF9 (__lambda_6825ce5d1ace0209a4941c0102e86eff_--operator()_--_1_--dtor$0.c)
 *     _s_DrawGlyph_::_1_::dtor$0 @ 0x1806DCFCC (_s_DrawGlyph_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>(void **a1)
{
  return CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(a1);
}
