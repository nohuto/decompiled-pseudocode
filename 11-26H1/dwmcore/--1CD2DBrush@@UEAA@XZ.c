/*
 * XREFs of ??1CD2DBrush@@UEAA@XZ @ 0x1801233BC
 * Callers:
 *     ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x180123380 (--_GCD2DGenericInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBrush::~CD2DBrush(CD2DBrush *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CD2DResource::~CD2DResource(this);
}
