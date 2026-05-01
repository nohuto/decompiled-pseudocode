/*
 * XREFs of PsmCrmCleanup @ 0x180074500
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 */

__int64 PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
