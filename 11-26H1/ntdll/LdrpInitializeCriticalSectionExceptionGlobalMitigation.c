/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FBA6C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  int v0; // ebx
  int v1; // [rsp+30h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v3[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, Handle = 0LL,
                                                  v1 = 0,
                                                  (int)NtOpenKey(&Handle, 1LL, &unk_180172148) >= 0)
    && (v0 = NtQueryValueKey(Handle, L"@B", 2LL, v3, 80, &v1), NtClose(Handle), v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
