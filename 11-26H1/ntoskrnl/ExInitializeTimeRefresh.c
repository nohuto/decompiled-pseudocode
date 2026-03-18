/*
 * XREFs of ExInitializeTimeRefresh @ 0x140CE3D60
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x140725690 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x140837BDC (ExGetExpirationDate.c)
 */

PVOID *ExInitializeTimeRefresh()
{
  PVOID *result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !LOBYTE(ExpSysDbgLock.SystemCallNumber) )
  {
    if ( (int)ExGetExpirationDate((PLARGE_INTEGER)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue) < 0 )
      *(_QWORD *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue = 0LL;
    ExpShuttingDown = 0;
    *(_QWORD *)(MmWriteableSharedUserData + 712) = *(_QWORD *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue;
  }
  LODWORD(ExpSysDbgLock.RelativeTimerBias) = 275;
  ExpSysDbgLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)ExpTimeRefreshDpcRoutine;
  ExpSysDbgLock.Timer.Dpc = 0LL;
  ExpSysDbgLock.Timer.DueTime.QuadPart = (unsigned __int64)&ExpSysDbgLock.WaitStatus;
  ExpSysDbgLock.Timer.Header.WaitListHead.Flink = 0LL;
  ExpSysDbgLock.Queue = (_DISPATCHER_HEADER *volatile)ExpTimeRefreshWork;
  ExpSysDbgLock.Teb = 0LL;
  ExpSysDbgLock.WaitListEntry.Flink = 0LL;
  *(_WORD *)&ExpSysDbgLock.Timer.TimerType = 0;
  KiInitializeTimer2((unsigned __int64)&ExpSysDbgLock.Timer.Processor, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v1[0] = 0LL;
  *(_QWORD *)&ExpSysDbgLock.WaitBlockFill11[160] = -36000000000LL;
  v1[1] = -1LL;
  KeSetTimer2((__int64)&ExpSysDbgLock.Timer.Processor, -36000000000LL, 0LL, (__int64)v1);
  result = &ExpSysDbgLock.WaitBlock[2].SparePtr;
  *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] = 0LL;
  ExpSysDbgLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ExpSysDbgLock.WaitBlockFill11[136];
  ExpSysDbgLock.WaitBlock[2].SparePtr = &ExpSysDbgLock.WaitBlockFill11[136];
  return result;
}
