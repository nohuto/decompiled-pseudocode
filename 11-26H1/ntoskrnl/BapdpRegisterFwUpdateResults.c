/*
 * XREFs of BapdpRegisterFwUpdateResults @ 0x140CE984C
 * Callers:
 *     BapdpProcessFwUpdateResults @ 0x140CE8B6C (BapdpProcessFwUpdateResults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlStringFromGUID @ 0x1409F98E0 (RtlStringFromGUID.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

void __fastcall BapdpRegisterFwUpdateResults(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // r14d
  const GUID *v4; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG Disposition; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  GuidString = 0LL;
  DestinationString = 0LL;
  if ( a1 && a2 && *a1 && a2 >= (unsigned __int64)(24LL * *a1 + 8) )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\FirmwareResources");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = 0;
      v4 = (const GUID *)(a1 + 1);
      if ( *a1 )
      {
        while ( RtlStringFromGUID(v4, &GuidString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, GuidString.Buffer);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v5 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
          RtlFreeAnsiString(&GuidString);
          if ( v5 < 0 )
            break;
          RtlInitUnicodeString(&DestinationString, L"LastAttemptVersion");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, (PVOID)&v4[1], 4u);
          RtlInitUnicodeString(&DestinationString, L"LastAttemptStatus");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v4[1].Data2, 4u);
          ZwClose(Handle);
          ++v3;
          v6 = 0LL;
          v4 = (const GUID *)((char *)v4 + 24);
          Handle = 0LL;
          if ( (unsigned __int64)v3 >= *a1 )
            goto LABEL_12;
        }
      }
    }
    v6 = Handle;
LABEL_12:
    if ( v6 )
      ZwClose(v6);
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
}
