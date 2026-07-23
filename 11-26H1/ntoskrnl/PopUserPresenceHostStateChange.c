/*
 * XREFs of PopUserPresenceHostStateChange @ 0x1409F7584
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409FA6E8 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopUserPresenceHostStateChange(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-38h]

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( PopHostGlobalUserPresenceState != a1 )
  {
    PopHostGlobalUserPresenceState = a1;
    PopEvaluateGlobalUserStatus(v4, v3, v5, v6, 0LL);
  }
  return PopReleaseAdaptiveLock(v4, v3, v5, v6, v8);
}
