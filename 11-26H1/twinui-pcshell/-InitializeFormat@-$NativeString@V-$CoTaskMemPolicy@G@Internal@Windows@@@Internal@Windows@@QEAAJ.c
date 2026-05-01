/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x180070FF0
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180070A64 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801DED70 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _vsnwprintf @ 0x1802C9F40 (_vsnwprintf.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        wchar_t **a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  int v9; // ebx
  wchar_t *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rsi
  wchar_t *v14; // r14
  size_t v15; // rsi
  int v16; // eax
  unsigned __int64 v17; // rbx
  wchar_t *v18; // rax
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = 32LL;
  while ( 1 )
  {
    v7 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
LABEL_9:
      v9 = -2147024362;
      goto LABEL_10;
    }
    v8 = (unsigned __int64)a1[2];
    v9 = 0;
    if ( v8 == -1LL )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
      if ( *a1 )
        v8 = (unsigned __int64)a1[1] + 1;
      else
        v8 = 0LL;
      a1[2] = (wchar_t *)v8;
    }
    if ( !v8 )
    {
      v19 = 0LL;
      if ( !is_mul_ok(v7, 2uLL) )
        goto LABEL_9;
      v10 = (wchar_t *)CoTaskMemAlloc(2 * v7);
      if ( v10 )
      {
        a1[2] = (wchar_t *)v7;
        *a1 = v10;
        *v10 = 0;
        goto LABEL_14;
      }
      v9 = -2147024882;
LABEL_13:
      if ( v9 < 0 )
        goto LABEL_10;
      goto LABEL_14;
    }
    if ( v7 <= v8 )
      goto LABEL_13;
    v19 = 0LL;
    v17 = 2 * v8;
    if ( !is_mul_ok(v8, 2uLL) )
      goto LABEL_9;
    if ( v8 > 0x800 )
      v17 = v8 + 2048;
    if ( v7 > v17 )
      v17 = v7;
    v18 = (wchar_t *)CoTaskMemRealloc(*a1, 2 * v17);
    if ( !v18 )
    {
      v9 = -2147024882;
      goto LABEL_10;
    }
    a1[2] = (wchar_t *)v17;
    *a1 = v18;
LABEL_14:
    v13 = (unsigned __int64)a1[2];
    v14 = *a1;
    _o__set_errno(0LL);
    if ( !v13 || v13 > 0x7FFFFFFF )
      break;
    v15 = v13 - 1;
    v9 = 0;
    v16 = vsnwprintf(v14, v15, a2, a3);
    if ( v16 < 0 || v16 > v15 )
    {
      v14[v15] = 0;
      v9 = -2147024774;
    }
    else if ( v16 == v15 )
    {
      v14[v15] = 0;
    }
LABEL_20:
    if ( v9 != -2147024774 )
      goto LABEL_21;
    LODWORD(v19) = 0;
    _o__get_errno(&v19);
    if ( (_DWORD)v19 == 22 )
    {
      v9 = -2147024809;
      goto LABEL_21;
    }
    v11 = (unsigned __int64)a1[2];
    v5 = v11 + 32;
    if ( v11 + 32 < v11 )
      goto LABEL_9;
  }
  v9 = -2147024809;
  if ( !v13 )
    goto LABEL_20;
  *v14 = 0;
LABEL_21:
  if ( v9 < 0 )
  {
LABEL_10:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
    return (unsigned int)v9;
  }
  a1[1] = (wchar_t *)-1LL;
  return (unsigned int)v9;
}
