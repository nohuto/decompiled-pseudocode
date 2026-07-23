/*
 * XREFs of RawInitialize @ 0x140CDFDC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IoRegisterFileSystem @ 0x140799160 (IoRegisterFileSystem.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     IoRegisterShutdownNotification @ 0x140B4CC50 (IoRegisterShutdownNotification.c)
 */

NTSTATUS __fastcall RawInitialize(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(DriverObject, 0, &DestinationString, 8u, 0, 0, (PDEVICE_OBJECT *)&NormalizationListLock.320);
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
           (PDEVICE_OBJECT *)&NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
    if ( v3 < 0 )
    {
LABEL_3:
      IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Flink);
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
           (PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
    if ( v3 < 0 )
    {
LABEL_5:
      IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
      goto LABEL_3;
    }
    v3 = IoRegisterShutdownNotification(*(PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
    if ( v3 < 0 )
    {
      IoDeleteDevice(*(PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
      goto LABEL_5;
    }
    LODWORD(NormalizationListLock.WaitBlock[0].WaitListEntry.Flink[3].Flink) |= 0x10u;
    LODWORD(NormalizationListLock.WaitBlock[0].WaitListEntry.Blink[3].Flink) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)&NormalizationListLock.WaitBlockFill11[16] + 48LL) |= 0x10u;
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
    IoRegisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Flink);
    IoRegisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
    IoRegisterFileSystem(*(PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
    ObfReferenceObjectWithTag(NormalizationListLock.WaitBlock[0].WaitListEntry.Flink, 0x746C6644u);
    ObfReferenceObjectWithTag(NormalizationListLock.WaitBlock[0].WaitListEntry.Blink, 0x746C6644u);
    ObfReferenceObjectWithTag(*(PVOID *)&NormalizationListLock.WaitBlockFill11[16], 0x746C6644u);
    LODWORD(NormalizationListLock.Timer.Header.WaitListHead.Flink) = 1;
    NormalizationListLock.Teb = (void *)&NormalizationListLock.Queue;
    NormalizationListLock.Queue = (_DISPATCHER_HEADER *volatile)&NormalizationListLock.Queue;
    *(_QWORD *)&NormalizationListLock.Timer.Header.Lock = &NormalizationListLock.RelativeTimerBias;
    NormalizationListLock.RelativeTimerBias = (unsigned __int64)&NormalizationListLock.RelativeTimerBias;
    NormalizationListLock.Timer.Dpc = (_KDPC *)&NormalizationListLock.Timer.TimerListEntry.Blink;
    NormalizationListLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&NormalizationListLock.Timer.TimerListEntry.Blink;
    result = 0;
    NormalizationListLock.Timer.Header.WaitListHead.Blink = 0LL;
    NormalizationListLock.Timer.DueTime.LowPart = 0;
    LOWORD(NormalizationListLock.Timer.TimerListEntry.Flink) = 1;
    BYTE2(NormalizationListLock.Timer.TimerListEntry.Flink) = 6;
    HIDWORD(NormalizationListLock.Timer.TimerListEntry.Flink) = 0;
  }
  return result;
}
