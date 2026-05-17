/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x1800140B0 (RtlNotifyFeatureUsage.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1800143D0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180014500 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryFeatureConfiguration @ 0x1800E3B20 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800E4000 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180148B60 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148C10 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryFeatureConfigurationBuffer @ 0x180148D10 (RtlQueryFeatureConfigurationBuffer.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r9
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  volatile signed __int64 v8; // rtt
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = a1;
  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  v4 = (unsigned int)v3 + (v3 >> 63);
  while ( 1 )
  {
    _m_prefetchw((const void *)v2);
    v5 = *v2;
    v6 = *v2 & 1;
    if ( v6 != v4 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v2;
    result = _InterlockedCompareExchange64(v2, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == result )
      return result;
    RtlBackoff(&v9);
  }
  result = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return RtlWakeAddressAll();
  return result;
}
