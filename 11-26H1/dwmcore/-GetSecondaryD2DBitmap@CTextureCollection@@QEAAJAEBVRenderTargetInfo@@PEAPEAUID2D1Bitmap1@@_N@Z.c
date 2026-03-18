/*
 * XREFs of ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC
 * Callers:
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2694 (-GetD2DBitmap@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 *     ?GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z @ 0x1802B1B70 (-GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextureCollection::GetSecondaryD2DBitmap(
        __int64 **this,
        struct _LUID *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int UpdatedDeviceTexture; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  CCachedTexture *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IDeviceTexture *v14; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12[0] = 0LL;
  v6 = CTextureCollection::EnsureSecondaryTexture(this, a2, v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v14);
    UpdatedDeviceTexture = CCachedTexture::GetUpdatedDeviceTexture(v12[0], &v14);
    v7 = UpdatedDeviceTexture;
    if ( UpdatedDeviceTexture >= 0 )
    {
      LOBYTE(v9) = a4;
      UpdatedDeviceTexture = (*(__int64 (__fastcall **)(struct IDeviceTexture *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v14 + 104LL))(
                               v14,
                               a3,
                               v9);
      v7 = UpdatedDeviceTexture;
      if ( UpdatedDeviceTexture >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
        v7 = 0;
        goto LABEL_9;
      }
      v10 = 224LL;
    }
    else
    {
      v10 = 220LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
      (const char *)(unsigned int)UpdatedDeviceTexture);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v12);
  return v7;
}
