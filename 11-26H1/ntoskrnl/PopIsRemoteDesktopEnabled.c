/*
 * XREFs of PopIsRemoteDesktopEnabled @ 0x140B4706C
 * Callers:
 *     PopDiagTraceCsResiliencyEnter @ 0x140516910 (PopDiagTraceCsResiliencyEnter.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B46EB0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

char PopIsRemoteDesktopEnabled()
{
  char v0; // bl
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING v4; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+A0h] [rbp+47h]

  v8 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0LL;
  ResultLength = 0;
  v0 = 0;
  KeyValueInformation = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"fDenyTSConnections");
  RtlInitUnicodeString(&v4, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v4;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && (*(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation)) )
  {
    v0 = 1;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
