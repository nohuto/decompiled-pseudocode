/*
 * XREFs of ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180549B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800712B0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_1800712B0.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::GetPropertyValue(CPlaceModeButtonAcc *this, int a2, struct tagVARIANT *a3)
{
  unsigned int inited; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v14; // r8
  const unsigned __int16 *v15; // rcx
  const unsigned __int16 *v16; // rcx
  unsigned int v18; // eax
  double v19; // xmm1_8
  __m128i v20; // xmm0
  int v21; // eax
  DOUBLE prgn; // [rsp+20h] [rbp-38h] BYREF
  double v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  double v26; // [rsp+38h] [rbp-20h]

  inited = 0;
  a3->vt = 0;
  if ( !*((_BYTE *)this + 40) )
    return inited;
  v6 = a2 - 30001;
  if ( !v6 )
  {
    v18 = *((_DWORD *)this + 14) - *((_DWORD *)this + 12);
    v19 = (double)*((int *)this + 13);
    prgn = (double)*((int *)this + 12);
    v20 = _mm_cvtsi32_si128(v18);
    v21 = *((_DWORD *)this + 15) - *((_DWORD *)this + 13);
    v24 = v19;
    v25 = *(_OWORD *)&_mm_cvtepi32_pd(v20);
    v26 = (double)v21;
    return (unsigned int)InitVariantFromDoubleArray(&prgn, 4u, a3);
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    a3->vt = 3;
    a3->lVal = 50000;
    return inited;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v16 = &pvData;
    if ( *((_QWORD *)this + 9) )
      v16 = (const unsigned __int16 *)*((_QWORD *)this + 9);
    return (unsigned int)InitVariantFromString(v16, a3);
  }
  v9 = v8 - 4;
  if ( !v9 || (v10 = v9 - 1) == 0 )
  {
LABEL_11:
    a3->vt = 11;
    a3->iVal = -1;
    return inited;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 5;
    if ( !v12 )
      goto LABEL_11;
    v13 = v12 - 1;
    if ( !v13 )
    {
      a3->vt = 11;
      a3->iVal = 0;
      return inited;
    }
    if ( v13 == 14 )
      goto LABEL_11;
  }
  else
  {
    v14 = (unsigned int)(*((_DWORD *)this + 11) + 1);
    prgn = 0.0;
    v24 = 0.0;
    v25 = 0LL;
    inited = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
               (wchar_t **)&prgn,
               L"PlaceModeButton %d",
               v14);
    if ( (inited & 0x80000000) == 0 )
    {
      v15 = &pvData;
      if ( prgn != 0.0 )
        v15 = *(const unsigned __int16 **)&prgn;
      inited = InitVariantFromString(v15, a3);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&prgn);
  }
  return inited;
}
