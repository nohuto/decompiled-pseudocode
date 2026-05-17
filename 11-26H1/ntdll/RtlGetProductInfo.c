/*
 * XREFs of RtlGetProductInfo @ 0x1800DC180
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryLicenseValue @ 0x180161B50 (ZwQueryLicenseValue.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        DWORD OSMajorVersion,
        DWORD OSMinorVersion,
        DWORD SpMajorVersion,
        DWORD SpMinorVersion,
        PDWORD ReturnedProductType)
{
  DWORD v5; // ebx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  int v19; // [rsp+30h] [rbp-108h] BYREF
  DWORD v20; // [rsp+34h] [rbp-104h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-100h] BYREF
  _OWORD v22[13]; // [rsp+40h] [rbp-F8h] BYREF

  v5 = 0;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  if ( OSMajorVersion <= 5 )
    return 0;
  if ( (int)ZwQueryLicenseValue(L"$&", &v19, &v20, 4LL, &v21) < 0 || v19 != 4 || v21 != 4 )
  {
    *ReturnedProductType = -1412584499;
    return 1;
  }
  if ( (int)ZwQueryLicenseValue(L">@", &v19, v22, 200LL, &v21) < 0 )
  {
    *ReturnedProductType = v20;
    return 1;
  }
  if ( v19 == 3 && v21 >= 0x14 )
  {
    v10 = v21 / 0x14uLL;
    if ( v21 == 20 * v10 )
    {
      v11 = 0;
      if ( !v10 )
        goto LABEL_21;
      v12 = 0LL;
      do
      {
        v13 = 20 * v12;
        v14 = *(__m128i *)((char *)v22 + 20 * v12);
        v15 = *(_QWORD *)((char *)v22 + 20 * v12);
        if ( OSMajorVersion <= (unsigned int)v15 )
        {
          if ( OSMajorVersion < (unsigned int)v15
            || (v16 = HIDWORD(v15), OSMinorVersion <= (unsigned int)v16)
            && (OSMinorVersion < (unsigned int)v16
             || (v17 = _mm_srli_si128(v14, 8).m128i_u64[0], SpMajorVersion < (unsigned int)v17)
             || SpMajorVersion <= (unsigned int)v17 && SpMinorVersion < HIDWORD(v17)) )
          {
            v5 = *(_DWORD *)((char *)&v22[1] + v13);
          }
        }
        v12 = ++v11;
      }
      while ( v11 < v10 );
      if ( v5 )
        *ReturnedProductType = v5;
      else
LABEL_21:
        *ReturnedProductType = v20;
      return 1;
    }
  }
  return 0;
}
