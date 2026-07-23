/*
 * XREFs of RtlpFcValidateFeatureConfigurationBuffer @ 0x140B2B8DC
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     RtlFcpCompareFeatureToFeature @ 0x1404E80F4 (RtlFcpCompareFeatureToFeature.c)
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationBuffer(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int *v3; // r10
  unsigned int v4; // r11d
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v7; // rax
  unsigned int i; // r9d
  unsigned int *v9; // rdx

  v2 = 0;
  v3 = a1;
  if ( a1 )
  {
    if ( a2 < 4 )
      return (unsigned int)-1073741811;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      return (unsigned int)-1073741811;
    v4 = *a1;
    v5 = *a1;
    if ( !is_mul_ok(v5, 0x10uLL) )
      return (unsigned int)-1073741811;
    v7 = 16 * v5 + 4;
    if ( v7 < 16 * v5 || v7 > a2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      for ( i = 0; i < v4; ++i )
      {
        v9 = &v3[4 * i + 1];
        if ( i && (int)RtlFcpCompareFeatureToFeature(&v3[4 * i - 3], v9) >= 0 || (v9[1] & 0x30) == 0x30 )
          return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
  return v2;
}
