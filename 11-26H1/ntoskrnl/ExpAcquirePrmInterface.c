/*
 * XREFs of ExpAcquirePrmInterface @ 0x14083EDB0
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x14083EEE0 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x14083EFD0 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x14043D5D0 (RtlUnicodeStringCopy.c)
 *     ExpQueryPrmInterface @ 0x14083F118 (ExpQueryPrmInterface.c)
 *     IoGetDeviceObjectPointer @ 0x140908800 (IoGetDeviceObjectPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAcquirePrmInterface(UNICODE_STRING *SourceString, char a2, void *a3)
{
  NTSTATUS DeviceObjectPointer; // eax
  PDEVICE_OBJECT *v7; // rdi
  NTSTATUS PrmInterface; // ebx
  __int16 v9; // bx
  PDEVICE_OBJECT v11; // [rsp+40h] [rbp-28h] BYREF
  PVOID EventCategoryData; // [rsp+88h] [rbp+20h] BYREF

  EventCategoryData = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(SourceString, 0x1F0000u, (PFILE_OBJECT *)&EventCategoryData, &v11);
  v7 = (PDEVICE_OBJECT *)EventCategoryData;
  PrmInterface = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    if ( a2 )
    {
      v9 = SourceString->Length + 2;
      *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ForegroundLossTime = ExAllocatePool2(0x40uLL);
      if ( !*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ForegroundLossTime )
      {
        PrmInterface = -1073741670;
        goto LABEL_8;
      }
      LOWORD(ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount) = 0;
      HIWORD(ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount) = v9;
      RtlUnicodeStringCopy((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount, SourceString);
    }
    PrmInterface = IoRegisterPlugPlayNotification(
                     EventCategoryTargetDeviceChange,
                     0,
                     v7,
                     (PDRIVER_OBJECT)ExSaPageGroupDescriptorArrayLock.GlobalForegroundListEntry.Flink,
                     ExpPrmTargetDeviceChangeCallback,
                     0LL,
                     (PVOID *)&ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink);
    if ( PrmInterface >= 0 )
      PrmInterface = ExpQueryPrmInterface(v7[1], a3);
  }
LABEL_8:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( PrmInterface < 0 && *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ForegroundLossTime )
    RtlFreeAnsiString((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount);
  return (unsigned int)PrmInterface;
}
