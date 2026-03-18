/*
 * XREFs of ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x14016EF2C
 * Callers:
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsProcessUmfdHost(struct _EPROCESS *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v3; // rdi
  __int64 v4; // rdx
  int v5; // ecx
  bool v6; // bl

  v3 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 24256LL);
  GreAcquirePushLockShared(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 24192LL) == (_QWORD)a1;
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v6;
}
