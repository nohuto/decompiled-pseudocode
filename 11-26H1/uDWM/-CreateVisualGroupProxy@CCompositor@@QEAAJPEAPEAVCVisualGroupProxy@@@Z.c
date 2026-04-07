/*
 * XREFs of ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A801C
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800618DC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualGroupProxy(struct IDwmChannel **this, struct CVisualGroupProxy **a2)
{
  return CResourceProxy::Create<CVisualGroupProxy>(this[3], a2);
}
