/*
 * XREFs of SmpCheckSubSysStatus @ 0x14000B500
 * Callers:
 *     SmpWaitForSingleSubSys @ 0x140005610 (SmpWaitForSingleSubSys.c)
 *     SmpTerminateCSR @ 0x1400056C0 (SmpTerminateCSR.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpWaitForSubSysStartup @ 0x140008630 (SmpWaitForSubSysStartup.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
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
