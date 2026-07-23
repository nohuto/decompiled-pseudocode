/*
 * XREFs of RtlpFcGetBufferManager @ 0x140B2F118
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404C5BC0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x14061A770 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x14061A820 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x14061A9F0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **RtlpFcGetBufferManager()
{
  return &CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink;
}
