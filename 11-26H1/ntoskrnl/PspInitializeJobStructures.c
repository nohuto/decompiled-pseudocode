/*
 * XREFs of PspInitializeJobStructures @ 0x140CDF360
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 */

char PspInitializeJobStructures()
{
  _BYTE *HandleTable; // rax
  int v1; // ecx

  HandleTable = (_BYTE *)ExCreateHandleTable(0LL, 0);
  PspSiloMonitorLock.WaitBlock[1].SparePtr = HandleTable;
  if ( HandleTable )
  {
    HandleTable[44] |= 1u;
    v1 = PspJobTimeLimitsPeriodSeconds;
    KiSystemServiceTraceCallbackLock.StateSaveArea = (_XSAVE_FORMAT *)&KiSystemServiceTraceCallbackLock.KernelStack;
    KiSystemServiceTraceCallbackLock.KernelStack = &KiSystemServiceTraceCallbackLock.KernelStack;
    PspSiloMonitorLock.Affinity = 0LL;
    PspSiloMonitorLock.PropagateBoostsEntry.Next = 0LL;
    if ( (unsigned int)(PspJobTimeLimitsPeriodSeconds - 1) > 9 )
    {
      v1 = 7;
      PspJobTimeLimitsPeriodSeconds = 7;
    }
    *(_QWORD *)&PsAltSystemCallRegistrationLock.ApcStateFill[40] = PspJobNotificationWorker;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Header.Lock = PspJobTimeLimitsWork;
    PspJobTimeLimitsCount = v1;
    KiSystemServiceTraceCallbackLock.StackLimit = (char *)&PspSiloMonitorLock.ForegroundDpcStackListEntry.Next + 4;
    PsAltSystemCallRegistrationLock.WaitStatus = 0LL;
    PsAltSystemCallRegistrationLock.ApcState.ApcListHead[1].Blink = 0LL;
    PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead.Flink = 0LL;
    PsAltSystemCallRegistrationLock.Teb = 0LL;
    PspSiloMonitorLock.UserAffinity = 0LL;
    LODWORD(KiSystemServiceTraceCallbackLock.InitialStack) = 32;
    LODWORD(KiSystemServiceTraceCallbackLock.StackBase) = 256;
    KiSystemServiceTraceCallbackLock.ThreadLock = (unsigned __int64)&unk_140FD85D0;
    if ( !PspJobNoWakeChargeLimit )
      PspJobNoWakeChargeLimit = 50;
    if ( !PspSystemNoWakeChargeLimit )
      PspSystemNoWakeChargeLimit = 200;
    LOBYTE(HandleTable) = 1;
  }
  return (char)HandleTable;
}
