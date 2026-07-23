/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140D0B1AC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmCallDllInitialize @ 0x14087B8BC (MmCallDllInitialize.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140C8617C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     KeInitAmd64SpecificState @ 0x140C86204 (KeInitAmd64SpecificState.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140D0B4C4 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D0B5E4 (PipInitializeDriverDependentDLLs.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(__int64 a1)
{
  struct _KTHREAD *Lock; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF

  memset_0(&v8, 0, 0x68uLL);
  Lock = MmAcquireLoadLock();
  v3 = *(_QWORD **)(a1 + 16);
  while ( v3 != (_QWORD *)(a1 + 16) )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    if ( (v4[13] & 0x4000000) != 0 && (*((_DWORD *)v4 + 71) & 1) != 0 )
    {
      DataTableEntryByAddress = MmFindDataTableEntryByAddress(v4[6]);
      MmCallDllInitialize((__int64)DataTableEntryByAddress);
    }
  }
  MmReleaseLoadLock(Lock);
  PipInitializeCoreDriversByGroup(0LL, a1);
  LOBYTE(PsAltSystemCallRegistrationLock.Header.WaitListHead.Blink) = 1;
  SshpBlockerCollections.SchedulerSharedSystemSlot = off_140E00638;
  SshpBlockerCollections.PropagateBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)8;
  KeInitAmd64SpecificState();
  if ( KeHotpatchTestMode )
    KeCheckedKernelInitialize();
  PsAltSystemCallRegistrationLock.Header.WaitListHead.Flink = 0LL;
  memset_0(&SshpBlockerCollections.SuspendEvent.Header.WaitListHead.Blink, 0, 0x130uLL);
  *(_OWORD *)&SshpBlockerCollections.KernelShadowStackLimit.AllFields = 0LL;
  VslRegisterBootDrivers();
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitComputerIds(a1);
  PipInitializeEarlyLaunchDrivers(a1);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0);
  PipInitializeDriverDependentDLLs(1LL, a1, v6);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
