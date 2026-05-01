/*
 * XREFs of ??1ImmersiveShellStressTool@@UEAA@XZ @ 0x18018DC2C
 * Callers:
 *     ??_EImmersiveShellStressTool@@UEAAPEAXI@Z @ 0x18018DBEC (--_EImmersiveShellStressTool@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018DD64 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall ImmersiveShellStressTool::~ImmersiveShellStressTool(ImmersiveShellStressTool *this)
{
  wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>((char *)this + 104);
  *((_DWORD *)this + 25) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)this);
}
