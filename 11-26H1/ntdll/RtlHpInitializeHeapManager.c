/*
 * XREFs of RtlHpInitializeHeapManager @ 0x180089A00
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlHpHeapManagerInitialize @ 0x180089AEC (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x18008B080 (RtlHpHeapManagerStart.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS RtlHpInitializeHeapManager()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]

  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v6 = 0x20000004000LL;
  RtlHpHeapManagerInitialize(v0, &v6);
  memset_thunk_772440563353939046(&RtlpHpEnvFlsContext, 0, 0x60uLL);
  qword_1801C6F90 = (__int64)&qword_1801C6F88;
  qword_1801C6F88 = (__int64)&qword_1801C6F88;
  xmmword_1801C6F48 = 0LL;
  xmmword_1801C6F58 = 0LL;
  xmmword_1801C6F68 = 0LL;
  xmmword_1801C6F78 = 0LL;
  RtlpHpEnvHandle = 0LL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v5, v8 + 1);
  return result;
}
