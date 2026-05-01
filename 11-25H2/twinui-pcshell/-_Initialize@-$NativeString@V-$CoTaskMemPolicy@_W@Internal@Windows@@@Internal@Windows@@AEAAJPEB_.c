/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x18069041C
 * Callers:
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18068EFEC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1806902FC (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Initialize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _WORD *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int16 v13; // ax
  _WORD *v14; // rax

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a2 + 2 * v8) );
    if ( a3 == -1LL )
    {
      v3 = v8;
      v7 = v8;
    }
    else if ( a3 >= v8 )
    {
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
      v9 = *(_WORD **)a1;
      v10 = v3 + 1;
      if ( v10 )
      {
        if ( v10 <= 0x7FFFFFFF && v7 <= 0x7FFFFFFE )
        {
          v11 = v7 - v10;
          v12 = a2 - (_QWORD)v9;
          do
          {
            if ( !(v11 + v10) )
              break;
            v13 = *(_WORD *)((char *)v9 + v12);
            if ( !v13 )
              break;
            *v9++ = v13;
            --v10;
          }
          while ( v10 );
          v14 = v9 - 1;
          if ( v10 )
            v14 = v9;
          *v14 = 0;
        }
        else
        {
          *v9 = 0;
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
