/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1401B27F4 (UserPowerStateCallout.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void UserSessionSwitchBlock_End(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v4);
  UserSessionState = W32GetUserSessionState(v1, v0);
  if ( (*(_DWORD *)(UserSessionState + 68856))-- == 1 )
    *(_DWORD *)(UserSessionState + 68852) = 0;
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v4);
}
