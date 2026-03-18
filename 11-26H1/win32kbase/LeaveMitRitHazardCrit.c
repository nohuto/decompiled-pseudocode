/*
 * XREFs of LeaveMitRitHazardCrit @ 0x1401C4FA0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void LeaveMitRitHazardCrit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v1, v0);
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    ExReleaseFastResource(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
}
