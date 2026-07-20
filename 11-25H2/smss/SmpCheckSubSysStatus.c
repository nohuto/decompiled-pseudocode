/*
 * XREFs of SmpCheckSubSysStatus @ 0x14000B880
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpWaitForSubSysStartup @ 0x140008D90 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpCheckSubSysStatus(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 4) != 0 )
    return 1LL;
  if ( (v1 & 1) == 0 )
    return *(_DWORD *)(a1 + 24) != -1;
  return *(_QWORD *)(a1 + 48) != 0;
}
