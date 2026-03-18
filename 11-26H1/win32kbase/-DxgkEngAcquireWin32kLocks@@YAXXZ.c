/*
 * XREFs of ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x1400C7220
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B6A8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7268 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DxgkEngAcquireWin32kLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  struct _ERESOURCE **v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d

  EnterSharedCrit(1LL, 1LL, a3, a4);
  v5 = *(struct _ERESOURCE ***)(W32GetSessionState(v4) + 88);
  GreAcquireSemaphore<1,>(v5);
  GreAcquireSemaphore<2,>(v5, v6, v7);
  GreAcquireSemaphore<3,>(v5, v8, v9);
}
