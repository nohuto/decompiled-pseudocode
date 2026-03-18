/*
 * XREFs of ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401AC1CC
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void EnterLeaveCritMitRitHandOffHazard::UnInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  char *v3; // rcx

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v1, v0);
    v3 = *(char **)(UserSessionState + 18808);
    if ( v3 )
    {
      GreDeleteFastMutex(v3);
      *(_QWORD *)(UserSessionState + 18808) = 0LL;
    }
  }
}
