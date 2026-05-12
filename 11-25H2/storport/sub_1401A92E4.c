/*
 * XREFs of sub_1401A92E4 @ 0x1401A92E4
 * Callers:
 *     sub_1401A8C04 @ 0x1401A8C04 (sub_1401A8C04.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1401A92E4(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  char v6; // cl
  unsigned int v7; // edx
  char result; // al
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"UncachedExtAlignment");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = 16;
  v7 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v7 <= 0x10 )
  {
    v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
    if ( v7 < 3 )
      v6 = 3;
  }
  result = 1;
  *(_DWORD *)(a3 + 44) = 1 << v6;
  return result;
}
