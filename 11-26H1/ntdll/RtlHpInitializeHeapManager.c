/*
 * XREFs of RtlHpInitializeHeapManager @ 0x1800D0D40
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x18006E4B8 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x1800D0E2C (RtlHpHeapManagerInitialize.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS RtlHpInitializeHeapManager()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]

  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v6 = 0x20000004000LL;
  RtlHpHeapManagerInitialize(v0, &v6);
  memset_thunk_772440563353939046(&RtlpHpEnvFlsContext, 0, 0x60uLL);
  qword_1801C5F90 = (__int64)&qword_1801C5F88;
  qword_1801C5F88 = (__int64)&qword_1801C5F88;
  xmmword_1801C5F48 = 0LL;
  xmmword_1801C5F58 = 0LL;
  xmmword_1801C5F68 = 0LL;
  xmmword_1801C5F78 = 0LL;
  RtlpHpEnvHandle = 0LL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v5, v8 + 1);
  return result;
}
