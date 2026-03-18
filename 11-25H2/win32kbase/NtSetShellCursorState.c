/*
 * XREFs of NtSetShellCursorState @ 0x140152480
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsShellProcess @ 0x140129D90 (IsShellProcess.c)
 *     SendOrientationChanged @ 0x140158B80 (SendOrientationChanged.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14015C72C (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1401A1B54 (-SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A8B80 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtSetShellCursorState(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // r13d
  struct tagRECT *v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // edi
  ULONG v13; // ecx
  __int64 v14; // rdi
  _QWORD *UserSessionState; // r14
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  __int64 MouseProcessor; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  void *Src; // [rsp+78h] [rbp+10h]

  Src = a2;
  v3 = a3;
  v4 = a1;
  v5 = 0LL;
  if ( !gbOSTestSigningEnabled )
  {
    v6 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", (const unsigned __int16 *)a2);
    if ( v6 < 0 )
    {
      v8 = v6;
LABEL_41:
      v12 = 0;
      v13 = RtlNtStatusToDosError(v8);
      goto LABEL_42;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    a2 = (_BYTE *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      a1 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      a2 = (_BYTE *)(a1 & CurrentProcessWin32Process);
    }
    if ( (a2[808] & 0x30) == 0 )
    {
      v10 = PsGetCurrentProcessWin32Process(a1);
      v11 = v10;
      if ( v10 )
        v11 = -(__int64)(*(_QWORD *)v10 != 0LL) & v10;
      if ( !(unsigned int)IsShellProcess(v11) )
      {
        v12 = 0;
        v13 = 5;
LABEL_42:
        UserSetLastError(v13);
        goto LABEL_43;
      }
    }
  }
  if ( v4 - 1 > 3 )
  {
LABEL_12:
    v12 = 0;
    v13 = 87;
    goto LABEL_42;
  }
  if ( (_DWORD)v3 )
  {
    v14 = 16 * v3;
    if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
      goto LABEL_12;
    if ( (unsigned int)v14 >= 0x2710000
      || (v5 = (struct tagRECT *)Win32AllocPoolWithQuotaZInitImpl(a1, (unsigned int)v14, 0x63736355u)) == 0LL )
    {
      v12 = 0;
      v13 = 8;
      goto LABEL_42;
    }
    if ( v14 && ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(v5, Src, (unsigned int)v14);
  }
  else if ( Src )
  {
    goto LABEL_12;
  }
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = 1;
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    v16 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v12 = 1;
  }
  v17 = v16;
  UserSessionState[3] = v16;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v17 )
      goto LABEL_32;
    *(_BYTE *)(v17 + 1708) = 1;
  }
  if ( v17 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v17) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_32:
  v20 = W32GetUserSessionState(v19, v18);
  v23 = CCursorClip::SetShellClip(*(CCursorClip **)(v20 + 36240), v5, v3);
  if ( v23 >= 0 )
  {
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v22, v21);
    if ( MouseProcessor )
    {
      *(_DWORD *)(MouseProcessor + 3016) = v4;
      v26 = v4 - 1;
      if ( v4 != 1 )
      {
        v26 = v4 - 2;
        if ( v4 != 2 )
        {
          v26 = v4 - 3;
          if ( (unsigned int)v26 >= 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5590LL);
        }
      }
      SendOrientationChanged(v25, v26);
      InputTraceLogging::Mouse::SetShellContentOrientation(v4);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v21);
  if ( v23 < 0 )
  {
    v8 = v23;
    goto LABEL_41;
  }
LABEL_43:
  if ( !v12 && v5 )
    GreDeleteFastMutex((char *)v5);
  return v12;
}
