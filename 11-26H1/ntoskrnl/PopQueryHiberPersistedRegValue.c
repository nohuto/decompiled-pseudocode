/*
 * XREFs of PopQueryHiberPersistedRegValue @ 0x1407D37B8
 * Callers:
 *     PopInitHiberPersistedRegValues @ 0x1407D3344 (PopInitHiberPersistedRegValues.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407D3E80 (PopWnfHibernatePolicyCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopReadUlongPowerKey @ 0x140603800 (PopReadUlongPowerKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     PopOpenHiberPersistedKey @ 0x140B6972C (PopOpenHiberPersistedKey.c)
 */

__int64 __fastcall PopQueryHiberPersistedRegValue(int a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // ebx
  NTSTATUS v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  int v16; // [rsp+68h] [rbp-18h]

  v2 = a1;
  v16 = 0;
  ResultLength = 0;
  v11 = 0;
  v4 = -1LL;
  KeyHandle = (HANDLE)-1LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  if ( (unsigned int)v2 <= 3 && a2 )
  {
    v5 = 3 * v2;
    v6 = *((_DWORD *)&PopHiberPersistedRegValueDatabase + 6 * v2 + 5);
    v7 = PopOpenHiberPersistedKey(&KeyHandle, 0x20019u);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (&PopHiberPersistedRegValueDatabase)[v5]);
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      v7 = v8;
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
          goto LABEL_16;
        v6 = HIDWORD(KeyValueInformation);
        goto LABEL_13;
      }
      v9 = PopReadUlongPowerKey(
             (&PopHiberPersistedRegValueDatabase)[v5],
             &v11,
             *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5),
             0,
             0xFFFFFFFF,
             *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5));
      v7 = v9;
      if ( v9 >= 0 )
      {
        v6 = v11;
        goto LABEL_8;
      }
      if ( v9 == -1073741772 )
      {
LABEL_8:
        if ( v9 == -1073741772 )
        {
          v6 = *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5);
LABEL_15:
          *a2 = v6;
          v7 = 0;
          goto LABEL_16;
        }
LABEL_13:
        if ( LOBYTE((&PopHiberPersistedRegValueDatabase)[v5 + 1]) )
          v6 = v6 != 0;
        goto LABEL_15;
      }
    }
LABEL_16:
    v4 = (__int64)KeyHandle;
    goto LABEL_18;
  }
  v7 = -1073741811;
LABEL_18:
  if ( v4 != -1 )
    ZwClose((HANDLE)v4);
  return (unsigned int)v7;
}
