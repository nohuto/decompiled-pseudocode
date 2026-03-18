/*
 * XREFs of ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x14021C800 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x14021C8D4 (UnpackTouchpadSettings.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x140226AFC (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 */

char __fastcall ivOnNonInputPacketReceived(const void *a1, int a2, int a3, int *a4)
{
  int v5; // r8d
  _QWORD *v6; // rsi
  __int64 v7; // rax
  const struct _IVForegroundPacket *v8; // rdx
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *UserSessionState; // rsi
  __int64 v16; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d

  v5 = a3 - 9;
  if ( !v5 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, 0);
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v16;
    if ( v16 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 520), 0, 0) & 0x1000000) != 0
        && *(char *)(v16 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v18, v19);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
          }
        }
      }
    }
    UnpackTouchpadSettings(a4);
    UnpackMouseSettings(a4, v20, v21);
    UnpackPenSettings(a4);
    goto LABEL_19;
  }
  if ( v5 == 1 )
  {
    v6 = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, 1);
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           v6,
           1LL,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v6[3] = v7;
    if ( v7 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x1000000) != 0
        && *(char *)(v7 + 1360) >= 0 )
      {
        v9 = PsGetCurrentProcessWin32Process(v7);
        if ( v9 )
        {
          if ( *(_QWORD *)v9 && *(_BYTE *)(v9 + 1200) == 1 )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v6 + 2465), (int)v8, v10);
            DestroyDeferredUnlockObjectAssignmentList(v6 + 2472);
            DestroyDeferredUnlockObjectAssignmentList(v6 + 2470);
          }
        }
      }
    }
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v8);
LABEL_19:
    UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  }
  return 1;
}
