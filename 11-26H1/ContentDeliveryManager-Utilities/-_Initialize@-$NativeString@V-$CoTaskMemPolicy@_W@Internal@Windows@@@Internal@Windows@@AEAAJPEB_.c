/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180083C00
 * Callers:
 *     ?LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180082AE0 (-LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003D87C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Initialize(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rbx
  _WORD *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int16 v10; // ax
  _WORD *v11; // rax

  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v5);
    if ( v4 >= 0 )
    {
      v6 = (_WORD *)*a1;
      v7 = v5 + 1;
      if ( v5 != -1LL )
      {
        if ( v7 > 0x7FFFFFFF || v5 > 0x7FFFFFFE )
        {
          *v6 = 0;
        }
        else
        {
          v8 = a2 - (_QWORD)v6;
          while ( 1 )
          {
            v9 = v7;
            if ( !--v7 )
              break;
            v10 = *(_WORD *)((char *)v6 + v8);
            if ( !v10 )
              break;
            *v6++ = v10;
          }
          v11 = v6 - 1;
          if ( v9 )
            v11 = v6;
          *v11 = 0;
        }
      }
      a1[1] = v5;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
  }
  return (unsigned int)v4;
}
