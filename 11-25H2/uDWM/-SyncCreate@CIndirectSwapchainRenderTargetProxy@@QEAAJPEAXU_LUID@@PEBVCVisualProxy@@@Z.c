/*
 * XREFs of ?SyncCreate@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAXU_LUID@@PEBVCVisualProxy@@@Z @ 0x1800B91E4
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::SyncCreate(
        CIndirectSwapchainRenderTargetProxy *this,
        void *a2,
        struct _LUID a3,
        const struct CVisualProxy *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                 + 424LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           *(_DWORD *)(*((_QWORD *)a4 + 2) + 24LL));
}
