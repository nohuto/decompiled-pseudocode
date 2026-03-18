/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1404CAAB0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **((unsigned int **)PsGetServerSiloGlobals(CurrentServerSilo) + 161);
}
