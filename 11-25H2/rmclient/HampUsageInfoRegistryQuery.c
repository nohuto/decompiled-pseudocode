/*
 * XREFs of HampUsageInfoRegistryQuery @ 0x18000BAA0
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x18000B410 (HamQueryPackageUsageInfo.c)
 *     HamQueryApplicationUsageInfo @ 0x18001AC10 (HamQueryApplicationUsageInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

__int64 __fastcall HampUsageInfoRegistryQuery(HKEY a1, const WCHAR *a2, __m128i *a3)
{
  LSTATUS v4; // eax
  signed int v5; // ebx
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  unsigned int v9; // edi
  LSTATUS Value; // eax
  __m128i v11; // xmm1
  HKEY hKey; // [rsp+30h] [rbp-68h] BYREF
  HKEY v13; // [rsp+38h] [rbp-60h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+48h] [rbp-50h] BYREF
  __m128i v16; // [rsp+58h] [rbp-40h]

  phkResult = 0LL;
  v13 = 0LL;
  si128 = 0LL;
  hKey = 0LL;
  v16 = 0LL;
  v4 = RegOpenKeyExW(a1, a2, 0, 1u, &phkResult);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0xC0070000;
  if ( v5 >= 0 )
  {
    v7 = RegOpenKeyExW(phkResult, L"V1", 0, 1u, &v13);
    v5 = v7;
    if ( v7 > 0 )
      v5 = (unsigned __int16)v7 | 0xC0070000;
    if ( v5 >= 0 )
    {
      v8 = RegOpenKeyExW(v13, L"LU", 0, 0x20019u, &hKey);
      v5 = v8;
      if ( v8 > 0 )
        v5 = (unsigned __int16)v8 | 0xC0070000;
      if ( v5 >= 0 )
      {
        v9 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        v16 = si128;
        while ( v9 < 4 )
        {
          Value = RegQueryValueExW(
                    hKey,
                    (LPCWSTR)*(&LastUsageRegInfo + 3 * v9),
                    0LL,
                    0LL,
                    &si128.m128i_u8[*((unsigned int *)&LastUsageRegInfo + 6 * v9 + 3)],
                    (LPDWORD)&LastUsageRegInfo + 6 * v9 + 4);
          v5 = Value;
          if ( Value > 0 )
            v5 = (unsigned __int16)Value | 0xC0070000;
          if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -1073283070 )
            goto LABEL_4;
          ++v9;
        }
        v5 = 0;
        v11 = v16;
        *a3 = si128;
        a3[1] = v11;
      }
    }
  }
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v13 )
    RegCloseKey(v13);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v5;
}
