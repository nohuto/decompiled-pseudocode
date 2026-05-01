/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000F090
 * Callers:
 *     RmGetNotification @ 0x18000EF30 (RmGetNotification.c)
 *     RmAcquireResources @ 0x18000EF80 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x18000F040 (RmReleaseResources.c)
 *     RmAccessCheckOnSelf @ 0x180018830 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x180018870 (RmAvailabilityCheck.c)
 *     RmRegisterResource @ 0x1800188F0 (RmRegisterResource.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x1800124D8 (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_18002DCC8;
  if ( !qword_18002DCC8 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_18002DCC8;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
