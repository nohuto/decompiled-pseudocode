/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1408648B4
 * Callers:
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  v7 = 0;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  v0 = 0;
  *(_QWORD *)&ValueName.Length = 3145774LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.IptSaveArea;
  KeyValueInformation = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    v0 = HIDWORD(KeyValueInformation);
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  BYTE2(stru_140E2EB88.RelativeTimerBias) = 1;
  return 1LL;
}
