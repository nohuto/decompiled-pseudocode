/*
 * XREFs of ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x180241DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataSourceProxy::Release(__int64 a1)
{
  return BamoDataProviderRegistrarPrincipal::Release((BamoDataProviderRegistrarPrincipal *)(a1 - 8));
}
