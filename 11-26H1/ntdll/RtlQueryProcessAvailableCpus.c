/*
 * XREFs of RtlQueryProcessAvailableCpus @ 0x180148F10
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall RtlQueryProcessAvailableCpus(void *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 ProcessInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 )
    ProcessInformation = *a3;
  else
    ProcessInformation = 0LL;
  v9 = a2;
  result = NtQueryInformationProcess(a1, MaxProcessInfoClass|ProcessQuotaLimits, &ProcessInformation, 0x20u, 0LL);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483598 )
  {
    if ( a4 )
      *a4 = v7;
  }
  return result;
}
