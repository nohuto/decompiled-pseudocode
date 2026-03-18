/*
 * XREFs of EtwpInitializeSecurity @ 0x140CE1AF8
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140920E70 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 */

__int64 EtwpInitializeSecurity()
{
  unsigned int PersistedStateLocation; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v4; // [rsp+80h] [rbp-80h] BYREF
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
  if ( ZwOpenKey((PHANDLE)&ExpSysDbgLock.SchedulerAssistPriorityFloor, 0x20019u, &ObjectAttributes) < 0 )
    *(_QWORD *)&ExpSysDbgLock.SchedulerAssistPriorityFloor = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"ETWSecurityPath",
                             0LL,
                             0LL,
                             0,
                             SourceString,
                             0x1FEu,
                             (unsigned int *)&v4);
  if ( PersistedStateLocation
    || (RtlInitUnicodeString(&DestinationString, SourceString),
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        (PersistedStateLocation = ZwOpenKey(
                                    (PHANDLE)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink,
                                    0x20019u,
                                    &ObjectAttributes)) != 0) )
  {
    if ( !*(_QWORD *)&ExpSysDbgLock.SchedulerAssistPriorityFloor )
      return PersistedStateLocation;
    ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList = 0LL;
    PersistedStateLocation = 0;
  }
  RtlInitUnicodeString(&v5, L"0811c1af-7a07-4a06-82ed-869455cdf713");
  EtwpGetGuidSecurityDescriptor(&v5, &EtwpDefaultTraceSecurityDescriptor);
  if ( !EtwpDefaultTraceSecurityDescriptor )
    EtwpDefaultTraceSecurityDescriptor = (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd;
  return PersistedStateLocation;
}
