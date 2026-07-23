/*
 * XREFs of RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18016E810
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x18005FB00 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x1800EC530 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x180109488 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 */

__int64 __fastcall RtlpFcQueryAllFeatureConfigurationsFromBufferSet(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edx
  unsigned __int64 *v4; // r9
  __int64 v5; // r10
  _QWORD *v6; // r11
  unsigned int *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h]

  result = RtlpFcValidateFeatureConfigurationType(a2);
  if ( (int)result >= 0 )
  {
    v10[0] = 0;
    v10[1] = 1;
    v7 = *(unsigned int **)(v5 + 24LL * (unsigned int)v10[v3] + 8);
    if ( v7 )
    {
      v8 = *v7;
      v9 = *v4;
      *v4 = v8;
      if ( v8 > v9 )
        return 2147483653LL;
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)(v7 + 1), v6, v8);
    }
    else
    {
      *v4 = 0LL;
    }
    return 0LL;
  }
  return result;
}
