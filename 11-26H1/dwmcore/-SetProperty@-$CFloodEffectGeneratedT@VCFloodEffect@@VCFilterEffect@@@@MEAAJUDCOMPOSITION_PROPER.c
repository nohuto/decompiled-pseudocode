/*
 * XREFs of ?SetProperty@?$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColor@?$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A994 (-SetColor@-$CFloodEffectGeneratedT@VCFloodEffect@@VCFilterEffect@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CFloodEffectGeneratedT<CFloodEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _OWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 != 10 )
    return 2147942487LL;
  if ( a3 != 70 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F29,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  *(_OWORD *)v7 = *a4;
  v5 = CFloodEffectGeneratedT<CFloodEffect,CFilterEffect>::SetColor(a1, (__int128 *)v7);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F2A,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v5);
  return v6;
}
