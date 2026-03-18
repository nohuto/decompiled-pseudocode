/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14020F980
 * Callers:
 *     DestroyWindowStation @ 0x1401EB510 (DestroyWindowStation.c)
 *     FreeDesktop @ 0x140243E30 (FreeDesktop.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1402DF8D4 (-EndShutdown@@YAXJ@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1402755BC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140275668 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(v5);
      if ( !v1[27] )
        v1[27] = v1;
      UserSessionState = W32GetUserSessionState(v3, v2);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19728, v1 + 27);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v5);
    }
    else
    {
      ObfDereferenceObject(v1);
    }
  }
}
