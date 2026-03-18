/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x18018E560 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1801BB1AC (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 *     ?TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ @ 0x180265C60 (-TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A624 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x18004AAA4 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int DeviceBitmap; // r14d
  enum DXGI_FORMAT v3; // r15d
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int SectionBitmap; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // r12
  __int64 *i; // r15
  __int64 v15; // rsi
  int (__fastcall *v16)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v17; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v18[4]; // [rsp+34h] [rbp-5h]
  _BYTE v19[28]; // [rsp+44h] [rbp+Bh] BYREF
  __int64 v20; // [rsp+A0h] [rbp+67h] BYREF
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+6Fh] BYREF

  if ( *((_QWORD *)this + 56) )
    return *((_QWORD *)this + 56) != 0LL;
  DeviceBitmap = 0;
  v3 = *((_DWORD *)this + 34);
  v4 = (void *)*((_QWORD *)this + 45);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 45) = 0LL;
  }
  if ( *((_QWORD *)this + 52) )
    *((_QWORD *)this + 52) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
  v5 = *((_QWORD *)this + 16);
  v17 = 0;
  *(_OWORD *)v18 = 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  memset(v19, 0, sizeof(v19));
  if ( (unsigned int)DwmGetSurfaceData(v6, &v17) )
  {
    v7 = v18[0];
    v8 = v18[1];
    if ( v17 == 1 )
    {
      *((_DWORD *)this + 110) = v18[3];
      CGdiSpriteBitmap::UpdatePixelFormat(this, v3);
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, *(void **)&v19[20], v7, v8);
      DeviceBitmap = SectionBitmap;
      if ( SectionBitmap >= 0 )
      {
LABEL_9:
        if ( *((_QWORD *)this + 56) )
        {
          v10 = CGdiSpriteBitmap::RegisterForSignaling(this);
          DeviceBitmap = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCCu, 0LL);
        }
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
    }
    else if ( v17 == 2 )
    {
      *((_DWORD *)this + 110) = v18[3];
      CGdiSpriteBitmap::UpdatePixelFormat(this, DXGI_FORMAT_B8G8R8A8_UNORM);
      DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, *(void **)&v19[20], *(struct _LUID *)&v19[12], v7, v8);
      goto LABEL_9;
    }
  }
  else
  {
    GetLastError();
  }
LABEL_12:
  v11 = *((_QWORD *)this + 56);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 128LL))(v11, (char *)this + 88);
    v12 = (__int64 *)*((_QWORD *)this + 58);
    for ( i = (__int64 *)*((_QWORD *)this + 57); i != v12; ++i )
    {
      v15 = *i;
      v21 = 0LL;
      v20 = 0LL;
      v16 = *(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)(v15 + 72)
                                                                                            + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
      if ( v16(v15 + 72, &v21) >= 0 )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v20);
        if ( (**v21)(v21, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v20) >= 0 )
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 128LL))(v20, (char *)this + 88);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    }
  }
  if ( DeviceBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceBitmap, 0xC7u, 0LL);
  return *((_QWORD *)this + 56) != 0LL;
}
