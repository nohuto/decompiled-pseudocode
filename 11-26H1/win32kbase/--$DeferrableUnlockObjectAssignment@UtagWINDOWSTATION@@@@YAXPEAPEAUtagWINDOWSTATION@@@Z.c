/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAF04 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013637C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoDeferredUnlockObjectAssignmentList @ 0x140159280 (LockIntoDeferredUnlockObjectAssignmentList.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY((__int64)a1, a2) )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>((__int64)v9, v3, v4);
      if ( !v2[24] )
        v2[24] = v2;
      UserSessionState = W32GetUserSessionState(v6, v5, v7);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19760, (__int64)(v2 + 24));
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v9);
    }
    else
    {
      ObfDereferenceObject(v2);
    }
  }
}
