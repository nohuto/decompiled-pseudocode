/*
 * XREFs of ?CalculateFallbackSearchSize@@YA?AUSize@Foundation@Windows@winrt@@U1234@@Z @ 0x1803CF214
 * Callers:
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

float *__fastcall CalculateFallbackSearchSize(float *a1, __int64 a2)
{
  bool v3; // bl
  float v4; // xmm1_4
  float *result; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a2;
  v3 = 1;
  if ( *(float *)&a2 >= 1600.0 )
  {
    v6 = 0;
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
           L"CortanaPositionerOverride",
           &v6) >= 0 )
      v3 = v6 != 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = (float)(v3 ? 890 : 750);
  if ( (float)(v4 + 36.0) >= *((float *)&v7 + 1) )
  {
    v4 = *((float *)&v7 + 1);
    if ( *((float *)&v7 + 1) > 305.0 )
      v4 = *((float *)&v7 + 1) - 36.0;
  }
  result = a1;
  a1[1] = v4;
  *a1 = (float)(v3 ? 834 : 776);
  return result;
}
