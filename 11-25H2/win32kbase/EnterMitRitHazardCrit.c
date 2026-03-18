/*
 * XREFs of EnterMitRitHazardCrit @ 0x1401674D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EnterMitRitHazardCrit()
{
  __int64 result; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // r8

  result = Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
  {
    KeEnterCriticalRegion();
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    UserSessionState = W32GetUserSessionState(v3, v2);
    LOBYTE(v5) = 1;
    return ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v5);
  }
  return result;
}
