/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134
 * Callers:
 *     RtlNotifyFeatureUsage @ 0x1800140B0 (RtlNotifyFeatureUsage.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1800143D0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180014500 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryFeatureConfiguration @ 0x1800E3B20 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800E4000 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180148B60 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148C10 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryFeatureConfigurationBuffer @ 0x180148D10 (RtlQueryFeatureConfigurationBuffer.c)
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, char a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rtt
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  char *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rtt
  unsigned __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  if ( dword_1801CCD58 != 2 )
    return 3221225635LL;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    _m_prefetchw(&xmmword_1801CCC48);
    v7 = xmmword_1801CCC48 & 1 | ((xmmword_1801CCC48 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v7 < 2 )
LABEL_4:
      __fastfail(0xEu);
    v9 = xmmword_1801CCC48;
    if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801CCC48, v7, xmmword_1801CCC48) )
      break;
    RtlBackoff((unsigned int *)&v17);
  }
  v10 = v7 & 1;
  v11 = RtlpFcProcessManager[v10 + 28];
  v12 = MEMORY[0x7FFE0A90];
  v13 = (char *)&unk_1801CCC60 + 96 * v10;
  if ( v11 >= MEMORY[0x7FFE0A90] )
    goto LABEL_8;
  RtlpFcBufferManagerDereferenceBuffers(
    (volatile signed __int64 *)&xmmword_1801CCC48,
    (__int64)&unk_1801CCC60 + 96 * v10);
  result = RtlpFcUpdateLocalConfiguration((__int64)RtlpFcProcessManager, v12, a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v17) = 0;
    while ( 1 )
    {
      _m_prefetchw(&xmmword_1801CCC48);
      v14 = xmmword_1801CCC48 & 1 | ((xmmword_1801CCC48 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
      if ( v14 < 2 )
        goto LABEL_4;
      v15 = xmmword_1801CCC48;
      if ( v15 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801CCC48, v14, xmmword_1801CCC48) )
        break;
      RtlBackoff((unsigned int *)&v17);
    }
    v16 = v14 & 1;
    v11 = RtlpFcProcessManager[v16 + 28];
    v13 = (char *)&unk_1801CCC60 + 96 * v16;
LABEL_8:
    *a4 = v13;
    result = 0LL;
    *a3 = v11;
  }
  return result;
}
