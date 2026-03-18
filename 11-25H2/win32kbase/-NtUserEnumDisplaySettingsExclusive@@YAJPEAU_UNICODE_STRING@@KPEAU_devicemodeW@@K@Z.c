/*
 * XREFs of ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14004BC10 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400B6240 (UpdateDirtyVisRgnTrackers.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsExclusive(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _DWORD *CurrentThreadWin32Thread; // rbx
  unsigned int Count; // eax
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rbx
  int BugCheckParameter4; // [rsp+20h] [rbp-28h]

  UserSessionSwitchEnterCrit();
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    BugCheckParameter4 = a4;
    v11 = DrvEnumDisplaySettings(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 104LL) + 80LL),
            a2,
            (__int64)a3,
            BugCheckParameter4);
  }
  else
  {
    v11 = -1073741823;
  }
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = W32GetUserSessionState(v13, v12);
    CurrentThreadWin32Thread = (_DWORD *)PsGetCurrentThreadWin32Thread();
    if ( (CurrentThreadWin32Thread[6] & 0x18) == 0x10 )
    {
      UpdateDirtyVisRgnTrackers();
      *(_DWORD *)(v14 + 19788) = 0;
      *(_QWORD *)(v14 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v14 + 19688);
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    v17 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v17;
    if ( (v17 & 0x20) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)v14, CurrentThreadWin32Thread + 8);
  }
  else
  {
    v18 = W32GetUserSessionState(v13, v12);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    {
      UpdateDirtyVisRgnTrackers();
      if ( *(_DWORD *)(v18 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v18 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v18 + 19780) > *(_DWORD *)(v18 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v18 + 19788) = 0;
      *(_QWORD *)(v18 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v18 + 19688);
      if ( *(_QWORD *)(v18 + 24) && PtiCurrent() )
        *(_BYTE *)(*(_QWORD *)(v18 + 24) + 1708LL) = 0;
      *(_QWORD *)(v18 + 24) = 0LL;
    }
    v19 = AtomicExecutionCheck::GetCount();
    if ( v19 )
      KeBugCheckEx(0x160u, v19, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    v20 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v18, v20 + 32);
    *(_DWORD *)(v20 + 24) &= ~4u;
  }
  KeLeaveCriticalRegion();
  return v11;
}
