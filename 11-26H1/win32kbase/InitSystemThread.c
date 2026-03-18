/*
 * XREFs of InitSystemThread @ 0x1401B5410
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     InitClientInfo @ 0x1401A686C (InitClientInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // r8d
  struct tagTHREADINFO *v11; // rbx
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _WORD *v16; // rcx
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  PsGetThreadProcess(KeGetCurrentThread());
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2, v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0;
  UserSessionState[3] = v6;
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v11 = PtiCurrent(v8, v7);
  *((_QWORD *)v11 + 64) = Win32AllocPoolWithQuotaZInitImpl(v12, 0x130uLL, 0x69637355u);
  v16 = (_WORD *)*((_QWORD *)v11 + 64);
  if ( v16 )
  {
    _InterlockedAnd((volatile signed __int32 *)v11 + 130, 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)v11 + 130, 4u);
    if ( (unsigned int)InitClientInfo((__int64)v11) )
    {
      if ( a1 )
      {
        v17 = (char *)*((_QWORD *)v11 + 66);
        if ( v17 )
          GreDeleteFastMutex(v17, v13, v14, v15);
        v18 = Win32AllocPoolWithQuotaZInitImpl((int)v17, *(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *((_QWORD *)v11 + 66) = v18;
        if ( v18 )
        {
          *(_QWORD *)(v18 + 8) = v18 + 16;
          memmove(*(void **)(*((_QWORD *)v11 + 66) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v13 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*((_QWORD *)v11 + 66) + 8LL) + 2 * v13) = 0;
          *(_WORD *)(*((_QWORD *)v11 + 66) + 2LL) = *(_WORD *)a1 + 2;
          v16 = (_WORD *)*((_QWORD *)v11 + 66);
          *v16 = *(_WORD *)a1;
        }
      }
      v19 = *((_QWORD *)v11 + 57);
      if ( v19 && (*(_DWORD *)(v19 + 12) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 203);
    }
    else
    {
      v9 = -1073741823;
    }
  }
  else
  {
    v9 = -1073741801;
  }
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v16, v13, v14, v15);
  return v9;
}
