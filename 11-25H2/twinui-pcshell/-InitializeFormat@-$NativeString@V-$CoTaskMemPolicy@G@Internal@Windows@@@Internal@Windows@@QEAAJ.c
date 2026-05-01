/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x1800539AC
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18009E520 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E9770 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180086A3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _vsnwprintf @ 0x1802D3068 (_vsnwprintf.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rbp
  int v9; // ebx
  unsigned __int64 v11; // r8
  _WORD *v12; // rax
  unsigned __int64 v13; // rbp
  wchar_t *v14; // r14
  size_t v15; // rbp
  int v16; // eax
  unsigned __int64 v17; // rbx
  LPVOID v18; // rax
  unsigned __int64 v19; // rax
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v6 = 32LL;
  v7 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v8 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
LABEL_3:
      v9 = -2147024362;
      goto LABEL_4;
    }
    v11 = *v7;
    if ( *v7 == -1LL )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
      if ( *(_QWORD *)a1 )
        v11 = *(_QWORD *)(a1 + 8) + 1LL;
      else
        v11 = 0LL;
      *v7 = v11;
    }
    if ( !v11 )
    {
      if ( !is_mul_ok(v8, 2uLL) )
        goto LABEL_3;
      v12 = CoTaskMemAlloc(2 * v8);
      if ( v12 )
      {
        *v7 = v8;
        *(_QWORD *)a1 = v12;
        *v12 = 0;
        goto LABEL_13;
      }
      v9 = -2147024882;
LABEL_12:
      if ( v9 < 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
    v9 = 0;
    if ( v8 <= v11 )
      goto LABEL_12;
    v17 = 2 * v11;
    if ( !is_mul_ok(v11, 2uLL) )
      goto LABEL_3;
    if ( v11 > 0x800 )
      v17 = v11 + 2048;
    if ( v8 > v17 )
      v17 = v8;
    v18 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v17);
    if ( !v18 )
    {
      v9 = -2147024882;
      goto LABEL_4;
    }
    *v7 = v17;
    *(_QWORD *)a1 = v18;
LABEL_13:
    v13 = *v7;
    v14 = *(wchar_t **)a1;
    _o__set_errno(0LL);
    if ( v13 - 1 > 0x7FFFFFFE )
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
LABEL_18:
    if ( v9 != -2147024774 )
      goto LABEL_19;
    v20 = 0;
    _o__get_errno(&v20);
    if ( v20 == 22 )
    {
      v9 = -2147024809;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(a1 + 16);
    v6 = v19 + 32;
    if ( v19 + 32 < v19 )
      goto LABEL_3;
  }
  v9 = -2147024809;
  if ( !v13 )
    goto LABEL_18;
  *v14 = 0;
LABEL_19:
  if ( v9 < 0 )
  {
LABEL_4:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
    return (unsigned int)v9;
  }
  *(_QWORD *)(a1 + 8) = -1LL;
  return (unsigned int)v9;
}
