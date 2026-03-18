/*
 * XREFs of ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140220F9C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(_BYTE *a1, unsigned __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = W32GetUserSessionState(v6, v5);
  if ( !CInertiaManager::QueryInertia(UserSessionState + 16920, *(_QWORD *)(v7 + 19184), 15)
    && a2 > *(_QWORD *)(UserSessionState + 16920) )
  {
    return 1LL;
  }
  *a1 = 1;
  return 0LL;
}
