/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1400F9AB4
 * Callers:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax

  v3 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2) + 66056);
  W32AcquirePushLockExclusiveEx(v3, 0);
  v8 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176) )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19176);
    if ( *(_QWORD *)(v10 + 256) )
    {
      if ( a1 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        *a1 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(*(_QWORD *)(UserSessionState + 19176) + 256LL));
      }
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176) + 256LL) + 904LL);
    }
  }
  W32ReleasePushLockExclusiveEx(v3, 0);
  return v8;
}
