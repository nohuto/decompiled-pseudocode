/*
 * XREFs of ?SetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnOpacityChanged@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ @ 0x180218F64 (-OnOpacityChanged@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetProperty(__int64 a1, int a2, int a3, _DWORD *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 1 )
    return 2147942487LL;
  if ( a3 != 18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1505,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(float *)a4 != *(float *)(a1 + 80) )
  {
    *(_DWORD *)(a1 + 80) = *a4;
    CEffectGroupGeneratedT<CEffectGroup,CEffect>::OnOpacityChanged();
  }
  return 0LL;
}
