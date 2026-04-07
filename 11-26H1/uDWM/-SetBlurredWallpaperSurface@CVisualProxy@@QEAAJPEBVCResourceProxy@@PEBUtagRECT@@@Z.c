/*
 * XREFs of ?SetBlurredWallpaperSurface@CVisualProxy@@QEAAJPEBVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180074304
 * Callers:
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x1800742F4 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetBlurredWallpaperSurface(
        CVisualProxy *this,
        const struct CResourceProxy *a2,
        const struct tagRECT *a3)
{
  __int64 v4; // r8

  v4 = 0LL;
  if ( a2 )
    v4 = *((unsigned int *)a2 + 6);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 2) + 184LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           v4,
           a3);
}
