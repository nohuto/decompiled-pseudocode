/*
 * XREFs of ExpGetLeapSecondDataRegistryKeyHandle @ 0x140835BD4
 * Callers:
 *     ExSetLeapSecondEnabled @ 0x140835A80 (ExSetLeapSecondEnabled.c)
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 * Callees:
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpGetLeapSecondDataRegistryKeyHandle(HANDLE *a1)
{
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ExpLeapSecondRegkeyPath;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
    *a1 = KeyHandle;
  return result;
}
