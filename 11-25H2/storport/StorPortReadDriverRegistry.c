/*
 * XREFs of StorPortReadDriverRegistry @ 0x140074780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

char __fastcall StorPortReadDriverRegistry(__int64 a1, const char *a2, ULONG *a3, void *a4)
{
  char v8; // si
  ULONG v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  char KeyValueInformation[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v16; // [rsp+68h] [rbp-98h]
  char Src[260]; // [rsp+6Ch] [rbp-94h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  ValueName = 0LL;
  v8 = 0;
  if ( !KeGetCurrentIrql()
    && a1
    && a2
    && a4
    && a3
    && *a3
    && (int)IoOpenDriverRegistryKey(a1, 0LL, 131097LL, 0LL, &KeyHandle) >= 0
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, a2),
        RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u) >= 0)
    && ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ResultLength) >= 0
    && v16 <= *a3 )
  {
    v9 = ResultLength;
    memmove(a4, Src, ResultLength);
    *a3 = v9;
    v8 = 1;
  }
  else
  {
    *a3 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( ValueName.Buffer )
    RtlFreeUnicodeString(&ValueName);
  return v8;
}
