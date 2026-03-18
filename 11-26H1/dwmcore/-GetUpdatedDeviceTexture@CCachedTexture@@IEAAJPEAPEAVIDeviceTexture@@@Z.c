/*
 * XREFs of ?GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z @ 0x1802B1B70
 * Callers:
 *     ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC (-GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1AEC (-GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedTexture::GetUpdatedDeviceTexture(struct IDeviceTexture **this, struct IDeviceTexture **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct IDeviceTexture *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CCachedTexture::Update((CCachedTexture *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *((_BYTE *)this + 160) && *((_BYTE *)this + 161) )
      v7 = this[17];
    else
      v7 = this[16];
    *a2 = v7;
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v7 + 8LL))(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/TextureCollection.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
