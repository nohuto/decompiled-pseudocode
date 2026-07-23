/*
 * XREFs of PopResetCurrentPolicies @ 0x1409BEAA8
 * Callers:
 *     PopBatteryUpdateCompositeInformation @ 0x1409BE914 (PopBatteryUpdateCompositeInformation.c)
 *     PopChangeCapability @ 0x1409BEA8C (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDefaultPolicy @ 0x1407CB528 (PopDefaultPolicy.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  __int64 Length; // [rsp+20h] [rbp-E0h]
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v9[31]; // [rsp+58h] [rbp-A8h] BYREF

  KeyHandle = 0LL;
  LODWORD(v5) = 0;
  DestinationString = 0LL;
  memset_0(&KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0xF8u,
           (PULONG)&v5);
    if ( v1 >= 0 )
    {
      v2 = (unsigned int)(v5 - 12);
    }
    else
    {
      PopDefaultPolicy((_DWORD *)v9 + 1);
      v2 = 232LL;
    }
    LODWORD(v5) = v2;
    ((void (__fastcall *)(_QWORD, _QWORD, char *, __int64, __int64, PULONG, __int64, HANDLE, _QWORD, wchar_t *, __int64, _QWORD))PopApplyPolicy)(
      0LL,
      0LL,
      (char *)v9 + 4,
      v2,
      Length,
      ResultLength,
      v5,
      KeyHandle,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      KeyValueInformation,
      v9[0]);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
