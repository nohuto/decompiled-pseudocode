/*
 * XREFs of RawMountVolume @ 0x14091B1FC
 * Callers:
 *     RawFileSystemControl @ 0x14091AB10 (RawFileSystemControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14049DEB0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RawCleanupVcb @ 0x140919A0C (RawCleanupVcb.c)
 *     IoCreateStreamFileObjectLite @ 0x14091AB80 (IoCreateStreamFileObjectLite.c)
 *     RawInitializeVcb @ 0x14091AF1C (RawInitializeVcb.c)
 *     RawScanDeletedList @ 0x14091B194 (RawScanDeletedList.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 */

NTSTATUS __fastcall RawMountVolume(__int64 *a1)
{
  __int64 v2; // r15
  NTSTATUS result; // eax
  ULONG v4; // eax
  PDEVICE_OBJECT v5; // rbx
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r15
  struct _DEVICE_OBJECT *CurrentIrp; // r14
  _DISPATCHER_HEADER *p_Blink; // rbx
  _DISPATCHER_HEADER *volatile Queue; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v12; // [rsp+48h] [rbp-70h]
  PDEVICE_OBJECT v13; // [rsp+50h] [rbp-68h]
  int NotificationStructure; // [rsp+58h] [rbp-60h] BYREF
  GUID v15; // [rsp+5Ch] [rbp-5Ch]
  int v16; // [rsp+6Ch] [rbp-4Ch]
  __int64 v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+7Ch] [rbp-3Ch]
  int v20; // [rsp+84h] [rbp-34h]
  int v21; // [rsp+88h] [rbp-30h]
  int v22; // [rsp+8Ch] [rbp-2Ch]
  wchar_t v23; // [rsp+90h] [rbp-28h]
  int v24; // [rsp+92h] [rbp-26h]

  DeviceObject = 0LL;
  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8), 0x160u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = *(_DWORD *)(v2 + 152);
    v5 = DeviceObject;
    if ( v4 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v4;
    v5->SectorSize = *(_WORD *)(v2 + 304);
    v5->Flags |= 0x10u;
    v13 = v5 + 1;
    v6 = RawInitializeVcb(&v5[1].Type, a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v5[1]);
      IoDeleteDevice(v5);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&v5[1].Dpc.TargetInfoAsUlong + 8LL) = v5;
      *(_DWORD *)(*(_QWORD *)&v5[1].Dpc.TargetInfoAsUlong + 24LL) = -1;
      *(_WORD *)(*(_QWORD *)&v5[1].Dpc.TargetInfoAsUlong + 6LL) = 0;
      v5->Flags &= ~0x80u;
      v5->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v12 = 0LL;
      v15 = 0LL;
      v16 = 0;
      v24 = 0;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v5);
      v12 = StreamFileObjectLite;
      *(&v5[1].Queue.Wcb.NumberOfMapRegisters + 1) += 2;
      LODWORD(v5[1].Queue.Wcb.DeviceObject) += 2;
      NotificationStructure = 4063233;
      v17 = 0LL;
      v18 = -1;
      v19 = 1LL;
      v20 = 6;
      v21 = 16;
      v22 = *(_DWORD *)L"RAW";
      v23 = aRaw[2];
      CurrentIrp = 0LL;
      DeviceObject = 0LL;
      if ( (int)PnpGetRelatedTargetDevice(StreamFileObjectLite, &DeviceObject) >= 0 )
      {
        if ( DeviceObject )
          CurrentIrp = (struct _DEVICE_OBJECT *)DeviceObject->CurrentIrp;
        v15 = GUID_IO_VOLUME_MOUNT;
        IoReportTargetDeviceChangeAsynchronous(CurrentIrp, &NotificationStructure, 0LL, 0LL);
        ObfDereferenceObject(CurrentIrp);
      }
      ObfDereferenceObject(StreamFileObjectLite);
      *(&v5[1].Queue.Wcb.NumberOfMapRegisters + 1) -= 2;
      LODWORD(v5[1].Queue.Wcb.DeviceObject) -= 2;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
      p_Blink = (_DISPATCHER_HEADER *)&v5[1].DeviceQueue.DeviceListHead.Blink;
      Queue = NormalizationListLock.Queue;
      if ( (_DISPATCHER_HEADER *volatile *)NormalizationListLock.Queue->WaitListHead.Flink != &NormalizationListLock.Queue )
        __fastfail(3u);
      *(_QWORD *)&p_Blink->Lock = NormalizationListLock.Queue;
      p_Blink->WaitListHead.Flink = (struct _LIST_ENTRY *)&NormalizationListLock.Queue;
      Queue->WaitListHead.Flink = (struct _LIST_ENTRY *)p_Blink;
      NormalizationListLock.Queue = p_Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
    }
    return v6;
  }
  return result;
}
