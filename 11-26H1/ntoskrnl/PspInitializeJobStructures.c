/*
 * XREFs of PspInitializeJobStructures @ 0x140CD8FE0
 * Callers:
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 * Callees:
 *     ExCreateHandleTable @ 0x140971AEC (ExCreateHandleTable.c)
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
    PspSiloMonitorLock.AffinityVersion = 0LL;
    PspSiloMonitorLock.PropagateBoostsEntry.Next = 0LL;
    if ( (unsigned int)(PspJobTimeLimitsPeriodSeconds - 1) > 9 )
    {
      v1 = 7;
      PspJobTimeLimitsPeriodSeconds = 7;
    }
    PsAltSystemCallRegistrationLock.StackBase = PspJobNotificationWorker;
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&PsAltSystemCallRegistrationLock.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)PspJobTimeLimitsWork;
    PspJobTimeLimitsCount = v1;
    KiSystemServiceTraceCallbackLock.ThreadLock = (unsigned __int64)&PspSiloMonitorLock.ForegroundDpcStackListEntry.Next
                                                + 4;
    PsAltSystemCallRegistrationLock.ThreadLock = 0LL;
    PsAltSystemCallRegistrationLock.InitialStack = 0LL;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.SystemCallNumber = 0LL;
    PsAltSystemCallRegistrationLock.SchedulingGroup = 0LL;
    PspSiloMonitorLock.UserAffinity = 0LL;
    LODWORD(KiSystemServiceTraceCallbackLock.StackBase) = 32;
    LODWORD(KiSystemServiceTraceCallbackLock.InitialStack) = 256;
    KiSystemServiceTraceCallbackLock.StackLimit = &unk_140FD75C0;
    if ( !PspJobNoWakeChargeLimit )
      PspJobNoWakeChargeLimit = 50;
    if ( !PspSystemNoWakeChargeLimit )
      PspSystemNoWakeChargeLimit = 200;
    LOBYTE(HandleTable) = 1;
  }
  return (char)HandleTable;
}
