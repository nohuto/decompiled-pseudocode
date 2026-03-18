/*
 * XREFs of ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400DA0E4
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14021116C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

bool __fastcall CInertiaManager::QueryInertiaStatus(CInertiaManager *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  return CInertiaManager::QueryInertia(this, *(_QWORD *)(UserSessionState + 19184), 15LL) != 0;
}
