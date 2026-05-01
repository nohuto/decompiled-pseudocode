/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180161DE8
 * Callers:
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1803BE1D0 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803BE5C0 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18040C9F0 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1805E4E1C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x18067E0D8 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windo.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x18068D6F4 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _WORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  _WORD *v14; // rax
  unsigned __int64 v15; // r8
  _WORD *v16; // rdx
  __int64 v17; // r15
  __int16 v18; // cx
  unsigned __int64 v19; // rbx
  LPVOID v20; // rax

  v6 = 0;
  if ( !a2 )
    return v6;
  v7 = a1[1];
  if ( v7 == -1 )
  {
    v8 = (_WORD *)*a1;
    if ( v8 )
    {
      do
        ++v7;
      while ( v8[v7] );
    }
    else
    {
      v7 = 0LL;
    }
    a1[1] = v7;
  }
  v9 = a3 + v7;
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-2147024362;
  v11 = a1[2];
  if ( v11 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v11 = a1[1] + 1LL;
    else
      v11 = 0LL;
    a1[2] = v11;
  }
  if ( v11 )
  {
    if ( v10 > v11 )
    {
      v19 = 2 * v11;
      if ( !is_mul_ok(v11, 2uLL) )
        return (unsigned int)-2147024362;
      if ( v11 > 0x800 )
        v19 = v11 + 2048;
      if ( v10 > v19 )
        v19 = v10;
      v20 = CoTaskMemRealloc((LPVOID)*a1, 2 * v19);
      if ( !v20 )
        return (unsigned int)-2147024882;
      a1[2] = v19;
      v6 = 0;
      *a1 = v20;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( !is_mul_ok(v10, 2uLL) )
    return (unsigned int)-2147024362;
  v14 = CoTaskMemAlloc(2 * v10);
  if ( !v14 )
  {
    v6 = -2147024882;
LABEL_19:
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    goto LABEL_20;
  }
  a1[2] = v10;
  *a1 = v14;
  *v14 = 0;
LABEL_20:
  v15 = a3 + 1;
  v16 = (_WORD *)(*a1 + 2LL * a1[1]);
  if ( a3 != -1LL )
  {
    if ( v15 > 0x7FFFFFFF || a3 > 0x7FFFFFFE )
    {
      *v16 = 0;
    }
    else
    {
      v17 = a2 - (_QWORD)v16;
      while ( v15 != 1 )
      {
        v18 = *(_WORD *)((char *)v16 + v17);
        if ( !v18 )
          break;
        *v16 = v18;
        --v15;
        ++v16;
      }
      v12 = v16 - 1;
      if ( v15 )
        v12 = v16;
      *v12 = 0;
    }
  }
  a1[1] += a3;
  return v6;
}
