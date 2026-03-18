/*
 * XREFs of PopOpenThermalLoggingKey @ 0x1405007D4
 * Callers:
 *     PopThermalWriteShutdownToRegistry @ 0x140500640 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D1870 (PopThermalHandlePreviousShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenThermalLoggingKey(char a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  ULONG CreateOptions; // ebx
  const WCHAR *v5; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[528]; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( a1 )
  {
    CreateOptions = 1;
    v5 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power\\LastThermalEvent";
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(L"ThermalLogging", v11, 520, (__int64)&v8);
    if ( PersistedStateLocation < 0 )
      return (unsigned int)PersistedStateLocation;
    CreateOptions = 0;
    v5 = (const WCHAR *)v11;
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
  if ( PersistedStateLocation >= 0 )
    *a2 = KeyHandle;
  return (unsigned int)PersistedStateLocation;
}
