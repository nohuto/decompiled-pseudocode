/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140CDCFB0
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140CD6C08 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD6CF8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
      PopDirectedDripsDiagTraceHandleRegistered = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                         (__int64)&dword_140FD68F0,
                                                         0LL,
                                                         0LL) >= 0;
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140D138C0);
    *(_QWORD *)&PopDirectedDripsDiagLock.Header.Lock = 0LL;
    memset_0(&PopDirectedDripsDiagLock.SListFaultAddress, 0, 0x250uLL);
    PopDirectedDripsDiagLock.QuantumTarget = (unsigned __int64)&PopDirectedDripsDiagLock.SListFaultAddress;
    PopDirectedDripsDiagLock.StackLimit = &PopDirectedDripsDiagLock.InitialStack;
    PopDirectedDripsDiagLock.InitialStack = &PopDirectedDripsDiagLock.InitialStack;
    PopDirectedDripsDiagLock.SListFaultAddress = &PopDirectedDripsDiagLock.SListFaultAddress;
    PopDirectedDripsDiagLock.CycleTime = 0LL;
    PopDirectedDripsDiagLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)0x100000001LL;
  }
}
