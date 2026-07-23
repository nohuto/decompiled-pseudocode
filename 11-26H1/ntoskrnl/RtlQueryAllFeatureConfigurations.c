/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x140806B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcValidateFeatureConfigurationType @ 0x1404E2344 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1404F0F90 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 */

NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  __int64 v5; // rbp
  int v8; // eax
  ULONG_PTR v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  unsigned int *v12; // rcx
  ULONG_PTR v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v16[2]; // [rsp+28h] [rbp-10h] BYREF

  v5 = ConfigurationType;
  v16[0] = 0LL;
  v15 = 0LL;
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, (__int64)v16, &v15);
  v8 = RtlpFcValidateFeatureConfigurationType(v5);
  v10 = v15;
  v11 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0x100000000LL;
    v12 = *(unsigned int **)(v10 + 24LL * *((unsigned int *)&v16[-1] + v5) + 8);
    if ( v12 )
    {
      v9 = *v12;
      v13 = *ConfigurationCount;
      *ConfigurationCount = v9;
      if ( v9 > v13 )
      {
        v11 = -2147483643;
        goto LABEL_8;
      }
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)(v12 + 1), Configurations, v9);
    }
    else
    {
      *ConfigurationCount = 0LL;
    }
    v11 = 0;
  }
LABEL_8:
  if ( v11 >= 0 )
  {
    if ( ChangeStamp )
      *ChangeStamp = v16[0];
    v11 = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers(
    (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
    v10,
    v9);
  return v11;
}
