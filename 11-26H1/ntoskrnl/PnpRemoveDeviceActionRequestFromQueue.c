/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1405DE0A8
 * Callers:
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14047CCB8 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B05244 (PnpDeleteDeviceActionRequest.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequestFromQueue(_QWORD *P)
{
  unsigned __int8 v2; // di
  KIRQL v3; // si
  _QWORD *v4; // rdx
  PVOID *v5; // rcx
  __int64 v6; // r14
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // bp
  KIRQL v10; // al
  void *v11; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( !*((_BYTE *)P + 84) )
  {
    v4 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v2 = 1;
    v4[1] = v5;
    v6 = *((unsigned int *)P + 6);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2]);
    v8 = (*(_DWORD *)&stru_140F12EA0.WaitBlockFill11[104])-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2], v9);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
    if ( !--PopDirectedDripsDiagLock.CurrentRunTime && LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
    {
      PopDirectedDripsDiagLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsDiagLock.WaitListEntry.Flink
                                                                          + MEMORY[0xFFFFF78000000008]
                                                                          - (unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Blink);
      PopDirectedDripsDiagLock.216 = ($9F5D72EF54BCA79AE5AD03946D2C2FEF)(unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Flink;
    }
    --*((_DWORD *)&PopDirectedDripsDiagLock.KernelStack + v6);
    KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v10);
  }
  KeReleaseSpinLock(&PnpSpinLock, v3);
  if ( v2 )
  {
    v11 = (void *)P[2];
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    PnpDeleteDeviceActionRequest(P);
  }
  return v2;
}
