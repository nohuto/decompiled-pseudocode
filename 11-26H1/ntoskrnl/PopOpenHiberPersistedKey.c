/*
 * XREFs of PopOpenHiberPersistedKey @ 0x140B6972C
 * Callers:
 *     PopQueryHiberPersistedRegValue @ 0x1407D37B8 (PopQueryHiberPersistedRegValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

NTSTATUS __fastcall PopOpenHiberPersistedKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, int *a3)
{
  const WCHAR *v6; // rdx
  NTSTATUS result; // eax
  int v8; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( KeyHandle && (v6 = PopHibernatePersistedRegLocation) != 0LL )
  {
    *KeyHandle = (HANDLE)-1LL;
    RtlInitUnicodeString(&DestinationString, v6);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( (DesiredAccess & 0x20006) == 0x20006 )
    {
      result = ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
      v8 = (result >> 31) & 8;
      if ( result >= 0 )
        return result;
    }
    else
    {
      result = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( result >= 0 )
        return result;
      v8 = 9;
    }
  }
  else
  {
    v8 = 7;
    result = -1073741811;
  }
  if ( a3 )
    *a3 = v8;
  return result;
}
