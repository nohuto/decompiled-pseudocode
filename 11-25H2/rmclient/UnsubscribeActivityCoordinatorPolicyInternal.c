/*
 * XREFs of UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001BC58
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicy @ 0x18001B910 (UnsubscribeActivityCoordinatorPolicy.c)
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001BB08 (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     HamFreeBuffer @ 0x1800091F0 (HamFreeBuffer.c)
 *     CrmActivityFree @ 0x180009220 (CrmActivityFree.c)
 *     AcpReleaseClientRegistration @ 0x18001BA68 (AcpReleaseClientRegistration.c)
 */

__int64 __fastcall UnsubscribeActivityCoordinatorPolicyInternal(__int64 a1)
{
  struct _CRMP_ACTIVITY_CONTEXT *v2; // rcx

  if ( *(_DWORD *)(a1 + 32) == GetCurrentThreadId() )
    __fastfail(0x38u);
  v2 = *(struct _CRMP_ACTIVITY_CONTEXT **)(a1 + 8);
  if ( v2 )
    CrmActivityFree(v2);
  if ( *(_QWORD *)a1 )
    AcpReleaseClientRegistration(*(struct _CRMP_REGISTRATION_CONTEXT **)a1);
  HamFreeBuffer((void *)a1);
  return 0LL;
}
