/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x14026883C
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1402687D0 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

bool __fastcall CRotationMgr::IsActivePpi(struct tagPROCESSINFO *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // di

  v3 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2) + 66056);
  W32AcquirePushLockExclusiveEx(v3, 0);
  v8 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176) )
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19176) + 256LL) == (_QWORD)a1;
  W32ReleasePushLockExclusiveEx(v3, 0LL);
  return v8;
}
