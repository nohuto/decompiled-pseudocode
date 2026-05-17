/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x1800FDCA0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryWnfStateNameInformation @ 0x180161D70 (NtQueryWnfStateNameInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryWnfMetaNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  return NtQueryWnfStateNameInformation(&v5, a2, a4, a1, 4);
}
