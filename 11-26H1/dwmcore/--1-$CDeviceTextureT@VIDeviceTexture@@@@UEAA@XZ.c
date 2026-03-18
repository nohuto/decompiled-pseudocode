/*
 * XREFs of ??1?$CDeviceTextureT@VIDeviceTexture@@@@UEAA@XZ @ 0x1802B759C
 * Callers:
 *     ??_ECCrossAdapterTexture@@MEAAPEAXI@Z @ 0x1802B7600 (--_ECCrossAdapterTexture@@MEAAPEAXI@Z.c)
 *     ??_ECDeviceTexture@@MEAAPEAXI@Z @ 0x1802B7660 (--_ECDeviceTexture@@MEAAPEAXI@Z.c)
 *     ??1CSysmemTexture@@MEAA@XZ @ 0x1802B8FC4 (--1CSysmemTexture@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDeviceTextureT<IDeviceTexture>::~CDeviceTextureT<IDeviceTexture>(CD3DResource *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 17);
  CD3DResource::~CD3DResource(this);
}
