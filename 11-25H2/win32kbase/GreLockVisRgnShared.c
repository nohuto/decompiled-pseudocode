/*
 * XREFs of GreLockVisRgnShared @ 0x140042CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140043C18 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045A94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockVisRgnShared(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreShared<1,>(v1);
  GreAcquireSemaphoreShared<2,>(v1);
  return GreAcquireSemaphoreShared<3,>(v1);
}
