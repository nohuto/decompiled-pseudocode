/*
 * XREFs of ??$GrepGetGlobalLock@$0BE@@@YAPEAUHSEMAPHORE__@@XZ @ 0x1400C8248
 * Callers:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepGetGlobalLock<20>(__int64 a1)
{
  return **(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL;
}
