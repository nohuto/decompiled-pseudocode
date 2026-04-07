/*
 * XREFs of ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x180056828
 * Callers:
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18005670C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(
        CIndirectSwapchainRenderTargetProxy *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int))(**((_QWORD **)this + 2) + 352LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2,
           a3,
           a4,
           a5);
}
