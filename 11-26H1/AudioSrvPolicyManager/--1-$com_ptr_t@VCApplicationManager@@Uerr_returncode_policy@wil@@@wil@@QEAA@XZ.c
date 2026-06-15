/*
 * XREFs of ??1?$com_ptr_t@VCApplicationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002A08C
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004E4DA (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CApplicationManager,wil::err_returncode_policy>::~com_ptr_t<CApplicationManager,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  return result;
}
