/*
 * XREFs of WerpIsProcessNative @ 0x180120630
 * Callers:
 *     RtlpPossibleDeadlock @ 0x18007BA50 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 WerpIsProcessNative()
{
  unsigned int v0; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v3; // [rsp+50h] [rbp-28h]

  memset_thunk_772440563353939046(ProcessInformation, 0, 0x40uLL);
  v0 = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v3 == 1;
  return v0;
}
