/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4
 * Callers:
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAF04 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoDeferredUnlockObjectAssignmentList @ 0x140159280 (LockIntoDeferredUnlockObjectAssignmentList.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  PERESOURCE *v7; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+48h] [rbp-20h]

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)a1, a2) == 1 )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v7);
      if ( !v2[45] )
        v2[45] = v2;
      UserSessionState = W32GetUserSessionState(v4, v3, v5);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19776, v2 + 45);
      if ( v8 )
      {
        if ( v7 )
          ExReleaseResourceAndLeaveCriticalRegion(*v7);
      }
    }
    else
    {
      ObfDereferenceObject(v2);
    }
  }
}
