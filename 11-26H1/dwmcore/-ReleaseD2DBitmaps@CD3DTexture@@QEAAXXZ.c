/*
 * XREFs of ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x180186F50
 * Callers:
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x180186EB0 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD3DTexture::ReleaseD2DBitmaps(CD3DTexture *this)
{
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 28);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 29);
}
