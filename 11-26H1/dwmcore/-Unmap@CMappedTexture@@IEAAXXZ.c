/*
 * XREFs of ?Unmap@CMappedTexture@@IEAAXXZ @ 0x1802B8EB8
 * Callers:
 *     ?EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802B8A10 (-EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ @ 0x1802B8E78 (-ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180101FC0 (-Unmap@CD3DDevice@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180132790 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CMappedTexture::Unmap(CMappedTexture *this)
{
  CDeviceManager *v2; // rcx
  CD3DDevice *v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    v3 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v3);
    if ( (int)CDeviceManager::GetExistingDevice(v2, *(struct _LUID *)((char *)this + 36), &v3) < 0 )
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    else
      CD3DDevice::Unmap(v3, *((struct ID3D11Resource **)this + 7));
    *((_BYTE *)this + 64) = 0;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v3);
  }
}
