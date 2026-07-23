/*
 * XREFs of RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x180109488
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800ECBC0 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18016E810 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcConvertFeatureConfigurationsInternalToExternal(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // xmm0_8
  __int64 result; // rax

  for ( ; a3; --a3 )
  {
    v3 = *a1;
    a1 += 2;
    *a2 = v3;
    a2 = (_QWORD *)((char *)a2 + 12);
    result = *((unsigned int *)a1 - 2);
    *((_DWORD *)a2 - 1) = result;
  }
  return result;
}
