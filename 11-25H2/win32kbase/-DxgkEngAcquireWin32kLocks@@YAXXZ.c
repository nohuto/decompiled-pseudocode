/*
 * XREFs of ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140088E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001BD24 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088EB8 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 */

void DxgkEngAcquireWin32kLocks(void)
{
  __int64 v0; // rcx
  struct _ERESOURCE **v1; // rbx

  EnterSharedCrit(1LL, 1LL);
  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(v0) + 88);
  GreAcquireSemaphore<1,>(v1);
  GreAcquireSemaphore<2,>(v1);
  GreAcquireSemaphore<3,>(v1);
}
