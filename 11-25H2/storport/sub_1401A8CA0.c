/*
 * XREFs of sub_1401A8CA0 @ 0x1401A8CA0
 * Callers:
 *     sub_1401780C8 @ 0x1401780C8 (sub_1401780C8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1401A8CA0(HANDLE KeyHandle, char *KeyValueInformation, int *a3)
{
  int v6; // ecx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"BusType");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *a3 = v6;
  return v6 < 127;
}
