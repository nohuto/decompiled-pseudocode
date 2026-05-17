/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x1800FD250
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  SystemInformation = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = NtQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0;
  }
  return result;
}
