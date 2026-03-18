/*
 * XREFs of PpmHeteroIsIntelCpuSupportedForContainment @ 0x1406130EC
 * Callers:
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x14060AC14 (PpmHeteroHgsCpuSupportedForContainment.c)
 * Callees:
 *     Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline @ 0x140613090 (Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall PpmHeteroIsIntelCpuSupportedForContainment(_BYTE *a1)
{
  _BYTE *v2; // rdi
  unsigned __int64 IsEnabledDeviceUsageNoInline; // rax
  char v4; // dl
  char v6; // al
  __int64 v7; // rcx

  v2 = a1 + 141;
  IsEnabledDeviceUsageNoInline = Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline();
  v4 = 0;
  if ( (_DWORD)IsEnabledDeviceUsageNoInline )
  {
    if ( *v2 == 2 && a1[64] == 6 )
    {
      if ( a1[67] == 0xD5 )
        return 1;
      goto LABEL_8;
    }
  }
  else if ( *v2 == 2 && a1[64] == 6 )
  {
LABEL_8:
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
  return v4;
}
