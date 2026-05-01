/*
 * XREFs of ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18007192C
 * Callers:
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180070A64 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1805E4E1C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x18068D6F4 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  _WORD *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  _WORD *v11; // rax
  _WORD *v13; // rax
  unsigned __int64 v14; // r8
  _WORD *v15; // rdx
  __int64 v16; // r15
  __int16 v17; // cx
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax

  v2 = a2[1];
  if ( v2 == -1LL )
  {
    if ( !*a2 )
      return 0;
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(*a2 + 2 * v2) );
    v4 = *a2;
  }
  else
  {
    v4 = *a2;
    v10 = 0;
    if ( !*a2 )
      return v10;
  }
  v5 = a1[1];
  if ( v5 == -1 )
  {
    v6 = (_WORD *)*a1;
    if ( v6 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v6[v5] );
    }
    else
    {
      v5 = 0LL;
    }
    a1[1] = v5;
  }
  v7 = v2 + v5;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-2147024362;
  v9 = a1[2];
  v10 = 0;
  if ( v9 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v9 = a1[1] + 1LL;
    else
      v9 = 0LL;
    a1[2] = v9;
  }
  if ( !v9 )
  {
    if ( !is_mul_ok(v8, 2uLL) )
      return (unsigned int)-2147024362;
    v13 = CoTaskMemAlloc(2 * v8);
    if ( v13 )
    {
      a1[2] = v8;
      *a1 = v13;
      *v13 = 0;
      goto LABEL_25;
    }
    v10 = -2147024882;
LABEL_24:
    if ( (v10 & 0x80000000) != 0 )
      return v10;
    goto LABEL_25;
  }
  if ( v8 <= v9 )
    goto LABEL_24;
  v18 = 2 * v9;
  if ( !is_mul_ok(v9, 2uLL) )
    return (unsigned int)-2147024362;
  if ( v9 > 0x800 )
    v18 = v9 + 2048;
  if ( v8 > v18 )
    v18 = v8;
  v19 = CoTaskMemRealloc((LPVOID)*a1, 2 * v18);
  if ( !v19 )
    return (unsigned int)-2147024882;
  a1[2] = v18;
  v10 = 0;
  *a1 = v19;
LABEL_25:
  v14 = v2 + 1;
  v15 = (_WORD *)(*a1 + 2LL * a1[1]);
  if ( v2 != -1LL )
  {
    if ( v14 > 0x7FFFFFFF || v2 > 0x7FFFFFFE )
    {
      *v15 = 0;
    }
    else
    {
      v16 = v4 - (_QWORD)v15;
      while ( v14 != 1 )
      {
        v17 = *(_WORD *)((char *)v15 + v16);
        if ( !v17 )
          break;
        *v15 = v17;
        --v14;
        ++v15;
      }
      v11 = v15 - 1;
      if ( v14 )
        v11 = v15;
      *v11 = 0;
    }
  }
  a1[1] += v2;
  return v10;
}
