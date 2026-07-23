/*
 * XREFs of RtlpFcValidateFeatureConfigurationBuffer @ 0x18016E05C
 * Callers:
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x180148960 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     RtlULongLongMult @ 0x1800DFE54 (RtlULongLongMult.c)
 *     RtlFcpCompareFeatureToFeature @ 0x180152E90 (RtlFcpCompareFeatureToFeature.c)
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationBuffer(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // r11
  unsigned int i; // r8d
  unsigned int *v6; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 )
  {
    if ( a2 < 4
      || ((unsigned __int8)a1 & 3) != 0
      || (int)RtlULongLongMult(*a1, 0x10uLL, (__int64 *)&v8) < 0
      || v8 + 4 < v8
      || v8 + 4 > v4 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      for ( i = v3; i < *a1; ++i )
      {
        v6 = &a1[4 * i + 1];
        if ( i && (int)RtlFcpCompareFeatureToFeature(&a1[4 * i - 3], v6) >= 0 || (v6[1] & 0x30) == 0x30 )
          return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
  return v3;
}
