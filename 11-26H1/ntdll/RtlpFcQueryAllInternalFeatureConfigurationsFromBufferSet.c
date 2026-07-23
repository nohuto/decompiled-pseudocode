/*
 * XREFs of RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x180152EC0
 * Callers:
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180148A10 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148AC0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     RtlpFcConfigurationTypeToBufferType @ 0x18016E744 (RtlpFcConfigurationTypeToBufferType.c)
 */

__int64 __fastcall RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned __int64 *v4; // r9
  void *v5; // r10
  __int64 v6; // r8
  unsigned int *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  if ( a2 < 2 )
  {
    v3 = RtlpFcConfigurationTypeToBufferType(a2);
    v2 = 0;
    v7 = *(unsigned int **)(v6 + 24LL * v3 + 8);
    if ( v7 )
    {
      v8 = *v7;
      v9 = *v4;
      *v4 = v8;
      if ( v8 <= v9 )
        memmove(v5, v7 + 1, 16LL * *v7);
      else
        return (unsigned int)-2147483643;
    }
    else
    {
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
