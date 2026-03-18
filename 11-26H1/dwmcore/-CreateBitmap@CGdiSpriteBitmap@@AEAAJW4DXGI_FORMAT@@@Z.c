/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C
 * Callers:
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1801BD458 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x18004A8F0 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x18004AAA4 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int DeviceBitmap; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r13d
  void *v7; // r15
  int v8; // r14d
  void *v9; // r12
  struct _LUID v10; // rbx
  int v11; // r14d
  int SectionBitmap; // eax
  int v13; // eax
  int v15; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v16[4]; // [rsp+34h] [rbp-2Ch]
  _BYTE v17[28]; // [rsp+44h] [rbp-1Ch] BYREF

  DeviceBitmap = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v4 = *((_QWORD *)this + 16);
  v15 = 0;
  *(_OWORD *)v16 = 0LL;
  v5 = *(_QWORD *)(v4 + 24);
  memset(v17, 0, sizeof(v17));
  if ( !(unsigned int)DwmGetSurfaceData(v5, &v15) )
  {
    GetLastError();
    goto LABEL_12;
  }
  v6 = v16[1];
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v7 = *(void **)&v17[20];
      v8 = 1;
      v9 = 0LL;
    }
    else
    {
      if ( v15 != 2 )
        goto LABEL_12;
      v9 = *(void **)&v17[20];
      v8 = 2;
      a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
      v7 = 0LL;
    }
    v10 = *(struct _LUID *)&v17[12];
    *((_DWORD *)this + 110) = v16[3];
    CGdiSpriteBitmap::UpdatePixelFormat(this, a2);
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v9, v10, v16[0], v6);
    }
    else
    {
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, v7, v16[0], v6);
      DeviceBitmap = SectionBitmap;
      if ( SectionBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
        goto LABEL_12;
      }
    }
    if ( *((_QWORD *)this + 56) )
    {
      v13 = CGdiSpriteBitmap::RegisterForSignaling(this);
      DeviceBitmap = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xCCu, 0LL);
    }
  }
LABEL_12:
  CGdiSpriteBitmap::OnMarginsChanged(this);
  return DeviceBitmap;
}
