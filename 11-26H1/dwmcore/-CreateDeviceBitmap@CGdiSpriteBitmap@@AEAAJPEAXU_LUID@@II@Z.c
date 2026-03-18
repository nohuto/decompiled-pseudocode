/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180129288 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ @ 0x1801BE9D0 (-RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z @ 0x1802086AC (-AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        void *a2,
        struct _LUID a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v10; // r14d
  int v11; // eax
  struct IGDIBitmapRealization *v12; // r13
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  struct IGDIBitmapRealization *v19; // [rsp+38h] [rbp-8h] BYREF
  int v20; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  v20 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v10 = a5;
  if ( !a4 || !a5 )
  {
LABEL_9:
    *((_QWORD *)this + 52) = a2;
    *((struct _LUID *)this + 53) = a3;
    *((_DWORD *)this + 108) = a4;
    *((_DWORD *)this + 109) = v10;
    goto LABEL_10;
  }
  v19 = 0LL;
  v11 = CGDIBitmapRealization::Create(a2, a3, &v19);
  v20 = v11;
  v5 = v11;
  if ( v11 >= 0 )
  {
    v12 = v19;
    v18 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(struct IGDIBitmapRealization *, GUID *, __int64 *))v19)(
            v19,
            &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
            &v18);
    v20 = v13;
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x65u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
      goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 72LL))(
      v18,
      ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v14 = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = v12;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5Au, 0LL);
  if ( v19 )
    (*(void (__fastcall **)(struct IGDIBitmapRealization *))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_10:
  TranslateDXGIorD3DErrorInContext(v5, 8LL, &v20);
  v15 = v20;
  if ( v20 >= 0 && *((_QWORD *)this + 56) )
  {
    v17 = CGdiSpriteBitmap::RegisterWithSurfaceManager(this);
    v15 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x7Au, 0LL);
  }
  else
  {
    CLegacySurfaceManager::AddRetryDeviceBitmap(
      (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 78) + 152LL),
      this);
  }
  return v15;
}
