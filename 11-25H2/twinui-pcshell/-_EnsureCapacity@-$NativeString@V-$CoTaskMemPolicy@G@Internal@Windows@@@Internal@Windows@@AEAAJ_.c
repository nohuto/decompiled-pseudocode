/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180141BEC
 * Callers:
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x180510094 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180086A3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        LPVOID *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  _WORD *v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  LPVOID v11; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = (unsigned __int64)a1[2];
  v5 = 0;
  if ( v4 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v4 = (unsigned __int64)a1[1] + 1;
    else
      v4 = 0LL;
    a1[2] = (LPVOID)v4;
  }
  if ( v4 )
  {
    if ( v2 <= v4 )
      return v5;
    v8 = 2 * v4;
    if ( !is_mul_ok(v4, 2uLL) )
      return (unsigned int)-2147024362;
    v9 = v4;
    v10 = v4 + 2048;
    if ( v9 <= 0x800 )
      v10 = v8;
    if ( v2 <= v10 )
      v2 = v10;
    v11 = CoTaskMemRealloc(*a1, 2 * v2);
    if ( v11 )
    {
      a1[2] = (LPVOID)v2;
      *a1 = v11;
      return v5;
    }
    return (unsigned int)-2147024882;
  }
  if ( is_mul_ok(v2, 2uLL) )
  {
    v7 = CoTaskMemAlloc(2 * v2);
    if ( v7 )
    {
      a1[2] = (LPVOID)v2;
      *a1 = v7;
      *v7 = 0;
      return v5;
    }
    return (unsigned int)-2147024882;
  }
  return (unsigned int)-2147024362;
}
