/*
 * XREFs of ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x140055D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AA0C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D03C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D12C (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

void __fastcall DxgkEngReleaseWin32kLocks(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreReleaseSemaphoreShared<3,>(v1, v2, v3);
  GreReleaseSemaphoreShared<2,>(v1, v4, v5);
  GreReleaseSemaphoreShared<1,>((__int64 *)v1, v6, v7);
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
}
