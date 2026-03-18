/*
 * XREFs of ??1CD2DBitmap@@UEAA@XZ @ 0x18012BDA4
 * Callers:
 *     ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x18012BD00 (--_GCD2DBitmap@@UEAAPEAXI@Z.c)
 *     ??1CDeviceTextureTarget@@UEAA@XZ @ 0x18012BD7C (--1CDeviceTextureTarget@@UEAA@XZ.c)
 *     ??1CSecondaryD2DBitmap@@UEAA@XZ @ 0x1801BCB3C (--1CSecondaryD2DBitmap@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CD2DResource::~CD2DResource(this);
}
