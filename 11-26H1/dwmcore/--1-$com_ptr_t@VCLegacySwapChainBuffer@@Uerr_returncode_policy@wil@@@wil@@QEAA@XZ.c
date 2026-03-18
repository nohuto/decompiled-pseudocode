/*
 * XREFs of ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CBD44
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801CBAA0 (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801CBD64 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease();
  return result;
}
