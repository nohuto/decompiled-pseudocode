/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801D7020
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x1801D34D0 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ @ 0x1801D7010 (-ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(result);
  return result;
}
