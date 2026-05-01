/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800EC0C0
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800AA594 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18031E030 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?SetCurrentRegion@PWSLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803F2B60 (-SetCurrentRegion@PWSLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows.c)
 *     ?GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z @ 0x1804BFD70 (-GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z @ 0x1804D34E0 (-GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180548E00 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        LPVOID *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  _WORD *v9; // rax
  _WORD *v11; // rax
  _WORD *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int16 v15; // dx
  unsigned __int64 v16; // rbx
  LPVOID v17; // rax

  v2 = a2[1];
  if ( v2 == -1LL )
  {
    if ( *a2 )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( *(_WORD *)(*a2 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  v4 = *a2;
  v5 = 0;
  if ( !*a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
    return v5;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v4 + 2 * v6) );
  if ( v2 == -1LL )
  {
    v2 = v6;
  }
  else if ( v2 < v6 )
  {
    v6 = v2;
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v4 + 2 * v6) );
  }
  v7 = v2 + 1;
  if ( v2 + 1 < v2 )
    return (unsigned int)-2147024362;
  v8 = (unsigned __int64)a1[2];
  if ( v8 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v8 = (unsigned __int64)a1[1] + 1;
    else
      v8 = 0LL;
    a1[2] = (LPVOID)v8;
  }
  if ( !v8 )
  {
    if ( !is_mul_ok(v7, 2uLL) )
      return (unsigned int)-2147024362;
    v11 = CoTaskMemAlloc(2 * v7);
    if ( v11 )
    {
      a1[2] = (LPVOID)v7;
      *a1 = v11;
      *v11 = 0;
      goto LABEL_26;
    }
    v5 = -2147024882;
LABEL_25:
    if ( (v5 & 0x80000000) != 0 )
      return v5;
    goto LABEL_26;
  }
  if ( v7 <= v8 )
    goto LABEL_25;
  v16 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    return (unsigned int)-2147024362;
  if ( v8 > 0x800 )
    v16 = v8 + 2048;
  if ( v7 > v16 )
    v16 = v7;
  v17 = CoTaskMemRealloc(*a1, 2 * v16);
  if ( !v17 )
    return (unsigned int)-2147024882;
  a1[2] = (LPVOID)v16;
  v5 = 0;
  *a1 = v17;
LABEL_26:
  v12 = *a1;
  if ( v7 )
  {
    if ( v7 > 0x7FFFFFFF || v6 > 0x7FFFFFFE )
    {
      *v12 = 0;
    }
    else
    {
      v13 = v6;
      v14 = v4 - (_QWORD)v12;
      do
      {
        if ( !v13 )
          break;
        v15 = *(_WORD *)((char *)v12 + v14);
        if ( !v15 )
          break;
        *v12 = v15;
        --v13;
        ++v12;
        --v7;
      }
      while ( v7 );
      v9 = v12 - 1;
      if ( v7 )
        v9 = v12;
      *v9 = 0;
    }
  }
  a1[1] = (LPVOID)v6;
  return v5;
}
