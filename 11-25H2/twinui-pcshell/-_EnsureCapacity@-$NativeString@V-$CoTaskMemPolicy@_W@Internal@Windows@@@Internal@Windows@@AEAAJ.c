/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1806902FC
 * Callers:
 *     ??$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_WPEADAEBV_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@Z @ 0x18068ACE0 (--$_InitializeHelper@V_lambda_b11c054ca4b44c35188e9d098b3e0e31_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x18069041C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18064F764 (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_EnsureCapacity(
        LPVOID *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rcx
  int v5; // ebx
  _WORD *v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  LPVOID v9; // rax
  SIZE_T cb; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = (unsigned __int64)a1[2];
  if ( v4 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v4 = (unsigned __int64)a1[1] + 1;
    else
      v4 = 0LL;
    a1[2] = (LPVOID)v4;
  }
  if ( v4 )
  {
    v5 = 0;
    if ( v2 > v4 )
    {
      cb = 0LL;
      v5 = ULongLongMult(v4, 2uLL, &cb);
      if ( v5 >= 0 )
      {
        v8 = cb;
        if ( cb - v7 > 0x800 )
          v8 = v7 + 2048;
        if ( v2 > v8 )
          v8 = v2;
        v9 = CoTaskMemRealloc(*a1, 2 * v8);
        if ( v9 )
        {
          a1[2] = (LPVOID)v8;
          *a1 = v9;
          return (unsigned int)v5;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    cb = 0LL;
    v5 = ULongLongMult(v2, 2uLL, &cb);
    if ( v5 >= 0 )
    {
      v6 = CoTaskMemAlloc(cb);
      if ( v6 )
      {
        a1[2] = (LPVOID)v2;
        *a1 = v6;
        *v6 = 0;
        return (unsigned int)v5;
      }
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v5;
}
