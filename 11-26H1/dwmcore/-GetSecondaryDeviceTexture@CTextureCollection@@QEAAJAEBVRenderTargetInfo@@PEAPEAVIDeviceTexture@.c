/*
 * XREFs of ?GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1AEC
 * Callers:
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B2754 (-GetDeviceTexture@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 *     ?GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z @ 0x1802B1B70 (-GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z.c)
 */

__int64 __fastcall CTextureCollection::GetSecondaryDeviceTexture(
        __int64 **this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  int UpdatedDeviceTexture; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCachedTexture *v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  UpdatedDeviceTexture = CTextureCollection::EnsureSecondaryTexture(this, a2, &v9);
  v5 = UpdatedDeviceTexture;
  if ( UpdatedDeviceTexture >= 0 )
  {
    UpdatedDeviceTexture = CCachedTexture::GetUpdatedDeviceTexture(v9, a3);
    v5 = UpdatedDeviceTexture;
    if ( UpdatedDeviceTexture >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 200LL;
  }
  else
  {
    v6 = 198LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
    (const char *)(unsigned int)UpdatedDeviceTexture);
LABEL_7:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
