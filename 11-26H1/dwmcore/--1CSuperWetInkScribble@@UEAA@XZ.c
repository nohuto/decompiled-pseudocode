/*
 * XREFs of ??1CSuperWetInkScribble@@UEAA@XZ @ 0x180123350
 * Callers:
 *     ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x180123310 (--_GCSuperWetInkScribble@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSuperWetInkScribble::~CSuperWetInkScribble(CSuperWetInkScribble *this)
{
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((_QWORD *)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
