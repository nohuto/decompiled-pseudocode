/*
 * XREFs of ?SyncCreate@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAXU_LUID@@PEBVCVisualProxy@@@Z @ 0x1800B80EC
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800CBA4C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::SyncCreate(
        CIndirectSwapchainRenderTargetProxy *this,
        void *a2,
        struct _LUID a3,
        const struct CVisualProxy *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID, _DWORD))(**((_QWORD **)this + 2) + 344LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3,
           *((_DWORD *)a4 + 6));
}
