/*
 * XREFs of EnterMitRitHazardCrit @ 0x1401C4E90
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EnterMitRitHazardCrit()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  __int64 v8; // r8

  result = Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
  {
    KeEnterCriticalRegion();
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2, v1);
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    LOBYTE(v8) = 1;
    return ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v8);
  }
  return result;
}
