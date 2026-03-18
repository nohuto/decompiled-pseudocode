/*
 * XREFs of PopOpenHiberPersistedKey @ 0x140B667A0
 * Callers:
 *     PopQueryHiberPersistedRegValue @ 0x1407D0718 (PopQueryHiberPersistedRegValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

NTSTATUS __fastcall PopOpenHiberPersistedKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, int *a3)
{
  struct _LIST_ENTRY *Blink; // rdx
  NTSTATUS result; // eax
  int v8; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( KeyHandle && (Blink = stru_140F11D08.WaitListEntry.Blink) != 0LL )
  {
    *KeyHandle = (HANDLE)-1LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Blink);
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
