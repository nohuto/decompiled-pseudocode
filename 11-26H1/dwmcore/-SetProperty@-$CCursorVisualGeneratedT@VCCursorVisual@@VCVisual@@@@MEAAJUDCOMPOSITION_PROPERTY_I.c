/*
 * XREFs of ?SetProperty@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180265440
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetIsHardwareCursorEnabled@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B9C8 (-SetIsHardwareCursorEnabled@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetIsSynchronized@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x18024BA64 (-SetIsSynchronized@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetProperty(
        CVisual **a1,
        unsigned int a2,
        int a3,
        char *a4)
{
  __int64 v5; // rdx
  int IsHardwareCursorEnabled; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 53 )
  {
    if ( a3 != 17 )
    {
      v5 = 16517LL;
      goto LABEL_10;
    }
    IsHardwareCursorEnabled = CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetIsHardwareCursorEnabled(
                                (__int64)a1,
                                *a4);
    if ( IsHardwareCursorEnabled < 0 )
    {
      v5 = 16518LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( a2 != 54 )
      return CVisual::SetProperty(a1, a2, a3, (float *)a4);
    if ( a3 != 17 )
    {
      v5 = 16522LL;
LABEL_10:
      IsHardwareCursorEnabled = -2147024809;
      goto LABEL_11;
    }
    IsHardwareCursorEnabled = CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetIsSynchronized((__int64)a1, *a4);
    if ( IsHardwareCursorEnabled < 0 )
    {
      v5 = 16523LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)IsHardwareCursorEnabled);
      return (unsigned int)IsHardwareCursorEnabled;
    }
  }
  return 0LL;
}
