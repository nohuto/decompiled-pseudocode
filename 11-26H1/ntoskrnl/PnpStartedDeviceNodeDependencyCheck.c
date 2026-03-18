/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x140907730
 * Callers:
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407A4CEC (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1407B4DF4 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     PipAttemptDependentsStart @ 0x14090690C (PipAttemptDependentsStart.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock(v4, v3, v5, v6);
}
