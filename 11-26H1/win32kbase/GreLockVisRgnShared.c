/*
 * XREFs of GreLockVisRgnShared @ 0x1400C5430
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1400C4CC0 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CE94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CF68 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

struct _GRETHREAD *__fastcall GreLockVisRgnShared(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d

  v1 = *(_DWORD **)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreShared<1,>(v1, v2, v3);
  GreAcquireSemaphoreShared<2,>(v1, v4, v5);
  return GreAcquireSemaphoreShared<3,>(v1, v6, v7);
}
