/*
 * XREFs of BapdpRegisterWmdResult @ 0x140CE9CC0
 * Callers:
 *     BapdpProcessWmdResults @ 0x140CE91D8 (BapdpProcessWmdResults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

void __fastcall BapdpRegisterWmdResult(ULONG *Data)
{
  NTSTATUS v2; // eax
  HANDLE v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+67h] BYREF
  int Dataa; // [rsp+A8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( Data )
  {
    Disposition = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    Handle = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MemoryDiagnostic");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v2 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      v3 = KeyHandle;
      if ( v2 >= 0 )
      {
        ZwClose(KeyHandle);
        RtlInitUnicodeString(&DestinationString, L"Results");
        if ( ZwSetValueKey(Handle, &DestinationString, 0, 3u, Data, Data[1]) >= 0 )
        {
          Dataa = 1;
          RtlInitUnicodeString(&DestinationString, L"RunMemDiag");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Dataa, 4u);
        }
        v3 = Handle;
      }
      ZwClose(v3);
    }
  }
}
