/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAE08 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoDeferredUnlockObjectAssignmentList @ 0x1401AAA50 (LockIntoDeferredUnlockObjectAssignmentList.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  PERESOURCE *v5; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+48h] [rbp-20h]

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v5);
      if ( !v1[45] )
        v1[45] = v1;
      UserSessionState = W32GetUserSessionState(v3, v2);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19744, v1 + 45);
      if ( v6 )
      {
        if ( v5 )
          ExReleaseResourceAndLeaveCriticalRegion(*v5);
      }
    }
    else
    {
      ObfDereferenceObject(v1);
    }
  }
}
