/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1407EE710
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1408073F0 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x14083763C (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x1406E706C (MmQueryApiSetSchema.c)
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
