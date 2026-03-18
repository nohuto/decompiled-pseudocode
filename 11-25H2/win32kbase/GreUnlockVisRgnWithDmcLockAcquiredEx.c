/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1401C7FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046440 (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046508 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreReleaseSemaphoreShared<3,>(v1);
  GreReleaseSemaphoreShared<2,>(v1);
}
