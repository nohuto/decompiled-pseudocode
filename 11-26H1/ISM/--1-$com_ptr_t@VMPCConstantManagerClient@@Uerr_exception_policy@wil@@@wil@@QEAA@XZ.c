/*
 * XREFs of ??1?$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180178414
 * Callers:
 *     ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180178434 (--1MPCConstantManagerClientPrincipal@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801690B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(
             v2,
             a2);
  return result;
}
