/*
 * XREFs of PopOpenPersistedRegistryKey @ 0x1407C8E0C
 * Callers:
 *     PopLidReliabilityInit @ 0x14060799C (PopLidReliabilityInit.c)
 *     PopSaveLidReliabilityState @ 0x1407D15B8 (PopSaveLidReliabilityState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenPersistedRegistryKey(__int64 a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(L"Power", SourceString, 520, (__int64)&v6);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( PersistedStateLocation >= 0 )
      *a2 = KeyHandle;
  }
  return (unsigned int)PersistedStateLocation;
}
