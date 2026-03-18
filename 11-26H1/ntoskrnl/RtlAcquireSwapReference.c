/*
 * XREFs of RtlAcquireSwapReference @ 0x1402C58E0
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140356ED8 (CmFcManagerNotifyFeatureUsage.c)
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140ABF4C0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     RtlBackoff @ 0x140335EF0 (RtlBackoff.c)
 */

unsigned __int64 __fastcall RtlAcquireSwapReference(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // rtt
  int i; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  for ( i = 0; ; RtlBackoff(&i, v4, a3) )
  {
    _m_prefetchw(v3);
    v4 = *v3 & 1 | ((*v3 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v4 < 2 )
      __fastfail(0xEu);
    v5 = *v3;
    if ( v5 == _InterlockedCompareExchange64(v3, v4, *v3) )
      break;
  }
  return v4 & 1;
}
