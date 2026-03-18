/*
 * XREFs of ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140B897A0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0xFFFFFFF8);
}
