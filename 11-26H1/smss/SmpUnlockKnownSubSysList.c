/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x1400073F0
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140005530 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140005610 (SmpWaitForSingleSubSys.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpExecPgm @ 0x140006990 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x140018FEC (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( *(_DWORD *)a1 == 1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
