/*
 * XREFs of ??1CBitmapResource@@UEAA@XZ @ 0x18021EAFC
 * Callers:
 *     ??_GCBitmapResource@@UEAAPEAXI@Z @ 0x1801CB720 (--_GCBitmapResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
