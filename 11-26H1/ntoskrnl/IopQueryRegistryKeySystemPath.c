/*
 * XREFs of IopQueryRegistryKeySystemPath @ 0x140A3ADA0
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x14072A6E0 (ZwOpenSymbolicLinkObject.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryRegistryKeySystemPath(HANDLE Handle, PUNICODE_STRING DestinationString)
{
  UNICODE_STRING *Pool2; // rsi
  NTSTATUS appended; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // di
  unsigned __int16 v8; // cx
  UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING v13; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  ULONG ReturnLength; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE LinkHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&String2.Length = 917516LL;
  *(_QWORD *)&SourceString.Length = 1703960LL;
  String2.Buffer = L"System";
  *(_QWORD *)&v13.Length = 2621478LL;
  SourceString.Buffer = (wchar_t *)L"\\SystemRoot\\";
  v13.Buffer = L"\\DriverStore\\Nodes\\";
  LinkHandle = 0LL;
  String1 = 0LL;
  ReturnLength = 0;
  DestinationStringa = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(DestinationString, 0LL);
  RtlInitUnicodeString(&DestinationStringa, 0LL);
  RtlInitUnicodeString(&String1, 0LL);
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    appended = NtQueryObject(Handle, ObjectNameInformation, Pool2, 0x1000u, &ReturnLength);
    if ( appended < 0 )
    {
LABEL_17:
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_18;
    }
    ReturnLength = *(unsigned __int16 *)&PspSiloMonitorLock.SchedulerApc.Type + 2;
    if ( Pool2->Length < (unsigned __int16)(*(_WORD *)&PspSiloMonitorLock.SchedulerApc.Type + 2)
      || !RtlPrefixUnicodeString((PCUNICODE_STRING)&PspSiloMonitorLock.648, Pool2, 1u)
      || (v6 = (unsigned __int64)&Pool2->Buffer[(unsigned __int64)ReturnLength >> 1], *(_WORD *)(v6 - 2) != 92) )
    {
      appended = -1073741595;
      goto LABEL_17;
    }
    v7 = 0;
    v8 = Pool2->Length - ReturnLength;
    String1.Buffer = &Pool2->Buffer[(unsigned __int64)ReturnLength >> 1];
    String1.MaximumLength = v8;
    String1.Length = 0;
    if ( v8 )
    {
      do
      {
        if ( *(_WORD *)(v6 + 2 * ((unsigned __int64)v7 >> 1)) == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v8 );
      String1.Length = v7;
    }
    if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      ReturnLength = v7 + 42;
      if ( ReturnLength > 0xFFFF )
      {
        appended = -2147483643;
        goto LABEL_17;
      }
      DestinationStringa.MaximumLength = v7 + 42;
      DestinationStringa.Length = 0;
      DestinationStringa.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !DestinationStringa.Buffer )
        goto LABEL_16;
      RtlCopyUnicodeString(&DestinationStringa, &v13);
      appended = RtlAppendUnicodeStringToString(&DestinationStringa, &String1);
      if ( appended < 0 )
        goto LABEL_17;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationStringa;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      if ( appended < 0 )
      {
        DestinationStringa.Length = 0;
      }
      else
      {
        ZwClose(LinkHandle);
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 92;
        DestinationStringa.Length += 2;
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 0;
      }
    }
    if ( !DestinationStringa.Length )
    {
      if ( DestinationStringa.MaximumLength < 0x1Au )
      {
        if ( DestinationStringa.Buffer )
          ExFreePoolWithTag(DestinationStringa.Buffer, 0);
        DestinationStringa.MaximumLength = 26;
        DestinationStringa.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !DestinationStringa.Buffer )
        {
LABEL_16:
          appended = -1073741670;
          goto LABEL_17;
        }
      }
      RtlCopyUnicodeString(&DestinationStringa, &SourceString);
    }
    *DestinationString = DestinationStringa;
    RtlInitUnicodeString(&DestinationStringa, 0LL);
    goto LABEL_17;
  }
  appended = -1073741670;
LABEL_18:
  if ( DestinationStringa.Buffer )
    ExFreePool(DestinationStringa.Buffer);
  return (unsigned int)appended;
}
