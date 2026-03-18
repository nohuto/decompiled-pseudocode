/*
 * XREFs of IVWorkerThread @ 0x14021B528
 * Callers:
 *     xxxCreateSystemThreads @ 0x140081E00 (xxxCreateSystemThreads.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z @ 0x140152E70 (--0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z.c)
 *     SetThreadBasePriority @ 0x1401532F0 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall IVWorkerThread(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int *v9; // rax
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct _KEVENT *v12; // rsi
  void *v13; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  _BYTE v28[48]; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+88h] [rbp+10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v5 = v4;
  UserSessionState[3] = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_19;
  }
  else
  {
    if ( !v5 )
      goto LABEL_19;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v5 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
      {
        while ( 1 )
        {
          v10 = UserSessionState[2464];
          if ( !v10 )
            break;
          UserSessionState[2464] = *(_QWORD *)(v10 + 16);
          v9 = *(int **)v10;
          *(_QWORD *)(v10 + 16) = 0LL;
          if ( !v9[2] )
          {
            v30 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
          }
          HMUnlockObject(*(int **)v10, v8);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
LABEL_19:
  v11 = PtiCurrent();
  *((_QWORD *)v11 + 170) |= 0x800000000uLL;
  v12 = *(struct _KEVENT **)a1;
  v13 = *(void **)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(W32GetUserSessionState(0x800000000LL, v15) + 19368) = CurrentThread;
  v18 = W32GetUserSessionState(v17, v16);
  SetThreadBasePriority(*(PETHREAD *)(v18 + 19368), 16);
  *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19376) = v13;
  KeSetEvent(v12, 1, 0);
  CIVChannel::CIVChannel(
    (CIVChannel *)v28,
    0LL,
    3,
    (void (__high *)(const void *, struct CONTAINER_ID))ivOnChildPartitionConnected,
    (bool (*)(const void *, unsigned int, unsigned int, void *, void *))ivOnNonInputPacketReceived,
    0LL);
  CIVChannel::Initialize((CIVChannel *)v28);
  while ( 1 )
  {
    LOBYTE(v21) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v29, v21);
    if ( !KeWaitForSingleObject(v13, Executive, 0, 0, 0LL) )
      break;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v29, v22);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v29, v22);
  CIVChannel::Uninitialize((CIVChannel *)v28);
  *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19376) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19368) = 0LL;
  GreDeleteFastMutex((char *)v12);
  GreDeleteFastMutex((char *)v13);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v27);
}
