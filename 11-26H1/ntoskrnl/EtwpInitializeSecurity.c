/*
 * XREFs of EtwpInitializeSecurity @ 0x140CE7E98
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1408FC980 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 */

__int64 EtwpInitializeSecurity()
{
  unsigned int PersistedStateLocation; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  ULONG BufferLengthOut; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v5; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\Security");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey((PHANDLE)&ExpSysDbgLock.WpsFeedback, 0x20019u, &ObjectAttributes) < 0 )
    ExpSysDbgLock.WpsFeedback = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"ETWSecurityPath",
                             0LL,
                             0LL,
                             LocationTypeRegistry,
                             SourceString,
                             0x1FEu,
                             &BufferLengthOut);
  if ( PersistedStateLocation
    || (RtlInitUnicodeString(&DestinationString, SourceString),
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        (PersistedStateLocation = ZwOpenKey((PHANDLE)ExpSysDbgLock.Spare35, 0x20019u, &ObjectAttributes)) != 0) )
  {
    if ( !ExpSysDbgLock.WpsFeedback )
      return PersistedStateLocation;
    ExpSysDbgLock.Spare35[0] = 0LL;
    PersistedStateLocation = 0;
  }
  RtlInitUnicodeString(&v5, L"0811c1af-7a07-4a06-82ed-869455cdf713");
  EtwpGetGuidSecurityDescriptor(&v5, &EtwpDefaultTraceSecurityDescriptor);
  if ( !EtwpDefaultTraceSecurityDescriptor )
    EtwpDefaultTraceSecurityDescriptor = (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd;
  return PersistedStateLocation;
}
