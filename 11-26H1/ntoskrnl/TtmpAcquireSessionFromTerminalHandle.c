/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1407ED7E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407ED894 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1407ED9E4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407EDAC8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407EDCE0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407EDDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407EDE54 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1407EDF10 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1407EDFD0 (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  struct _KTHREAD *CurrentThread; // r9
  struct _OBJECT_TYPE *Flink; // r8
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx

  v5 = a5;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Flink = (struct _OBJECT_TYPE *)PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Flink;
  *v5 = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  a5 = 0LL;
  v11 = ObReferenceObjectByHandle(a1, 2u, Flink, (KPROCESSOR_MODE)CurrentThread, (PVOID *)&a5, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    *v5 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 1006LL, (unsigned int)v11, (unsigned int)v11);
    v13 = v12;
    v14 = 86LL;
LABEL_3:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", v14, v13, v12);
    return v12;
  }
  v16 = (__int64)a5;
  *v5 = a5;
  if ( *(_DWORD *)(v16 + 28) )
  {
    if ( !a3 )
    {
      v13 = 0xFFFFFFFFLL;
      v12 = -1073741788;
      v14 = 96LL;
      goto LABEL_3;
    }
  }
  else if ( !a2 )
  {
    v13 = 0xFFFFFFFFLL;
    v12 = -1073741788;
    v14 = 91LL;
    goto LABEL_3;
  }
  TtmpAcquireSessionLock();
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_DWORD *)(v17 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
    v13 = 0xFFFFFFFFLL;
    v12 = -1073740715;
    v14 = 103LL;
    goto LABEL_3;
  }
  *a4 = v17;
  return 0LL;
}
