/*
 * XREFs of ??1CMappedTexture@@MEAA@XZ @ 0x1802B881C
 * Callers:
 *     ??_ECMappedTexture@@MEAAPEAXI@Z @ 0x1802B8860 (--_ECMappedTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ @ 0x1802B8E78 (-ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ.c)
 */

void __fastcall CMappedTexture::~CMappedTexture(CMappedTexture *this)
{
  *(_QWORD *)this = &CMappedTexture::`vftable';
  CMappedTexture::ReleaseBitmapAndUnmap(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
}
