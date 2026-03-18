/*
 * XREFs of ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401AC6E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     UnpackMouseSettings @ 0x140217504 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1402175C4 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x140217698 (UnpackTouchpadSettings.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x14021BA20 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 */

char __fastcall ivOnNonInputPacketReceived(const void *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  int v5; // r8d
  int v6; // r8d
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  const struct _IVForegroundPacket *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *UserSessionState; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  int *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx

  v5 = a3 - 9;
  if ( !v5 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v18 = v17;
    UserSessionState[3] = v17;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v18 )
        goto LABEL_31;
    }
    else if ( v18 )
    {
      *(_BYTE *)(v18 + 1708) = 1;
LABEL_31:
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v18 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
          {
            while ( 1 )
            {
              v23 = UserSessionState[2464];
              if ( !v23 )
                break;
              UserSessionState[2464] = *(_QWORD *)(v23 + 16);
              v22 = *(int **)v23;
              *(_QWORD *)(v23 + 16) = 0LL;
              if ( !v22[2] )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
              HMUnlockObject(*(int **)v23, v21);
            }
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
          }
        }
      }
    }
    UnpackTouchpadSettings(a4);
    UnpackMouseSettings(&a4->left, v24);
    UnpackPenSettings(a4, v25);
    goto LABEL_43;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = (_QWORD *)W32GetUserSessionState(a1, a2);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             v7,
             1,
             0,
             (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v7, 0);
    v9 = v8;
    v7[3] = v8;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v9 )
        goto LABEL_12;
    }
    else if ( v9 )
    {
      *(_BYTE *)(v9 + 1708) = 1;
LABEL_12:
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v9 + 1360) >= 0 )
      {
        v12 = PsGetCurrentProcessWin32Process(v11);
        if ( v12 )
        {
          if ( *(_QWORD *)v12 && *(_BYTE *)(v12 + 1176) == 1 )
          {
            while ( 1 )
            {
              v14 = v7[2464];
              if ( !v14 )
                break;
              v7[2464] = *(_QWORD *)(v14 + 16);
              v13 = *(int **)v14;
              *(_QWORD *)(v14 + 16) = 0LL;
              if ( !v13[2] )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
              HMUnlockObject(*(int **)v14, (__int64)v10);
            }
            DestroyDeferredUnlockObjectAssignmentList(v7 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v7 + 2466);
          }
        }
      }
    }
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v10);
LABEL_43:
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
    return 1;
  }
  if ( v6 == 1 )
    CContentRects::SetContentRects((unsigned int)a4[4].left, a4);
  return 1;
}
