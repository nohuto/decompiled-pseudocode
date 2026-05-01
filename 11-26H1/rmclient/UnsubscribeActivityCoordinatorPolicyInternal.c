/*
 * XREFs of UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001A1B0
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicy @ 0x180019E50 (UnsubscribeActivityCoordinatorPolicy.c)
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001A04C (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     CrmActivityFree @ 0x180004DA0 (CrmActivityFree.c)
 *     AcpReleaseClientRegistration @ 0x180019FA8 (AcpReleaseClientRegistration.c)
 */

__int64 __fastcall UnsubscribeActivityCoordinatorPolicyInternal(__int64 a1)
{
  int v1; // ebx
  struct _CRMP_ACTIVITY_CONTEXT *v3; // rcx

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 == GetCurrentThreadId() )
    __fastfail(0x38u);
  v3 = *(struct _CRMP_ACTIVITY_CONTEXT **)(a1 + 8);
  if ( v3 )
    CrmActivityFree(v3);
  if ( *(_QWORD *)a1 )
    AcpReleaseClientRegistration(*(struct _CRMP_REGISTRATION_CONTEXT **)a1);
  HamFreeBuffer((void *)a1);
  return 0LL;
}
