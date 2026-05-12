/*
 * XREFs of PortpReadBusType @ 0x1401B107C
 * Callers:
 *     PortReadStorageBusType @ 0x1401836F4 (PortReadStorageBusType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PortpReadBusType(HANDLE KeyHandle, char *KeyValueInformation, char a3, int *a4)
{
  const WCHAR *v7; // rdx
  int v8; // ecx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  ResultLength = 0;
  v7 = L"ChildBusType";
  ValueName = 0LL;
  if ( !a3 )
    v7 = L"BusType";
  RtlInitUnicodeString(&ValueName, v7);
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v8 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *a4 = v8;
  return v8 < 127;
}
