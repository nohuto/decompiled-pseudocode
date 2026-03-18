/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC
 * Callers:
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void UserSessionSwitchBlock_End(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  UserSessionState = W32GetUserSessionState(v1, v0, v2);
  if ( (*(_DWORD *)(UserSessionState + 68848))-- == 1 )
    *(_DWORD *)(UserSessionState + 68844) = 0;
  if ( !v9 )
    UserSessionSwitchLeaveCritWithNonPaged(v5, v4, v6, v7);
}
