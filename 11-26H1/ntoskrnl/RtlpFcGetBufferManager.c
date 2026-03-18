/*
 * XREFs of RtlpFcGetBufferManager @ 0x140B2D098
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x140617720 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1406177D0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1406179A0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

$B3FD53340A977CC9CDA66D808670C106 *RtlpFcGetBufferManager()
{
  return &CmpFreezeListLock.600;
}
