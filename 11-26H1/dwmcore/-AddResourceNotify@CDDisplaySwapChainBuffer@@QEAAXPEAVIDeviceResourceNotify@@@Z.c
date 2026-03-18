/*
 * XREFs of ?AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z @ 0x18021C438
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChainBuffer::AddResourceNotify(
        CDDisplaySwapChainBuffer *this,
        struct IDeviceResourceNotify *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 72LL))(*((_QWORD *)this + 27));
  *((_QWORD *)this + 24) = a2;
}
