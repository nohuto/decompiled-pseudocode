/*
 * XREFs of RtlReleasePrivilege @ 0x1800D26C0
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x18015A84C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A95C (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x18015F760 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  HANDLE v3; // rcx

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1, 8LL);
    v3 = a1[1];
    if ( v3 )
      NtClose(v3);
  }
  if ( a1[2] != (char *)a1 + 36 )
    RtlFreeHeap_0();
  NtClose(*a1);
  return RtlFreeHeap_0();
}
