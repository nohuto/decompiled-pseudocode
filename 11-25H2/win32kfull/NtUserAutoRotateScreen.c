/*
 * XREFs of NtUserAutoRotateScreen @ 0x140248050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax

  UserSessionSwitchEnterCrit();
  if ( (unsigned int)DispBrokerGetCurrentMode() != 3 )
  {
    v6 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
    if ( PsGetCurrentProcess(v7) != v6 )
      goto LABEL_3;
LABEL_5:
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = PtiCurrent(v9, v8);
      v11 = !tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v10 + 58), 0x10u);
    }
    else
    {
      v13 = (__int64)PtiCurrent(v9, v8);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 528), 0, 0) & 0x20000000) == 0 )
        goto LABEL_8;
      v13 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v13, v12) + 58) + 752LL) + 24LL);
      v11 = (v13 & 0x10) == 0;
    }
    if ( !v11 )
      goto LABEL_3;
LABEL_8:
    UserSessionState = W32GetUserSessionState(v13, v12);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(UserSessionState + 66072) + 56LL))(
           *(_QWORD *)(UserSessionState + 66072),
           a1);
    goto LABEL_9;
  }
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(v3, v2, v4) )
    goto LABEL_5;
LABEL_3:
  v5 = -1;
  UserSetLastError(5);
LABEL_9:
  LeaveCrit(0LL);
  return v5;
}
