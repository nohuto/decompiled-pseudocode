/*
 * XREFs of ?SetProperty@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18026CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInkColor@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024B424 (-SetInkColor@-$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJU_D3.c)
 */

__int64 __fastcall CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _OWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
    return 2147942487LL;
  if ( a3 != 70 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F10,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  *(_OWORD *)v7 = *a4;
  v5 = CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::SetInkColor(a1, (__int128 *)v7);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F11,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v5);
  return v6;
}
