/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x140094120
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall UserSessionSwitchLeaveCrit(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  LONG v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  _DWORD *CurrentThreadWin32Thread; // rbx
  void (*v9)(void); // rax
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rdi
  void (*v14)(void); // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = UserSessionState;
  v4 = *(_DWORD *)(UserSessionState + 68880);
  if ( v4 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 68872), 0, v4, 0);
    *(_DWORD *)(v3 + 68880) = 0;
  }
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = W32GetUserSessionState(v6, v5);
    CurrentThreadWin32Thread = (_DWORD *)PsGetCurrentThreadWin32Thread();
    if ( (CurrentThreadWin32Thread[6] & 0x18) == 0x10 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3968LL);
      if ( v9 )
        v9();
      *(_DWORD *)(v7 + 19788) = 0;
      *(_QWORD *)(v7 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v7 + 19688);
      *(_QWORD *)(v7 + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    v10 = PsGetCurrentThreadWin32Thread();
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 28);
      if ( v11 )
        KeBugCheckEx(0x160u, v11, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v12 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v12;
    if ( (v12 & 0x20) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)v7, CurrentThreadWin32Thread + 8);
  }
  else
  {
    v13 = W32GetUserSessionState(v6, v5);
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() == 2 )
    {
      v14 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3968LL);
      if ( v14 )
        v14();
      if ( *(_DWORD *)(v13 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v13 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v13 + 19780) > *(_DWORD *)(v13 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v13 + 19788) = 0;
      *(_QWORD *)(v13 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v13 + 19688);
      if ( *(_QWORD *)(v13 + 24) )
      {
        v15 = (_QWORD *)PsGetCurrentThreadWin32Thread();
        if ( v15 )
        {
          if ( *v15 )
            *(_BYTE *)(*(_QWORD *)(v13 + 24) + 1708LL) = 0;
        }
      }
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    v16 = PsGetCurrentThreadWin32Thread();
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 28);
      if ( v17 )
        KeBugCheckEx(0x160u, v17, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v18 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v13, v18 + 32);
    *(_DWORD *)(v18 + 24) &= ~4u;
  }
  KeLeaveCriticalRegion();
}
