/*
 * XREFs of SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063B910
 * Callers:
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

bool __fastcall SeTokenIsNoChildProcessRestrictionEnforced(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v3 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (v3 & 0x80000) != 0;
}
