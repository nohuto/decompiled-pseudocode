/*
 * XREFs of SmInitSystem @ 0x140C852E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SmpSystemStoreCreate @ 0x140820570 (SmpSystemStoreCreate.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 *     SmHwAcceleratorMgrInitialize @ 0x140B3874C (SmHwAcceleratorMgrInitialize.c)
 *     SmGlobalsStart @ 0x140C85428 (SmGlobalsStart.c)
 *     SmQueryRegistry @ 0x140D10D28 (SmQueryRegistry.c)
 */

__int64 __fastcall SmInitSystem(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PVOID v4; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  v4 = PspSystemPartition;
  v6 = *((_QWORD *)PspSystemPartition + 3);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      result = SmQueryRegistry(&PspTlsContext.WaitBlockFill11[120]);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(v6 + 2336) = PspTlsContext.WaitBlock[2].Thread;
    }
    else if ( a1 == 2 )
    {
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &stru_140E27C48.QuantumTarget) >= 0 )
      {
        LODWORD(stru_140E27C48.InitialStack) |= 1u;
        HIDWORD(stru_140E27C48.InitialStack) = 64;
      }
    }
    else if ( a1 == 3 && (*(_DWORD *)(v6 + 2336) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3), a2, a3, a4);
    }
    goto LABEL_14;
  }
  memset_0(&PspTlsContext.WaitBlockFill11[120], 0, 0x5E0uLL);
  *(_QWORD *)&stru_140E27C48.Header.Lock = 0LL;
  qword_140E27C40 = (__int64)&qword_140E27C38;
  qword_140E27C38 = (__int64)&qword_140E27C38;
  SmHwAcceleratorMgrInitialize((__int64)&PspTlsContext.WaitBlock[2].Object);
  stru_140E27C48.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)PsInitialSystemProcess;
  LOBYTE(stru_140E27C48.ReadyTime) = 0;
  HIDWORD(stru_140E27C48.ThreadLock) = 6;
  result = SmGlobalsStart(&PspTlsContext.WaitBlockFill11[120]);
  if ( (int)result >= 0 )
  {
    result = SmCreatePartition((__int64)v4);
    if ( (int)result >= 0 )
    {
LABEL_14:
      LODWORD(stru_140E27C48.ThreadLock) = a1 + 1;
      return 0LL;
    }
  }
  return result;
}
