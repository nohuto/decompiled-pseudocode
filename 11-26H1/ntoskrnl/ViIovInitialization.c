/*
 * XREFs of ViIovInitialization @ 0x140C30C7C
 * Callers:
 *     VfIovPluginEntry @ 0x140646270 (VfIovPluginEntry.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     VfAvlInitializeTree @ 0x140644788 (VfAvlInitializeTree.c)
 *     IovInitAiDb @ 0x1406460C0 (IovInitAiDb.c)
 *     ExSetPoolFlags @ 0x1406D00A0 (ExSetPoolFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     IoVerifierInit @ 0x140C26A3C (IoVerifierInit.c)
 *     IovExpandIrpStackTracker @ 0x140C3098C (IovExpandIrpStackTracker.c)
 *     IovExpandIrpTracker @ 0x140C309F4 (IovExpandIrpTracker.c)
 *     VfMajorRegisterHandlers @ 0x140C374E0 (VfMajorRegisterHandlers.c)
 *     VfWdInit @ 0x140C3FFC0 (VfWdInit.c)
 */

void ViIovInitialization()
{
  __int64 v0; // rcx
  _QWORD *Pool2; // rax
  int v2; // ecx
  int v3; // ecx

  IovIrpTrackerCount = 0;
  IovIrpStackTrackerCount = 0;
  if ( ((unsigned __int8)&stru_140E27C48.WaitBlockFill7[152] & 0xF) != 0
    || (*(_OWORD *)&stru_140E27C48.WaitBlockFill11[152] = 0LL,
        ((unsigned __int8)&stru_140E27C48.WaitBlockFill11[168] & 0xF) != 0)
    || (*(_OWORD *)&stru_140E27C48.WaitBlockFill11[168] = 0LL,
        ((unsigned __int8)&stru_140E27C48.LastXStateSaveDebugInfo & 0xF) != 0)
    || (*(_OWORD *)&stru_140E27C48.LastXStateSaveDebugInfo = 0LL,
        ((unsigned __int8)&stru_140E27C48.QueueListEntry & 0xF) != 0) )
  {
    RtlRaiseStatus(-2147483646);
  }
  stru_140E27C48.QueueListEntry = 0LL;
  IovExpandIrpTracker();
  IovExpandIrpStackTracker();
  IovInitAiDb();
  IovRundown.Count = 0LL;
  if ( !VfIrpDatabaseInitialized )
  {
    ViIrpDatabaseLock = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x2000uLL, 0x74546F49u);
    ViIrpDatabase = Pool2;
    if ( Pool2 )
    {
      v0 = 256LL;
      do
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2 += 2;
        --v0;
      }
      while ( v0 );
      ViIrpDatabaseAddressRanges = (__int64)Pool2;
      _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
    }
  }
  if ( (VfRuleClasses & 0x400000) == 0 )
    VfWdInit();
  if ( !ViSessionDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViSessionDataLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolDispatchLevel,
      512,
      2600,
      1936749129,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViSessionDataInitialized, 1);
  }
  if ( !ViPacketLookasideInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViPacketLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      256,
      1953526345,
      16,
      VfInitializedWithoutReboot);
    ViPacketLookasideInitialized = 1;
  }
  if ( !ViIsIrpCallDriverDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIrpCallDriverDataList,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      216,
      1131442761,
      16,
      VfInitializedWithoutReboot);
    ViIsIrpCallDriverDataInitialized = 1;
  }
  LOBYTE(v0) = 27;
  VfMajorRegisterHandlers(
    v0,
    (unsigned int)VfPnpDumpIrpStack,
    (unsigned int)VfPnpVerifyNewRequest,
    (unsigned int)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  LOBYTE(v2) = 22;
  VfMajorRegisterHandlers(
    v2,
    (unsigned int)VfPowerDumpIrpStack,
    (unsigned int)VfPowerVerifyNewRequest,
    (unsigned int)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  LOBYTE(v3) = 23;
  VfMajorRegisterHandlers(
    v3,
    (unsigned int)VfWmiDumpIrpStack,
    (unsigned int)VfWmiVerifyNewRequest,
    (unsigned int)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  qword_140FF4080 = 0LL;
  qword_140FF4070 = (__int64)ViGenericVerifyIrpStackDownward;
  qword_140FF4068 = (__int64)ViSpIoAllocateIrp_Exit;
  qword_140FF4078 = (__int64)ViGenericVerifyIrpStackUpward;
  qword_140FF4060 = (__int64)ViGenericDumpIrpStack;
  qword_140FF4090 = (__int64)ViGenericIsValidIrpStatus;
  qword_140FF4098 = (__int64)ViGenericIsNewRequest;
  qword_140FF40A0 = (__int64)ViGenericVerifyNewIrp;
  qword_140FF40A8 = (__int64)ViSpIoAllocateIrp_Exit;
  qword_140FF40B8 = (__int64)ViGenericBuildIrpLogEntry;
  qword_140FF4088 = 0LL;
  qword_140FF40B0 = 0LL;
  if ( !ViRemLockInitialized )
  {
    if ( (int)VfAvlInitializeTree(&ViRemLockAvl) < 0 )
      _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    else
      _InterlockedExchange(&ViRemLockInitialized, 1);
  }
  if ( !ViDevObjInitialized )
  {
    if ( (int)VfAvlInitializeTree(&ViDevObjAvl) < 0 )
      _InterlockedExchange(&ViDevObjAllocationFailures, 1);
    else
      _InterlockedExchange(&ViDevObjInitialized, 1);
  }
  if ( !ViIoCallbacksInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIoCallbackStateLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      8,
      1330202198,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  }
  IovUtilVerifierEnabled = 1;
  IoVerifierInit(MmVerifierData);
  ExSetPoolFlags(0x10uLL);
}
