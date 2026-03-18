/*
 * XREFs of ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140B66BE8
 * Callers:
 *     ExpWnfEnumeratePermanentDataStoreHandles @ 0x140847398 (ExpWnfEnumeratePermanentDataStoreHandles.c)
 *     ExpWnfGetPermanentDataStore @ 0x140B32E7C (ExpWnfGetPermanentDataStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14094D70C (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFA6BC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentDataStoreHandleByScopeId(
        int a1,
        int a2,
        unsigned __int8 *a3,
        __int64 a4,
        int a5,
        int a6,
        HANDLE *KeyHandle)
{
  int v7; // ebx
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  void *v10; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF

  v7 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v10 = 0LL;
  if ( a5 )
    return a6 != 0 ? -1073741822 : -1073741772;
  if ( (a1 & 0xFFFFFFFB) != 0 )
  {
    if ( a1 == 2 && !a2 )
      return ExpWnfGetPermanentPerUserDataStoreHandle(a3, KeyHandle);
    return a6 != 0 ? -1073741822 : -1073741772;
  }
  result = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&v10);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Data");
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v9 < 0 )
      return v9;
    return v7;
  }
  return result;
}
