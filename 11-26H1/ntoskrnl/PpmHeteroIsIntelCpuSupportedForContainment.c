/*
 * XREFs of PpmHeteroIsIntelCpuSupportedForContainment @ 0x140615F88
 * Callers:
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x14060D87C (PpmHeteroHgsCpuSupportedForContainment.c)
 * Callees:
 *     Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline @ 0x140615ED0 (Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsExtendedFamilyContainment__private_IsEnabledDeviceUsageNoInline @ 0x140615F2C (Feature_WpsExtendedFamilyContainment__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall PpmHeteroIsIntelCpuSupportedForContainment(char *a1)
{
  _BYTE *v2; // rbx
  char v3; // di
  unsigned __int64 IsEnabledDeviceUsageNoInline; // rax
  char v6; // al
  __int64 v7; // rcx

  v2 = a1 + 141;
  v3 = 0;
  if ( (unsigned int)Feature_WpsExtendedFamilyContainment__private_IsEnabledDeviceUsageNoInline()
    && *v2 == 2
    && a1[64] > 15 )
  {
    return 1;
  }
  IsEnabledDeviceUsageNoInline = Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)IsEnabledDeviceUsageNoInline )
  {
    if ( *v2 == 2 && a1[64] == 6 )
    {
      if ( a1[67] == -43 )
        return 1;
      goto LABEL_11;
    }
  }
  else if ( *v2 == 2 && a1[64] == 6 )
  {
LABEL_11:
    v6 = a1[67];
    if ( v6 == -86 )
      return 1;
    LOBYTE(IsEnabledDeviceUsageNoInline) = v6 + 84;
    if ( (unsigned __int8)IsEnabledDeviceUsageNoInline <= 0x21u )
    {
      v7 = 0x306030201LL;
      if ( _bittest64(&v7, IsEnabledDeviceUsageNoInline) )
        return 1;
    }
  }
  return v3;
}
