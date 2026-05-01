/*
 * XREFs of ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x1804D6414
 * Callers:
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D637C (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 * Callees:
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804BA7F4 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 */

__int64 __fastcall GridLayoutFactory::_GetMaximumVisibleRows(GridLayoutFactory *this)
{
  ThumbnailHeight *v1; // rbx
  unsigned int v2; // edi
  int v3; // eax
  int v4; // r11d
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  int v9; // r9d
  int v10; // r10d

  v1 = (GridLayoutFactory *)((char *)this + 72);
  v2 = *((_DWORD *)this + 13) + *((_DWORD *)this + 133) - *((_DWORD *)this + 131);
  v3 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129));
  v5 = 1LL;
  if ( v2 / (v7 + v6 + v3) )
  {
    v8 = ThumbnailHeight::GetForScreenHeight(v1, v4);
    return v2 / (v10 + v9 + v8);
  }
  return v5;
}
