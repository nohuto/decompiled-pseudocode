/*
 * XREFs of PopInitializePowerPolicySimulate @ 0x140B2CC10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

NTSTATUS PopInitializePowerPolicySimulate()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+B0h] [rbp+47h]

  KeyHandle = 0LL;
  v10 = 0;
  *(_DWORD *)&stru_140F10828.WaitBlockFill11[100] = *(_DWORD *)&stru_140E66FF0.SchedulerApcFill5[56];
  Disposition = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSiloMonitorLock.WriteTransferCount;
  Handle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Session Manager");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"PowerSimulateHiberBugcheck");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && DWORD2(KeyValueInformation) == 4 )
      {
        dword_140F0FD40 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&DestinationString, L"PowerPolicySimulate");
      v2 = ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      result = ZwClose(Handle);
      if ( v2 >= 0 && DWORD2(KeyValueInformation) == 4 )
      {
        result = HIDWORD(KeyValueInformation);
        *(_DWORD *)&stru_140F10828.WaitBlockFill11[100] |= HIDWORD(KeyValueInformation);
      }
    }
  }
  return result;
}
