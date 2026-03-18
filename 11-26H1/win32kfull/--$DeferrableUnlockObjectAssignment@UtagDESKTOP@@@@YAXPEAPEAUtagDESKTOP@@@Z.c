/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64
 * Callers:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x140026714 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     _CloseDesktop @ 0x14018B418 (_CloseDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x140295BD8 (-CleanupDirtyDesktops@@YAXXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14029AECC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14029AF78 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD *a1, __int64 a2)
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
      if ( !v2[45] )
        v2[45] = v2;
      UserSessionState = W32GetUserSessionState(v4, v3);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19776, v2 + 45);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v6);
    }
    else
    {
      ObfDereferenceObject(v2);
    }
  }
}
