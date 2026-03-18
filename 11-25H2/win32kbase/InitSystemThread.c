/*
 * XREFs of InitSystemThread @ 0x1401AA850
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     InitClientInfo @ 0x140162A98 (InitClientInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  PsGetThreadProcess(KeGetCurrentThread());
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2);
  v5 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    if ( !v7 )
      goto LABEL_10;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v9 = PtiCurrent();
  *((_QWORD *)v9 + 65) = Win32AllocPoolWithQuotaZInitImpl(v10, 0x120uLL, 0x69637355u);
  if ( *((_QWORD *)v9 + 65) )
  {
    _InterlockedAnd((volatile signed __int32 *)v9 + 132, 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)v9 + 132, 4u);
    if ( (unsigned int)InitClientInfo((__int64)v9) )
    {
      if ( a1 )
      {
        v12 = (char *)*((_QWORD *)v9 + 67);
        if ( v12 )
          GreDeleteFastMutex(v12);
        v13 = Win32AllocPoolWithQuotaZInitImpl((__int64)v12, *(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *((_QWORD *)v9 + 67) = v13;
        if ( v13 )
        {
          *(_QWORD *)(v13 + 8) = v13 + 16;
          memmove(*(void **)(*((_QWORD *)v9 + 67) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v11 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v9 + 67) + 8LL) + 2 * v11) = 0;
          *(_WORD *)(*((_QWORD *)v9 + 67) + 2LL) = *(_WORD *)a1 + 2;
          **((_WORD **)v9 + 67) = *(_WORD *)a1;
        }
      }
      v14 = *((_QWORD *)v9 + 58);
      if ( v14 && (*(_DWORD *)(v14 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 203);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v5;
}
