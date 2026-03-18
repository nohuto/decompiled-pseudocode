/*
 * XREFs of ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800AB36C (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 */

void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax

  if ( *((_BYTE *)this + 150) )
  {
    v2 = (_QWORD *)((char *)this + 160);
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *((_BYTE *)this + 150) = 0;
  }
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    (*(void (__fastcall **)(struct IVtrSurfaceManager *, char *))(*(_QWORD *)VtrSurfaceManager + 24LL))(
      VtrSurfaceManager,
      (char *)this + 80);
}
