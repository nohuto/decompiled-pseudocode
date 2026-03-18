/*
 * XREFs of CmpOpenSystemDriverHiveContext @ 0x140D04CDC
 * Callers:
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpOpenSystemDriverHiveContext(PCUNICODE_STRING Source, __int64 a2)
{
  __int16 v4; // ax
  PVOID v5; // rdi
  int appended; // ebx
  __int64 v7; // r8
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  PVOID v12; // [rsp+B0h] [rbp+40h] BYREF

  v4 = Source->Length + 4;
  *(&Destination.MaximumLength + 2) = 0;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(*(_WORD *)&PspSiloMonitorLock.SavedApcStateFill[32] + v4);
  v5 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v12 = 0LL;
  KeyHandle = 0LL;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
  {
    appended = -1073741801;
    goto LABEL_11;
  }
  appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&PspSiloMonitorLock.SavedApcStateFill[32]);
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      if ( appended >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( appended >= 0 )
        {
          appended = CmObReferenceObjectByHandle(KeyHandle, 1u, v7, 0, &v12, 0LL);
          if ( appended < 0 )
          {
LABEL_10:
            v5 = v12;
            goto LABEL_11;
          }
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)(a2 + 16), Source->Buffer) )
          {
            appended = -1073741801;
            goto LABEL_10;
          }
          *(_QWORD *)(a2 + 32) = KeyHandle;
          *(_QWORD *)(a2 + 40) = v12;
          KeyHandle = 0LL;
        }
      }
    }
  }
LABEL_11:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}
