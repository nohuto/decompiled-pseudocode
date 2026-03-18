/*
 * XREFs of ??1CTranscodeBitmap@@MEAA@XZ @ 0x1802B23D8
 * Callers:
 *     ??_GCTranscodeBitmap@@MEAAPEAXI@Z @ 0x1802B2410 (--_GCTranscodeBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CTranscodeBitmap::~CTranscodeBitmap(CTranscodeBitmap *this)
{
  *(_QWORD *)this = &CTranscodeBitmap::`vftable';
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
