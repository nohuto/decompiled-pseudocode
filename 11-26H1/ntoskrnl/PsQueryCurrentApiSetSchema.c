/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1407F4270
 * Callers:
 *     RtlIsApiSetImplemented @ 0x14080CE90 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x14083D87C (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x1406EBD1C (MmQueryApiSetSchema.c)
 */

struct _LIST_ENTRY *PsQueryCurrentApiSetSchema()
{
  _KDPC **v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return PsGetCurrentServerSiloGlobals()[63].Flink;
  MmQueryApiSetSchema(&v1, &v2);
  return (struct _LIST_ENTRY *)*v1;
}
