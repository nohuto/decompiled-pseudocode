/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A9F40 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x140116E5C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall EtwCaptureStateCallback(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  int v9; // edx
  unsigned __int64 v10; // rbp
  int v11; // edx
  unsigned int v12; // ebp
  int v13; // esi
  __int64 v14; // rcx
  char CurrentWin32kSessionId; // di
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  __int64 i; // rsi
  __int64 j; // rdi
  _QWORD *k; // r14
  int ThreadId; // r13d
  int ThreadInfoFlags; // eax
  struct tagQ *v33; // rcx
  int v34; // r12d
  unsigned int v35; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+10h] BYREF
  int v37; // [rsp+90h] [rbp+18h]

  v36 = 0;
  v35 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v6);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000000000040000uLL) != 0
    && (qword_1402A9DC8 & 0x8000000000040000uLL) == qword_1402A9DC8 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v5, 0x40000, v6) + 36384) )
    {
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v12 = v10 - *(_DWORD *)(W32GetUserSessionState(v5, v9, v6) + 36388);
      if ( v12 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
      {
        v13 = *(_DWORD *)(W32GetUserSessionState(v5, v11, v6) + 36384);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v14);
        v19 = *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 36396);
        v23 = W32GetUserSessionState(v21, v20, v22);
        McTemplateK0qqqqq_EtwWriteTransfer(
          v24,
          &WaitCursorEvent,
          v25,
          *(_DWORD *)(v23 + 36392),
          v19,
          CurrentWin32kSessionId,
          v13,
          v12);
      }
    }
  }
  v26 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000000000080000uLL) != 0
    && (qword_1402A9DC8 & 0x8000000000080000uLL) == qword_1402A9DC8 )
  {
    v27 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v5, 0x80000, v6) + 63512); i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
      {
        for ( k = *(_QWORD **)(j + 176); k != (_QWORD *)(j + 176); k = (_QWORD *)*k )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(k - 96));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(k - 96));
          v33 = (struct tagQ *)*(k - 38);
          v34 = *((_DWORD *)k + 134);
          v37 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v33, v27, &v36, &v35, 0LL, 0LL);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              (unsigned int)(v27 - v34),
              &ThreadInfoRundownEvent,
              v6,
              ThreadId,
              v37,
              v34 != 0 ? v27 - v34 : 0,
              v36,
              v35);
        }
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(v5, v26, v6, v7);
}
