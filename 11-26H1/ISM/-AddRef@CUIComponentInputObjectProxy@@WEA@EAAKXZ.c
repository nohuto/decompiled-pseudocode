/*
 * XREFs of ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180134B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 64));
}
