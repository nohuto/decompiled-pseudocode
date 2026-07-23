/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FB1BC
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  NTSTATUS v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0,
        KeyHandle = 0LL,
        ResultLength = 0,
        NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180171148) >= 0)
    && (v0 = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180171178,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength),
        NtClose(KeyHandle),
        v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
