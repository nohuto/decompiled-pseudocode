/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x180129538 (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801585AC (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(CGdiSpriteBitmap *this, void *a2, UINT32 a3, UINT32 a4)
{
  struct IGDIBitmapRealization *v4; // rbx
  signed int v9; // edi
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  HANDLE CurrentProcess; // rdi
  HANDLE v14; // rax
  enum DXGI_FORMAT v15; // r9d
  int v16; // eax
  __int64 v17; // rcx
  signed int LastError; // eax
  int v19; // eax
  int v20; // eax
  enum DXGI_ALPHA_MODE dwDesiredAccess; // [rsp+20h] [rbp-30h]
  struct IGDIBitmapRealization *v22; // [rsp+40h] [rbp-10h] BYREF
  struct D2D_SIZE_U v23; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  if ( !a3 || !a4 )
  {
    *((_QWORD *)this + 45) = a2;
LABEL_15:
    *((_DWORD *)this + 108) = a3;
    *((_DWORD *)this + 109) = a4;
    *((_DWORD *)this + 110) = v10;
    goto LABEL_7;
  }
  v10 = 4LL * a3;
  if ( v10 <= 0xFFFFFFFF )
  {
    SetLastError(0);
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( !DuplicateHandle(v14, a2, CurrentProcess, (LPHANDLE)this + 45, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( v9 >= 0 )
        v9 = -2003304445;
      v11 = 292;
      goto LABEL_5;
    }
    v15 = *((_DWORD *)this + 34);
    v23.width = a3;
    dwDesiredAccess = *((_DWORD *)this + 35);
    v23.height = a4;
    v16 = CGDISectionBitmapRealization::Create(a2, &v23, v10, v15, dwDesiredAccess, (unsigned __int8 **)this + 46, &v22);
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x132u, 0LL);
      v4 = v22;
      goto LABEL_7;
    }
    if ( !*((_BYTE *)this + 155) )
    {
      v17 = *((_QWORD *)this + 56);
      *((_QWORD *)this + 56) = v22;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_15;
    }
    v23 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v4 = v22;
    v19 = CColorKeyBitmapRealization::Create(
            v22,
            (CGdiSpriteBitmap *)((char *)this + 376),
            (struct IBitmapRealization **)&v23);
    v9 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x13Eu, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 56);
      v20 = (***(__int64 (__fastcall ****)(struct D2D_SIZE_U, GUID *, char *))&v23)(
              v23,
              &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309,
              (char *)this + 448);
      v9 = v20;
      if ( v20 >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x140u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_7;
  }
  v9 = -2147024362;
  v11 = 282;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11, 0LL);
  if ( a2 )
    CloseHandle(a2);
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(struct IGDIBitmapRealization *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v9;
}
