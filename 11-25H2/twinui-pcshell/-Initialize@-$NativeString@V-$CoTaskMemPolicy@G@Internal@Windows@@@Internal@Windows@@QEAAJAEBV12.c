/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18009A8A4
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18009B7DC (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180321870 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?SetCurrentRegion@PWSLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803E91C0 (-SetCurrentRegion@PWSLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows.c)
 *     ?GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z @ 0x1804AE1B0 (-GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z @ 0x1804C1550 (-GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180525D94 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180086A3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        LPVOID *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  _WORD *v10; // rax
  _WORD *v12; // rax
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int16 v16; // ax
  unsigned __int64 v17; // r14
  LPVOID v18; // rax

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
    v7 = v6;
  }
  else if ( v2 < v6 )
  {
    v7 = v2;
  }
  else
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v4 + 2 * v7) );
  }
  v8 = v2 + 1;
  if ( v2 + 1 < v2 )
    return (unsigned int)-2147024362;
  v9 = (unsigned __int64)a1[2];
  if ( v9 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    if ( *a1 )
      v9 = (unsigned __int64)a1[1] + 1;
    else
      v9 = 0LL;
    a1[2] = (LPVOID)v9;
  }
  if ( !v9 )
  {
    if ( !is_mul_ok(v8, 2uLL) )
      return (unsigned int)-2147024362;
    v12 = CoTaskMemAlloc(2 * v8);
    if ( v12 )
    {
      a1[2] = (LPVOID)v8;
      *a1 = v12;
      *v12 = 0;
      goto LABEL_26;
    }
    v5 = -2147024882;
LABEL_25:
    if ( (v5 & 0x80000000) != 0 )
      return v5;
    goto LABEL_26;
  }
  if ( v8 <= v9 )
    goto LABEL_25;
  v17 = 2 * v9;
  if ( !is_mul_ok(v9, 2uLL) )
    return (unsigned int)-2147024362;
  if ( v9 > 0x800 )
    v17 = v9 + 2048;
  if ( v8 > v17 )
    v17 = v8;
  v18 = CoTaskMemRealloc(*a1, 2 * v17);
  if ( !v18 )
    return (unsigned int)-2147024882;
  a1[2] = (LPVOID)v17;
  *a1 = v18;
LABEL_26:
  v13 = *a1;
  if ( v8 )
  {
    if ( v8 > 0x7FFFFFFF || v7 > 0x7FFFFFFE )
    {
      *v13 = 0;
    }
    else
    {
      v14 = v7 - v8;
      v15 = v4 - (_QWORD)v13;
      do
      {
        if ( !(v14 + v8) )
          break;
        v16 = *(_WORD *)((char *)v13 + v15);
        if ( !v16 )
          break;
        *v13++ = v16;
        --v8;
      }
      while ( v8 );
      v10 = v13 - 1;
      if ( v8 )
        v10 = v13;
      *v10 = 0;
    }
  }
  a1[1] = (LPVOID)v7;
  return v5;
}
