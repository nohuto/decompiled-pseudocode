/*
 * XREFs of PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407DB50C
 * Callers:
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopBatteryTestExemptPolicyRegKeyAccess(char a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-1h] BYREF
  int v8; // [rsp+68h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp+17h] BYREF
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  KeyHandle = 0LL;
  v8 = 0;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BatteryTestExemptPolicy");
    if ( a1 )
    {
      result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopBatteryTestExemptPolicy, 4u);
    }
    else
    {
      result = ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x14u,
                 &ResultLength);
      if ( result >= 0 )
      {
        result = 4;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
          && HIDWORD(KeyValueInformation) != PopBatteryTestExemptPolicy )
        {
          PopBatteryTestExemptPolicy = HIDWORD(KeyValueInformation);
          if ( (unsigned int)dword_140E07560 > 5 )
          {
            v3 = HIDWORD(KeyValueInformation);
            v11 = 4LL;
            v10 = &v3;
            result = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E07560,
                       (unsigned __int8 *)&word_14004E78E,
                       0LL,
                       0LL,
                       3u,
                       &v9);
          }
        }
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
