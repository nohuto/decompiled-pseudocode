/*
 * XREFs of ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401673A4
 * Callers:
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x14013AA50 (CreateKernelSemaphore.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EnterLeaveCritMitRitHandOffHazard::Initialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  struct _KSEMAPHORE *KernelSemaphore; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v1, v0);
  KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(UserSessionState + 18808) = KernelSemaphore;
  return KernelSemaphore == 0LL ? 0xC0000017 : 0;
}
