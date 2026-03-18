/*
 * XREFs of ??1CDecodeBitmap@@UEAA@XZ @ 0x1801B0F7C
 * Callers:
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x1801B0F40 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDecodeBitmap::~CDecodeBitmap(CDecodeBitmap *this)
{
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((_QWORD *)this + 18);
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
}
