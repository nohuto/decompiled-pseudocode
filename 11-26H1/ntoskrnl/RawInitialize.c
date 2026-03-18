/*
 * XREFs of RawInitialize @ 0x140CD9A40
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IoRegisterFileSystem @ 0x140796630 (IoRegisterFileSystem.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     IoRegisterShutdownNotification @ 0x140B4AEC0 (IoRegisterShutdownNotification.c)
 */

NTSTATUS __fastcall RawInitialize(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(
             DriverObject,
             0,
             &DestinationString,
             8u,
             0,
             0,
             (PDEVICE_OBJECT *)&NormalizationListLock.Timer.Dpc);
  if ( result >= 0 )
  {
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)RawUnload;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawCdRom");
    v3 = IoCreateDevice(
           DriverObject,
           0,
           &DestinationString,
           3u,
           0,
           0,
           (PDEVICE_OBJECT *)&NormalizationListLock.Timer.Processor);
    if ( v3 < 0 )
    {
LABEL_3:
      IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.Timer.Dpc);
      return v3;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawTape");
    v3 = IoCreateDevice(
           DriverObject,
           0,
           &DestinationString,
           0x20u,
           0,
           0,
           (PDEVICE_OBJECT *)&NormalizationListLock.Timer.TimerListEntry.Blink);
    if ( v3 < 0 )
    {
LABEL_5:
      IoDeleteDevice(*(PDEVICE_OBJECT *)&NormalizationListLock.Timer.Processor);
      goto LABEL_3;
    }
    v3 = IoRegisterShutdownNotification((PDEVICE_OBJECT)NormalizationListLock.Timer.TimerListEntry.Blink);
    if ( v3 < 0 )
    {
      IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.Timer.TimerListEntry.Blink);
      goto LABEL_5;
    }
    LODWORD(NormalizationListLock.Timer.Dpc->SystemArgument2) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)&NormalizationListLock.Timer.Processor + 48LL) |= 0x10u;
    LODWORD(NormalizationListLock.Timer.TimerListEntry.Blink[3].Flink) |= 0x10u;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[13] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[10] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[6] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[5] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)RawDispatch;
    DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)RawShutdown;
    IoRegisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.Timer.Dpc);
    IoRegisterFileSystem(*(PDEVICE_OBJECT *)&NormalizationListLock.Timer.Processor);
    IoRegisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.Timer.TimerListEntry.Blink);
    ObfReferenceObjectWithTag(NormalizationListLock.Timer.Dpc, 0x746C6644u);
    ObfReferenceObjectWithTag(*(PVOID *)&NormalizationListLock.Timer.Processor, 0x746C6644u);
    ObfReferenceObjectWithTag(NormalizationListLock.Timer.TimerListEntry.Blink, 0x746C6644u);
    LODWORD(NormalizationListLock.WaitStatus) = 1;
    NormalizationListLock.Timer.Header.WaitListHead.Blink = &NormalizationListLock.Timer.Header.WaitListHead;
    NormalizationListLock.Timer.Header.WaitListHead.Flink = &NormalizationListLock.Timer.Header.WaitListHead;
    NormalizationListLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)&NormalizationListLock.Timer.DueTime;
    NormalizationListLock.Timer.DueTime.QuadPart = (unsigned __int64)&NormalizationListLock.Timer.DueTime;
    NormalizationListLock.Teb = (void *)&NormalizationListLock.Queue;
    NormalizationListLock.Queue = (_DISPATCHER_HEADER *volatile)&NormalizationListLock.Queue;
    result = 0;
    NormalizationListLock.WaitBlockList = 0LL;
    LODWORD(NormalizationListLock.WaitListEntry.Flink) = 0;
    *((_WORD *)&NormalizationListLock.SwapListEntry + 4) = 1;
    *((_BYTE *)&NormalizationListLock.SwapListEntry + 10) = 6;
    *((_DWORD *)&NormalizationListLock.SwapListEntry + 3) = 0;
  }
  return result;
}
