/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x18005F7E0 (RtlNotifyFeatureUsage.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlQueryAllFeatureConfigurations @ 0x18005FB00 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x18005FC30 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryFeatureConfiguration @ 0x1800ECBC0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800ECD00 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180148A10 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148AC0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryFeatureConfigurationBuffer @ 0x180148BC0 (RtlQueryFeatureConfigurationBuffer.c)
 * Callees:
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 */

void __fastcall RtlpFcBufferManagerDereferenceBuffers(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // r9
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rtt
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = a1;
  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  v4 = (unsigned int)v3 + (v3 >> 63);
  while ( 1 )
  {
    _m_prefetchw(v2);
    v5 = *v2;
    v6 = *v2 & 1;
    if ( v6 != v4 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v7 = *v2;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v6 | (2 * (v5 >> 1) - 2), v5) )
      return;
    RtlBackoff(&v8, v6);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v2 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    RtlWakeAddressAll(v2 + 1);
}
