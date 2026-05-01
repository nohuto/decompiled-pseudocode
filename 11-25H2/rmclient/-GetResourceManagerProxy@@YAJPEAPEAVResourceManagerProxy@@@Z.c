/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FC70
 * Callers:
 *     RmGetNotification @ 0x18000FB10 (RmGetNotification.c)
 *     RmAcquireResources @ 0x18000FB60 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x18000FC20 (RmReleaseResources.c)
 *     RmAccessCheckOnSelf @ 0x180019800 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x180019840 (RmAvailabilityCheck.c)
 *     RmRegisterResource @ 0x1800198C0 (RmRegisterResource.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x18001365C (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_18002FD90;
  if ( !qword_18002FD90 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_18002FD90;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
