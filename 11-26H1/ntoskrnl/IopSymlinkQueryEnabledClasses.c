/*
 * XREFs of IopSymlinkQueryEnabledClasses @ 0x140B5EE78
 * Callers:
 *     IopSymlinkRegistryCallback @ 0x14079A640 (IopSymlinkRegistryCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

__int64 __fastcall IopSymlinkQueryEnabledClasses(PCWSTR SourceString)
{
  __int32 v1; // ebx
  NTSTATUS ValueKey; // esi
  unsigned __int16 v3; // di
  ULONG ResultLength[2]; // [rsp+38h] [rbp-99h] BYREF
  HANDLE DestinationString[3]; // [rsp+40h] [rbp-91h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  UNICODE_STRING v8; // [rsp+88h] [rbp-49h] BYREF
  _DWORD v9[2]; // [rsp+98h] [rbp-39h]
  UNICODE_STRING v10; // [rsp+A0h] [rbp-31h] BYREF
  int v11; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING v12; // [rsp+B8h] [rbp-19h] BYREF
  int v13; // [rsp+C8h] [rbp-9h]
  UNICODE_STRING v14; // [rsp+D0h] [rbp-1h] BYREF
  int v15; // [rsp+E0h] [rbp+Fh]
  _BYTE KeyValueInformation[12]; // [rsp+E8h] [rbp+17h] BYREF
  int v17; // [rsp+F4h] [rbp+23h]

  memset(DestinationString, 0, sizeof(DestinationString));
  ResultLength[0] = 0;
  v1 = 0;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ValueKey = ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes);
  if ( ValueKey >= 0 )
  {
    RtlInitUnicodeString(&v8, L"SymlinkLocalToLocalEvaluation");
    v9[0] = 1;
    RtlInitUnicodeString(&v10, L"SymlinkLocalToRemoteEvaluation");
    v11 = 2;
    RtlInitUnicodeString(&v12, L"SymlinkRemoteToRemoteEvaluation");
    v13 = 8;
    RtlInitUnicodeString(&v14, L"SymlinkRemoteToLocalEvaluation");
    v3 = 0;
    v15 = 4;
    while ( v3 < 4u )
    {
      ValueKey = ZwQueryValueKey(
                   DestinationString[0],
                   (UNICODE_STRING *)((char *)&v8 + 24 * v3),
                   KeyValuePartialInformation,
                   KeyValueInformation,
                   0x14u,
                   ResultLength);
      if ( ValueKey < 0 )
        goto LABEL_9;
      if ( v17 )
        v1 += v9[6 * v3];
      ++v3;
    }
    _InterlockedExchange(&IopSymlinkEnabledTypes, v1);
  }
LABEL_9:
  if ( DestinationString[0] )
    ZwClose(DestinationString[0]);
  return (unsigned int)ValueKey;
}
