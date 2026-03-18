/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x1401FF96C
 * Callers:
 *     DestroyWindowStation @ 0x1401FF8C0 (DestroyWindowStation.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x14028D400 (-EndShutdown@@YAXJ@Z.c)
 *     FreeDesktop @ 0x1402A5110 (FreeDesktop.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14029AECC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14029AF78 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( IS_USERCRIT_OWNED_SHAREDONLY((__int64)a1, a2) )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(v6);
      if ( !v2[24] )
        v2[24] = v2;
      UserSessionState = W32GetUserSessionState(v4, v3);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19760, v2 + 24);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v6);
    }
    else
    {
      ObfDereferenceObject(v2);
    }
  }
}
