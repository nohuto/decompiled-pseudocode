/*
 * XREFs of PoIssueCoalescingNotification @ 0x1404247C8
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x140AFA6A0 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140B16240 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  signed __int64 v2; // rdx
  signed __int64 *i; // rbx
  struct _EX_RUNDOWN_REF *v4; // rdi
  char v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+21h] [rbp-17h]
  char v8; // [rsp+23h] [rbp-15h]
  int v9; // [rsp+24h] [rbp-14h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  v9 = a2;
  v7 = 0;
  v8 = 0;
  v10 = 0LL;
  v6 = *(_BYTE *)(a1 + 32);
  PopAcquireRwLockShared(&PopCoalRegistrationListLock);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v4 = ExReferenceCallBackBlock(i + 2, v2);
    if ( v4 )
    {
      if ( *((_BYTE *)i - 16) != v6 )
        guard_dispatch_icall_no_overrides(v4, &v6);
      ExDereferenceCallBackBlock(i + 2);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopCoalRegistrationListLock);
}
