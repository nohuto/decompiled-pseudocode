/*
 * XREFs of ??4?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A5A6C
 * Callers:
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802A5814 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802A6528 (-clear_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801CBD64 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease(v4);
  return a1;
}
