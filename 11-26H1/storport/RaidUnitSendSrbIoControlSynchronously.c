/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x140007B84 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1400088DC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1400A0F8C (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1400A3DB4 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1400A4B80 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1400A5024 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1400A5538 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1400A5B3C (RaUnitStreamsIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x14018BB30 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000878C (PortSrbTranslateSrbToNtStatus.c)
 *     StorProbeAndLockPages @ 0x140008824 (StorProbeAndLockPages.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  char *v7; // rbp
  _DWORD *v8; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // ebx
  char *Pool2; // rdi
  char *v14; // r11
  int v15; // eax
  PVOID *v16; // r12
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v19; // rax
  int v20; // ecx
  ULONG v21; // edx
  PMDL Mdl; // rax
  __int64 v23; // rdx
  struct _DEVICE_OBJECT *v24; // rbx
  _IO_STACK_LOCATION *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  int Status; // ebx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  _DWORD *v33; // r10
  unsigned int LockArray_high; // eax
  __int64 v35; // rdx
  _BYTE *v36; // [rsp+30h] [rbp-78h]
  __int128 v37; // [rsp+38h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-60h] BYREF
  int *v39; // [rsp+B0h] [rbp+8h]

  v7 = 0LL;
  v37 = 0LL;
  v8 = *(_DWORD **)(a1 + 24);
  if ( *v8 == 1314275652 )
  {
    v10 = (__int64)v8 + 274;
  }
  else
  {
    v10 = (__int64)v8 + 482;
    if ( *v8 != 1094997074 )
      v10 = 98LL;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 2;
  if ( *(_BYTE *)v10 != 1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !Pool2 && v11 )
      RaidLogAllocationFailure(v11, 64, 88, 1918067026, 0x80000000);
    goto LABEL_6;
  }
  v30 = ExAllocatePool2(64LL, 144LL, 1918067026LL);
  Pool2 = (char *)v30;
  if ( !v30 )
  {
    if ( v11 )
    {
      RaidLogAllocationFailure(v11, 64, 144, 1918067026, 0x80000000);
      return (unsigned int)-1073741801;
    }
LABEL_6:
    v14 = Pool2;
    if ( Pool2 )
      goto LABEL_7;
    return (unsigned int)-1073741801;
  }
  *(_WORD *)v30 = 8;
  *(_BYTE *)(v30 + 2) = 40;
  v14 = (char *)v30;
  *(_DWORD *)(v30 + 8) = 1397899864;
  *(_DWORD *)(v30 + 12) = 1;
  *(_DWORD *)(v30 + 16) = 144;
  *(_DWORD *)(v30 + 20) = 2;
  *(_WORD *)(v30 + 36) = 2;
  *(_QWORD *)(v30 + 52) = 128LL;
  *(_WORD *)(v30 + 128) = 1;
  *(_DWORD *)(v30 + 132) = 4;
LABEL_7:
  v15 = a7;
  if ( !a6 )
  {
    v15 = a7 | 0x102;
    if ( Pool2[2] == 40 )
      *((_WORD *)Pool2 + 19) = 32;
    else
      Pool2[9] = 32;
  }
  if ( *(_BYTE *)v10 != 1 )
  {
    *(_WORD *)Pool2 = 88;
    Pool2[2] = 2;
    *((_DWORD *)Pool2 + 3) = v15;
    v16 = (PVOID *)(Pool2 + 64);
    *((_QWORD *)Pool2 + 3) = a3;
    *((_DWORD *)Pool2 + 4) = a4;
    *((_QWORD *)Pool2 + 6) = a2;
    Pool2[8] = -1;
    *((_DWORD *)Pool2 + 5) = *(_DWORD *)(a1 + 1392);
    Pool2[5] = *(_BYTE *)(a1 + 104);
    Pool2[6] = *(_BYTE *)(a1 + 105);
    Pool2[7] = *(_BYTE *)(a1 + 106);
    v36 = Pool2 + 2;
    v39 = (int *)(Pool2 + 12);
    goto LABEL_12;
  }
  v31 = *((unsigned int *)Pool2 + 13);
  v7 = Pool2;
  *((_DWORD *)Pool2 + 5) = 2;
  *((_DWORD *)Pool2 + 6) = v15;
  v32 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)v32 != 1094997074 )
  {
    v33 = v14 + 32;
    goto LABEL_61;
  }
  v33 = Pool2 + 32;
  if ( (*(_BYTE *)(v32 + 111) & 4) == 0 )
  {
LABEL_61:
    LODWORD(v35) = -1;
    goto LABEL_62;
  }
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(v32 + 6232) + 8LL * LockArray_high), 1u);
  v35 = **(_QWORD **)(*(_QWORD *)(v32 + 6232) + 8LL * LockArray_high);
  *((_DWORD *)Pool2 + 11) = HIDWORD(v35);
LABEL_62:
  *v33 = v35;
  v16 = (PVOID *)(Pool2 + 64);
  *((_QWORD *)Pool2 + 8) = a3;
  *((_DWORD *)Pool2 + 15) = a4;
  *((_QWORD *)Pool2 + 10) = a2;
  *((_DWORD *)Pool2 + 10) = *(_DWORD *)(a1 + 1392);
  Pool2[v31 + 8] = *(_BYTE *)(a1 + 104);
  Pool2[v31 + 9] = *(_BYTE *)(a1 + 105);
  Pool2[v31 + 10] = *(_BYTE *)(a1 + 106);
  v39 = (int *)(Pool2 + 12);
  v36 = v14 + 2;
LABEL_12:
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 8) + 76LL), 0);
  if ( !Irp )
    goto LABEL_41;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
  if ( *v36 == 40 )
    v39 = (int *)(Pool2 + 24);
  else
    v16 = (PVOID *)(Pool2 + 24);
  v19 = 60LL;
  v20 = *v39;
  if ( *v36 != 40 )
    v19 = 16LL;
  v21 = *(_DWORD *)&Pool2[v19];
  if ( (v20 & 0xC0) != 0xC0 )
  {
    if ( (v20 & 0x40) != 0 )
      v12 = 1;
    else
      v12 = ((v20 & 0x80u) != 0) - 1;
  }
  if ( v21 )
  {
    Mdl = IoAllocateMdl(*v16, v21, 0, 0, 0LL);
    Irp->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)StorProbeAndLockPages(Mdl, v23, v12) >= 0 )
        goto LABEL_23;
      IoFreeMdl(Irp->MdlAddress);
      Irp->MdlAddress = 0LL;
    }
    IoFreeIrp(Irp);
LABEL_41:
    Status = -1073741801;
    goto LABEL_32;
  }
LABEL_23:
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
  Irp->UserIosb = (_IO_STATUS_BLOCK *)&v37;
  Irp->UserEvent = 0LL;
  if ( *(_BYTE *)v10 == 1 )
  {
    v7 = Pool2;
    *((_QWORD *)Pool2 + 10) = Irp;
  }
  else
  {
    *((_QWORD *)Pool2 + 6) = Irp;
  }
  v24 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v25 = Irp->Tail.Overlay.CurrentStackLocation;
  v25[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  v25[-1].Context = &Event;
  v25[-1].Control = -32;
  v26 = IofCallDriver(v24, Irp);
  Status = v26;
  if ( v26 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_27:
    Status = Irp->IoStatus.Status;
    if ( Status >= 0 )
    {
      if ( !a5 || (Status = a5(*(unsigned int *)(a3 + 20)), Status >= 0) )
      {
        LOBYTE(v27) = Pool2[3];
        Status = PortSrbTranslateSrbToNtStatus(v27);
      }
    }
    goto LABEL_31;
  }
  if ( v26 >= 0 )
    goto LABEL_27;
LABEL_31:
  StorFreeSynchronousScsiRequest(Irp);
LABEL_32:
  if ( *(_BYTE *)v10 == 1 )
  {
    if ( !v7 )
      v7 = Pool2;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 13) = 0LL;
  }
  else
  {
    *((_QWORD *)Pool2 + 6) = 0LL;
    *((_QWORD *)Pool2 + 7) = 0LL;
  }
  ExFreePoolWithTag(Pool2, 0x72536152u);
  return (unsigned int)Status;
}
