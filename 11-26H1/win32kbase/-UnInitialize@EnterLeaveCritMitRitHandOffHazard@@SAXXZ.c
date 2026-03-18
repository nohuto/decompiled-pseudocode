/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401C4F24
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  __int64 UserSessionState; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rcx

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v1, v0, v2);
    v7 = *(char **)(UserSessionState + 18856);
    if ( v7 )
    {
      GreDeleteFastMutex(v7, v3, v5, v6);
      *(_QWORD *)(UserSessionState + 18856) = 0LL;
    }
  }
}
