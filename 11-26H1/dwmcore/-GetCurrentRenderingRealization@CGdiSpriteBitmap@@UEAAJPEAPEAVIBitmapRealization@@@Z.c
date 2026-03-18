/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x18004A8F0 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x18004AAA4 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  char *v2; // rbx
  int DeviceBitmap; // esi
  enum DXGI_FORMAT v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  int SectionBitmap; // eax
  int v11; // eax
  struct IBitmapRealization *v12; // rcx
  int v14; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15[4]; // [rsp+34h] [rbp-54h]
  _BYTE v16[28]; // [rsp+44h] [rbp-44h] BYREF

  v2 = (char *)this - 104;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 43) )
    goto LABEL_9;
  DeviceBitmap = 0;
  v5 = *((_DWORD *)v2 + 34);
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)((char *)this - 104));
  v6 = *((_QWORD *)v2 + 16);
  v14 = 0;
  *(_OWORD *)v15 = 0LL;
  v7 = *(_QWORD *)(v6 + 24);
  memset(v16, 0, sizeof(v16));
  if ( !(unsigned int)DwmGetSurfaceData(v7, &v14) )
  {
    GetLastError();
    goto LABEL_7;
  }
  v8 = v15[0];
  v9 = v15[1];
  if ( v14 == 1 )
  {
    *((_DWORD *)v2 + 110) = v15[3];
    CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)v2, v5);
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager((CGdiSpriteBitmap *)v2);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((CGdiSpriteBitmap *)v2, *(void **)&v16[20], v8, v9);
    DeviceBitmap = SectionBitmap;
    if ( SectionBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
      goto LABEL_17;
    }
  }
  else
  {
    if ( v14 != 2 )
      goto LABEL_7;
    *((_DWORD *)v2 + 110) = v15[3];
    CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)v2, DXGI_FORMAT_B8G8R8A8_UNORM);
    DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(
                     (CGdiSpriteBitmap *)v2,
                     *(void **)&v16[20],
                     *(struct _LUID *)&v16[12],
                     v8,
                     v9);
  }
  if ( !*((_QWORD *)v2 + 56)
    || (v11 = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)v2), DeviceBitmap = v11, v11 >= 0) )
  {
LABEL_7:
    CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)v2);
    if ( DeviceBitmap >= 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xCCu, 0LL);
LABEL_17:
  CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)v2);
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceBitmap, 0xC7u, 0LL);
LABEL_9:
  v12 = (struct IBitmapRealization *)*((_QWORD *)v2 + 56);
  if ( !v12 )
    return 2291674884LL;
  *a2 = v12;
  (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v12 + 8LL))(v12);
  return 0LL;
}
