/*
 * XREFs of PopOpenThermalLoggingKey @ 0x1404F9FC4
 * Callers:
 *     PopThermalWriteShutdownToRegistry @ 0x1404F9E30 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D4910 (PopThermalHandlePreviousShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenThermalLoggingKey(char a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  ULONG v4; // ebx
  WCHAR *v5; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG BufferLengthOut; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR TargetPath[264]; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( a1 )
  {
    v4 = 1;
    v5 = (WCHAR *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power\\LastThermalEvent";
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ThermalLogging",
                               0LL,
                               L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Power",
                               LocationTypeRegistry,
                               TargetPath,
                               0x208u,
                               &BufferLengthOut);
    if ( PersistedStateLocation < 0 )
      return (unsigned int)PersistedStateLocation;
    v4 = 0;
    v5 = TargetPath;
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, v4, 0LL);
  if ( PersistedStateLocation >= 0 )
    *a2 = KeyHandle;
  return (unsigned int)PersistedStateLocation;
}
