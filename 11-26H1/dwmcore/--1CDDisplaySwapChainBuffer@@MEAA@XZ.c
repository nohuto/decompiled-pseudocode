/*
 * XREFs of ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18029CCB0
 * Callers:
 *     ??_ECDDisplaySwapChainBuffer@@MEAAPEAXI@Z @ 0x18029D3F0 (--_ECDDisplaySwapChainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ @ 0x18029AFA0 (-RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ.c)
 */

void __fastcall CDDisplaySwapChainBuffer::~CDDisplaySwapChainBuffer(CDDisplaySwapChainBuffer *this)
{
  *(_QWORD *)this = &CDDisplaySwapChainBuffer::`vftable';
  CDDisplaySwapChainBuffer::RemoveResourceNotify(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  CSwapChainBuffer::~CSwapChainBuffer(this);
}
