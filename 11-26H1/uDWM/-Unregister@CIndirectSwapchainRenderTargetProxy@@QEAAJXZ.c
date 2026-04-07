/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x18008ADD8
 * Callers:
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18005A528 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800CBA4C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::Unregister(CIndirectSwapchainRenderTargetProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 360LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6));
}
