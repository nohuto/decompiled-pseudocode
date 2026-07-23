/*
 * XREFs of PopAcquireAdaptiveLock @ 0x140ABAFAC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopActiveLockScreenPowerRequest @ 0x1407E2040 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407E22B8 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 */

struct _LIST_ENTRY *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  ULONG v6; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !a1 )
  {
    v6 = 0;
    PoBlockConsoleSwitchEx((__int64)v4, &v6, 0LL);
    Interval.QuadPart = -100000LL;
    while ( v6 != dword_140F0C078 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = (struct _LIST_ENTRY *)KeGetCurrentThread();
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
