/*
 * XREFs of ExpAcquirePrmInterface @ 0x140844FF0
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x140845120 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x140845210 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     ExpQueryPrmInterface @ 0x140845358 (ExpQueryPrmInterface.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
      ExSaPageGroupDescriptorArrayLock.OtherOperationCount = ExAllocatePool2(0x40uLL);
      if ( !ExSaPageGroupDescriptorArrayLock.OtherOperationCount )
      {
        PrmInterface = -1073741670;
        goto LABEL_8;
      }
      LOWORD(ExSaPageGroupDescriptorArrayLock.WriteOperationCount) = 0;
      WORD1(ExSaPageGroupDescriptorArrayLock.WriteOperationCount) = v9;
      RtlUnicodeStringCopy((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount, SourceString);
    }
    PrmInterface = IoRegisterPlugPlayNotification(
                     EventCategoryTargetDeviceChange,
                     0,
                     v7,
                     (PDRIVER_OBJECT)ExSaPageGroupDescriptorArrayLock.ReadTransferCount,
                     ExpPrmTargetDeviceChangeCallback,
                     0LL,
                     (PVOID *)ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts);
    if ( PrmInterface >= 0 )
      PrmInterface = ExpQueryPrmInterface(v7[1], a3);
  }
LABEL_8:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( PrmInterface < 0 && ExSaPageGroupDescriptorArrayLock.OtherOperationCount )
    RtlFreeAnsiString((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  return (unsigned int)PrmInterface;
}
