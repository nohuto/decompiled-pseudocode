/*
 * XREFs of NtUserGetKeyState @ 0x140170360
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140060D68 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140060DC8 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1400AE580 (IsThreadCrossSessionAttached.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     _GetKeyState @ 0x1400C6770 (_GetKeyState.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401ABF70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // r14
  __int64 v9; // rdx
  unsigned int *CurrentThreadWin32Thread; // rdi
  __int64 v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (*v20)(void); // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rdi
  _BYTE *v31; // rax
  __int64 v32; // rdx
  _DWORD *v33; // rcx
  __int16 KeyState; // r14
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int ThreadProcessId; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // [rsp+60h] [rbp-48h] BYREF
  int v49; // [rsp+68h] [rbp-40h]
  __int64 v50; // [rsp+B8h] [rbp+10h]
  __int64 v51; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v52; // [rsp+C8h] [rbp+20h]

  EnterLeaveCritShared::EnterLeaveCritShared(&v51, 1LL);
  v3 = v51;
  v4 = (__int64 *)(v51 + 472);
  v5 = *(unsigned int *)(*(_QWORD *)(v51 + 472) + 412LL);
  if ( (v5 & 1) == 0 )
    goto LABEL_49;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    CurrentThreadWin32Thread = (unsigned int *)PsGetCurrentThreadWin32Thread();
    v11 = CurrentThreadWin32Thread[6];
    LOBYTE(v11) = v11 & 0x18;
    if ( (_BYTE)v11 == 16 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v9) + 48) + 3968LL);
      if ( v12 )
        v12();
      *(_DWORD *)(UserSessionState + 19788) = 0;
      *(_QWORD *)(UserSessionState + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(UserSessionState + 19688, v13);
      *(_QWORD *)(UserSessionState + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    v14 = PsGetCurrentThreadWin32Thread();
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 28);
      if ( v15 )
        KeBugCheckEx(0x160u, v15, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v16 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v16;
    if ( (v16 & 0x20) != 0 )
    {
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
      v3 = v51;
    }
    ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 8);
  }
  else
  {
    v17 = W32GetUserSessionState(v7, v6);
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() == 2 )
    {
      v20 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 3968LL);
      if ( v20 )
        v20();
      if ( *(_DWORD *)(v17 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v17 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v17 + 19780) > *(_DWORD *)(v17 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v17 + 19788) = 0;
      *(_QWORD *)(v17 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v17 + 19688, v21);
      if ( *(_QWORD *)(v17 + 24) )
      {
        v22 = (_QWORD *)PsGetCurrentThreadWin32Thread();
        if ( v22 )
        {
          if ( *v22 )
            *(_BYTE *)(*(_QWORD *)(v17 + 24) + 1708LL) = 0;
        }
      }
      *(_QWORD *)(v17 + 24) = 0LL;
    }
    v23 = PsGetCurrentThreadWin32Thread();
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 28);
      if ( v24 )
        KeBugCheckEx(0x160u, v24, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v25 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v17, v25 + 32);
    *(_DWORD *)(v25 + 24) &= ~4u;
  }
  KeLeaveCriticalRegion();
  v28 = W32GetUserSessionState(v27, v26);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v29 = PsGetCurrentThreadWin32Thread();
    KeEnterCriticalRegion();
    _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
      *(struct _FAST_ERESOURCE **)v28,
      (struct _W32THREADNONPAGED *)v29);
    if ( *(_QWORD *)v29 )
    {
      if ( IsThreadCrossSessionAttached() )
      {
        *(_DWORD *)(v29 + 24) |= 2u;
        v30 = 0LL;
      }
      else
      {
        v30 = *(_QWORD *)v29;
        *(_BYTE *)(v30 + 1708) = 1;
      }
    }
    else
    {
      v30 = 0LL;
    }
  }
  else
  {
    v30 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v28, 0LL);
  }
  *(_QWORD *)(v28 + 24) = v30;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_44;
  if ( v30 )
  {
    *(_BYTE *)(v30 + 1708) = 1;
LABEL_44:
    if ( v30 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v30) )
    {
      DestroySharedUserCritDeferredUnlockList(v28 + 19688, v5);
      DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(v28 + 19744));
      DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(v28 + 19728));
    }
  }
  v2 = *v4;
  if ( (*(_DWORD *)(*v4 + 412) & 1) != 0 )
    PostUpdateKeyStateEvent(v2, v5);
LABEL_49:
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v2 = 0LL;
    v31 = byte_1402617C0;
    while ( *v31 != (_BYTE)a1 )
    {
      v2 = (unsigned int)(v2 + 1);
      ++v31;
      if ( (unsigned int)v2 >= 0xE )
      {
        v5 = 0x140000000uLL;
        switch ( (char)a1 )
        {
          case 91:
          case 92:
          case -96:
          case -95:
          case -94:
          case -93:
          case -92:
          case -91:
            goto LABEL_58;
          default:
            if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
            {
              KeyState = 0;
              goto LABEL_62;
            }
            if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1u) )
              goto LABEL_58;
            v35 = *(_QWORD *)(W32GetUserSessionState(v2, v5) + 18888);
            v50 = *(_QWORD *)(v35 + 448);
            v36 = *(_DWORD *)(v35 + 456);
            v38 = *(_QWORD *)(W32GetUserSessionState(v35, v37) + 18888);
            v48 = v50;
            v49 = v36;
            EtwTraceUIPIInputError(v3, 0LL, v38, &v48, 3);
            KeyState = 0;
            break;
        }
        goto LABEL_62;
      }
    }
  }
LABEL_58:
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v2, v5) + 19600) + 8LL) & 1) != 0
    && (ThreadProcessId = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v3),
        v33 = *(_DWORD **)(W32GetUserSessionState(v41, v40) + 19600),
        (ThreadProcessId & 0xFFFFFFFC) == *v33) )
  {
    KeyState = 0;
  }
  else
  {
    KeyState = GetKeyState(a1);
  }
LABEL_62:
  v42 = *(_DWORD **)(W32GetUserSessionState(v33, v32) + 19600);
  v43 = (unsigned int)v42[2];
  if ( (v43 & 1) != 0
    && (v44 = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v3),
        v42 = *(_DWORD **)(W32GetUserSessionState(v46, v45) + 19600),
        (v44 & 0xFFFFFFFC) == *v42) )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 520) + 112LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v51 + 520) + 116LL) = 0LL;
  }
  else
  {
    v52 = *(_QWORD *)(W32GetUserSessionState(v42, v43) + 19872);
    *(_DWORD *)(*(_QWORD *)(v3 + 520) + 112LL) = *(_DWORD *)(v52 + 6984);
    v43 = *(_QWORD *)(*(_QWORD *)(v51 + 472) + 256LL);
    *(_QWORD *)(*(_QWORD *)(v51 + 520) + 116LL) = v43;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v43);
  return KeyState;
}
