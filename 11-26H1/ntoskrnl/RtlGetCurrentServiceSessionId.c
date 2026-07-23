/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1404C44E0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **((_DWORD **)PsGetServerSiloGlobals(CurrentServerSilo) + 161);
}
