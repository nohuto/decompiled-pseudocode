/*
 * XREFs of ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z @ 0x18001EB20
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18001EB40 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::SynchronizedCommit(CCompositor *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), a2);
}
