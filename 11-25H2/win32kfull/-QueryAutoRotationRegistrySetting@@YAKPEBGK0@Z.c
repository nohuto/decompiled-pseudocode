/*
 * XREFs of ?QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z @ 0x140272BA8
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x140273480 (-xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryAutoRotationRegistrySetting(PCWSTR SourceString, unsigned int a2, const unsigned __int16 *a3)
{
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v12; // [rsp+94h] [rbp+3Bh]
  unsigned int v13; // [rsp+9Ch] [rbp+43h]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, SourceString);
    ResultLength = 20;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v12 == 4 )
    {
      a2 = v13;
    }
    ZwClose(KeyHandle);
  }
  return a2;
}
