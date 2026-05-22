/*
 * XREFs of ??1?$com_ptr_t@VMPCManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180164A80
 * Callers:
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180164B94 (--1MPCManagerClientConnection@@UEAA@XZ.c)
 *     ??1MPCManagerClientPrincipal@@UEAA@XZ @ 0x18016B4C8 (--1MPCManagerClientPrincipal@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMP.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCManagerClient,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v1);
  return result;
}
