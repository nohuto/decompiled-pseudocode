/*
 * XREFs of LeaveCrit @ 0x1401675A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400B6240 (UpdateDirtyVisRgnTrackers.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall LeaveCrit(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  __int64 v5; // rdx
  unsigned int *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int Count; // eax
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax

  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    CurrentThreadWin32Thread = (unsigned int *)PsGetCurrentThreadWin32Thread();
    v7 = CurrentThreadWin32Thread[6];
    LOBYTE(v7) = v7 & 0x18;
    if ( (_BYTE)v7 == 16 )
    {
      UpdateDirtyVisRgnTrackers(v7, v5);
      *(_DWORD *)(UserSessionState + 19788) = 0;
      *(_QWORD *)(UserSessionState + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(UserSessionState + 19688, v8);
      *(_QWORD *)(UserSessionState + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    v10 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v10;
    if ( (v10 & 0x20) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 8);
  }
  else
  {
    v11 = W32GetUserSessionState(v3, v2);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    {
      UpdateDirtyVisRgnTrackers(v13, v12);
      if ( *(_DWORD *)(v11 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v11 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v11 + 19780) > *(_DWORD *)(v11 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v11 + 19788) = 0;
      *(_QWORD *)(v11 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v11 + 19688, v14);
      if ( *(_QWORD *)(v11 + 24) && PtiCurrent() )
        *(_BYTE *)(*(_QWORD *)(v11 + 24) + 1708LL) = 0;
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    v15 = AtomicExecutionCheck::GetCount();
    if ( v15 )
      KeBugCheckEx(0x160u, v15, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    if ( !a1 )
      a1 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v11, a1 + 32);
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
  KeLeaveCriticalRegion();
}
