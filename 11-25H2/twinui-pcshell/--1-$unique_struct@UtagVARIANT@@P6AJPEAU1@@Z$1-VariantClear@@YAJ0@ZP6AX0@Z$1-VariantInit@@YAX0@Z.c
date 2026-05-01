/*
 * XREFs of ??1?$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1?VariantClear@@YAJ0@ZP6AX0@Z$1?VariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x1802D170C
 * Callers:
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromAncestorsOfElement_::_1_::dtor$0 @ 0x1806C7653 (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForSelectedTextFromAncestorsOfElement_--_1.c)
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement_::_1_::dtor$0 @ 0x1806C7665 (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForSelectedTextFromDescendantsOfElement_--.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>::~unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>(
        VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
