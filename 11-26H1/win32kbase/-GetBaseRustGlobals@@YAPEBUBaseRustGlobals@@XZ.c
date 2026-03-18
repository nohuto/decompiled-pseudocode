/*
 * XREFs of ?GetBaseRustGlobals@@YAPEBUBaseRustGlobals@@XZ @ 0x14011FEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct BaseRustGlobals *GetBaseRustGlobals(void)
{
  return (const struct BaseRustGlobals *)WPP_MAIN_CB.Dpc.DeferredContext;
}
