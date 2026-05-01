/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x1806B7924
 * Callers:
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1806B6430 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1806B7804 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Initialize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  _WORD *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int16 v12; // ax
  _WORD *v13; // rax

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a2 + 2 * v7) );
    if ( a3 == -1LL )
    {
      v3 = v7;
    }
    else if ( a3 >= v7 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(a2 + 2 * v7) );
    }
    else
    {
      v7 = a3;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_EnsureCapacity((LPVOID *)a1, v3);
    if ( v6 >= 0 )
    {
      v8 = *(_WORD **)a1;
      v9 = v3 + 1;
      if ( v9 )
      {
        if ( v9 > 0x7FFFFFFF || v7 > 0x7FFFFFFE )
        {
          *v8 = 0;
        }
        else
        {
          v10 = v7 - v9;
          v11 = a2 - (_QWORD)v8;
          do
          {
            if ( !(v10 + v9) )
              break;
            v12 = *(_WORD *)((char *)v8 + v11);
            if ( !v12 )
              break;
            *v8++ = v12;
            --v9;
          }
          while ( v9 );
          v13 = v8 - 1;
          if ( v9 )
            v13 = v8;
          *v13 = 0;
        }
      }
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  }
  return (unsigned int)v6;
}
