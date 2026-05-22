/*
 * XREFs of ?Release@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015E640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 120));
}
