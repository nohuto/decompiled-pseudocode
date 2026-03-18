/*
 * XREFs of GreUnlockVisRgnPublish @ 0x140058680
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400586B8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreUnlockVisRgnPublish(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
           GreReleaseSemaphoreSharedInternal,
           **(_QWORD **)(SessionState + 88) + 1248LL);
}
