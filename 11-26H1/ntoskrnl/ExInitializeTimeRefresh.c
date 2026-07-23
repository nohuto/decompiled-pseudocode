/*
 * XREFs of ExInitializeTimeRefresh @ 0x140CEA100
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14072A260 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x14083DE1C (ExGetExpirationDate.c)
 */

$08E725EC6134F01F525383E5528526A8 *ExInitializeTimeRefresh()
{
  $08E725EC6134F01F525383E5528526A8 *result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSysDbgLock.ApcStateFill[4] )
  {
    if ( (int)ExGetExpirationDate((PLARGE_INTEGER)&PspSiloMonitorLock.AbWaitObject) < 0 )
      PspSiloMonitorLock.AbWaitObject = 0LL;
    ExpShuttingDown = 0;
    *(_QWORD *)(MmWriteableSharedUserData + 712) = PspSiloMonitorLock.AbWaitObject;
  }
  *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[16] = 275;
  ExpSysDbgLock.WaitBlock[0].SparePtr = ExpTimeRefreshDpcRoutine;
  ExpSysDbgLock.WaitBlock[1].WaitListEntry.Flink = ExpSysDbgLock.SavedApcState.ApcListHead;
  ExpSysDbgLock.WaitBlock[0].Object = 0LL;
  ExpSysDbgLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)ExpTimeRefreshWork;
  ExpSysDbgLock.WaitBlock[2].WaitListEntry.Blink = 0LL;
  *(_OWORD *)&ExpSysDbgLock.WaitBlockFill11[72] = 0uLL;
  *(_WORD *)&ExpSysDbgLock.WaitBlockFill11[146] = 0;
  KiInitializeTimer2((unsigned __int64)&ExpSysDbgLock.WaitBlock[3], (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v1[0] = 0LL;
  ExpSysDbgLock.Timer.DueTime.QuadPart = -36000000000LL;
  v1[1] = -1LL;
  KeSetTimer2((__int64)&ExpSysDbgLock.WaitBlock[3], -36000000000LL, 0LL, (__int64)v1);
  result = &ExpSysDbgLock.320;
  *(_QWORD *)&ExpSysDbgLock.WaitBlockFill11[112] = 0LL;
  ExpSysDbgLock.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&ExpSysDbgLock.320;
  ExpSysDbgLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ExpSysDbgLock.320;
  return result;
}
