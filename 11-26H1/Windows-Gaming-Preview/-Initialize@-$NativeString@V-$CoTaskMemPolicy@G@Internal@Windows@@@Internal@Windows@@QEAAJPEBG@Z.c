/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18000E178
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000F204 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18000F57C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rdi
  _WORD *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int16 v10; // ax
  _WORD *v11; // rax
  _WORD *v12; // rcx

  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v5);
    if ( v4 >= 0 )
    {
      v6 = *(_WORD **)a1;
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
      *(_QWORD *)(a1 + 8) = v5;
    }
  }
  else
  {
    v12 = *(_WORD **)a1;
    if ( v12 )
    {
      CoTaskMemFree(v12);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v4;
}
