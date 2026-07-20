/*
 * XREFs of SmpLockKnownSubSysList @ 0x140009840
 * Callers:
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpLockKnownSubSysList(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( (_DWORD)a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4, a2, a3);
}
