/*
 * XREFs of ??1CCachedTexture@@MEAA@XZ @ 0x1802B14DC
 * Callers:
 *     ??1CTextureCollection@@MEAA@XZ @ 0x1802B1544 (--1CTextureCollection@@MEAA@XZ.c)
 *     ??_ECCachedTexture@@MEAAPEAXI@Z @ 0x1802B15D0 (--_ECCachedTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseResources@CCachedTexture@@AEAAXXZ @ 0x1802B1F4C (-ReleaseResources@CCachedTexture@@AEAAXXZ.c)
 */

void __fastcall CCachedTexture::~CCachedTexture(CCachedTexture *this)
{
  *(_QWORD *)this = &CCachedTexture::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CCachedTexture::`vftable'{for `IDeviceResourceNotify'};
  CCachedTexture::ReleaseResources(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 5);
}
