/*
 * XREFs of RtlReleasePrivilege @ 0x1800D2590
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x18015A71C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A82C (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x18015F660 (NtAdjustPrivilegesToken.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  char *v2; // r8
  void *v3; // rcx

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    NtAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_BYTE *)StatePointer + 32) & 1) != 0 )
  {
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v3 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v3 )
      NtClose(v3);
  }
  v2 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v2 != (char *)StatePointer + 36 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*(HANDLE *)StatePointer);
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
