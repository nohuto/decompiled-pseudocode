/*
 * XREFs of ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8
 * Callers:
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400C91F0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x140242860 (-CleanupDirtyDesktops@@YAXXZ.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x140242920 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     _CloseDesktop @ 0x140288754 (_CloseDesktop.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1402755BC (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140275668 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall DeferrableUnlockObjectAssignment<tagDESKTOP>(_QWORD **a1)
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
      if ( !v1[45] )
        v1[45] = v1;
      UserSessionState = W32GetUserSessionState(v3, v2);
      LockIntoDeferredUnlockObjectAssignmentList(UserSessionState + 19744, v1 + 45);
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v5);
    }
    else
    {
      ObfDereferenceObject(v1);
    }
  }
}
