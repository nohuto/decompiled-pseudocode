/*
 * XREFs of ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z @ 0x1800591A0
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180058EA0 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::SynchronizedCommit(CCompositor *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), a2);
}
