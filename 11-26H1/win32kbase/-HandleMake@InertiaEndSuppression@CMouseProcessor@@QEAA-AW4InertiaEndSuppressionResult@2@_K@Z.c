/*
 * XREFs of ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140223A5C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(_BYTE *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax

  v5 = (unsigned __int64 *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 16912);
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  if ( !CInertiaManager::QueryInertia((__int64)v5, *(_QWORD *)(UserSessionState + 19216), 15) && a2 > *v5 )
    return 1LL;
  *a1 = 1;
  return 0LL;
}
