/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140A3AFDC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     PopActiveLockScreenPowerRequest @ 0x1407DDA10 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407DDC88 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407DDEB4 (PopSessionConnectionChangeV2.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PoBlockConsoleSwitchEx @ 0x140450E68 (PoBlockConsoleSwitchEx.c)
 */

struct _LIST_ENTRY *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !a1 )
  {
    v6 = 0;
    PoBlockConsoleSwitchEx((__int64)v4, &v6, 0LL);
    Interval.QuadPart = -100000LL;
    while ( v6 != *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PopAdaptiveStandbyLock.AbCompletedIoQoSBoostCount, 1u);
  result = (struct _LIST_ENTRY *)KeGetCurrentThread();
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = result;
  LOBYTE(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = a1 == 0;
  return result;
}
