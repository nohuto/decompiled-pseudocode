/*
 * XREFs of PnpRemoveDeviceActionRequestFromQueue @ 0x1405DB7F8
 * Callers:
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B03630 (PnpDeleteDeviceActionRequest.c)
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
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F12D00);
    v8 = dword_140F12D08-- == 1;
    v9 = v7;
    if ( v8 )
      PopDirectedDripsClearDisengageReason(4);
    KeReleaseSpinLock(&qword_140F12D00, v9);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink);
    if ( !--LODWORD(PopDirectedDripsUmLock.Queue) && PopDirectedDripsUmLock.WaitBlockFill5[40] )
    {
      PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink
                                                                                     + MEMORY[0xFFFFF78000000008]
                                                                                     - (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Blink);
      *(_OWORD *)&PopDirectedDripsUmLock.WaitBlockFill11[48] = (unsigned __int64)PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink;
    }
    --*((_DWORD *)&PopDirectedDripsUmLock.Teb + v6);
    KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink, v10);
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
