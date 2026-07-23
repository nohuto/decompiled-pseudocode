/*
 * XREFs of RtlQueryProcessAvailableCpusCount @ 0x180148FA0
 * Callers:
 *     RtlRegisterAvailableCpusChangeNotification @ 0x180149020 (RtlRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall RtlQueryProcessAvailableCpusCount(void *a1, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  v6 = 0LL;
  v9 = 0LL;
  result = NtQueryInformationProcess(a1, MaxProcessInfoClass|ProcessQuotaLimits, &v6, 0x20u, 0LL);
  if ( result >= 0 )
  {
    *a2 = v8;
    if ( a3 )
      *a3 = v7;
  }
  return result;
}
