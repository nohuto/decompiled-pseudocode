/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1400976E0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1400E95B0 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x14012E368 (-OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1401892E0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(void **this)
{
  char v2; // bp
  int v3; // edx
  int v4; // ecx
  char v5; // bl
  int v6; // r8d
  _QWORD *UserSessionState; // rdi
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  CBaseInput *v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  void **v21; // [rsp+40h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "OnReadNotification", 0LL);
  if ( *((int *)this + 8) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    v5 = (*((__int64 (__fastcall **)(void **))*this + 6))(this);
    if ( v5 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v4, v3, v6);
      v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v8;
      if ( v8 )
      {
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v8) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v10);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
    InputTraceLogging::Win32k::OnReadNotification(this[6], *((_DWORD *)this + 10));
    (*((void (__fastcall **)(void **, void *, _QWORD, _QWORD, void *))*this + 7))(
      this,
      this[8],
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      this[6]);
    if ( CBaseInput::IsInputSuppressRequested(v12, v11, v13) )
      CBaseInput::OnInputSuppressed((CBaseInput *)this);
    else
      (*((void (__fastcall **)(void **, void *, _QWORD, _QWORD, void *))*this + 8))(
        this,
        this[8],
        *((unsigned int *)this + 6),
        *((unsigned int *)this + 10),
        this[6]);
    v17 = (char *)this[9];
    if ( this[8] != v17 )
    {
      if ( v17 != (char *)(this + 10) )
        GreDeleteFastMutex(v17, v14, v15, v16);
      this[9] = this[8];
      *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
    }
    if ( v5 )
      UserSessionSwitchLeaveCritWithNonPaged((__int64)v17, v14, v15, v16);
  }
  v19 = CBaseInput::Read((CBaseInput *)this);
  if ( v2 )
    (*((void (__fastcall **)(void **))*this + 9))(this);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v21,
    v18);
  return v19;
}
