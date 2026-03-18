/*
 * XREFs of NtSetShellCursorState @ 0x1401E1D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     IsShellProcess @ 0x1401630B4 (IsShellProcess.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     SendOrientationChanged @ 0x140199390 (SendOrientationChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1401C5A7C (-SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401CC9B0 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtSetShellCursorState(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // r12
  int v4; // r15d
  struct tagRECT *v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  ULONG v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  _QWORD *UserSessionState; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 MouseProcessor; // rax
  double v33; // xmm0_8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  volatile void *Address; // [rsp+68h] [rbp+10h]

  Address = a2;
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
        v11 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v10 >> 64) & v10;
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
  if ( (unsigned int)(v4 - 1) > 3 )
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
    if ( v14 >= 0x2710000 || (v5 = (struct tagRECT *)Win32AllocPoolWithQuotaZInitImpl(a1, v14, 0x63736355u)) == 0LL )
    {
      v12 = 0;
      v13 = 8;
      goto LABEL_42;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, v15);
    ProbeForRead(Address, 16 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove(v5, (const void *)Address, v14);
  }
  else if ( Address )
  {
    goto LABEL_12;
  }
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v12 = 1;
  v19 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          1LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  LODWORD(v22) = v19;
  UserSessionState[3] = v19;
  if ( v19 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v19 + 1360) >= 0 )
    {
      v23 = PsGetCurrentProcessWin32Process(v19);
      if ( !v23 )
        goto LABEL_30;
      v22 = -*(_QWORD *)v23;
      v20 = -(__int64)(*(_QWORD *)v23 != 0LL);
      v24 = v20 & v23;
      if ( !v24 || *(_BYTE *)(v24 + 1200) != 1 )
        goto LABEL_30;
      v25 = 1;
    }
    else
    {
      v25 = 0;
    }
    if ( v25 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v20, v21);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
LABEL_30:
  v26 = W32GetUserSessionState(v22, v20, v21);
  v29 = CCursorClip::SetShellClip(*(CCursorClip **)(v26 + 36272), v5, v3);
  if ( v29 >= 0 )
  {
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v28, v27, v30);
    if ( MouseProcessor )
    {
      *(_DWORD *)(MouseProcessor + 3016) = v4;
      if ( v4 != 1 )
      {
        switch ( v4 )
        {
          case 2:
            v33 = DOUBLE_1_570796326794897;
            goto LABEL_38;
          case 3:
            v33 = DOUBLE_3_141592653589793;
            goto LABEL_38;
          case 4:
            v33 = DOUBLE_4_71238898038469;
            goto LABEL_38;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 5601);
      }
      v33 = 0.0;
LABEL_38:
      SendOrientationChanged(v33);
      InputTraceLogging::Mouse::SetShellContentOrientation();
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(v28, v27, v30, v31);
  if ( v29 < 0 )
  {
    v8 = v29;
    goto LABEL_41;
  }
LABEL_43:
  if ( !v12 && v5 )
    GreDeleteFastMutex((char *)v5, v34, v35, v36);
  return v12;
}
