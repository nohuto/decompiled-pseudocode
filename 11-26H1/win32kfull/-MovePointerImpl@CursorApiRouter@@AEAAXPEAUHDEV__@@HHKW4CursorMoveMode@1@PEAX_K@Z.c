/*
 * XREFs of ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x14002A69C (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 * Callees:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B130 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1400F776C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x1400F7B38 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x140252BA8 (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x140253418 (--0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14025F994 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x140287DE4 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x140287F08 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402EE65C (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 *     ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402EEA7C (-RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     DwmAsyncChangeCursorSynchronization @ 0x140346AD4 (DwmAsyncChangeCursorSynchronization.c)
 */

void __fastcall CursorApiRouter::MovePointerImpl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  void *v20; // rax
  CursorApiRouter *v21; // rcx
  CursorApiRouter *v22; // rcx
  CursorApiRouter *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]
  unsigned int v32; // [rsp+80h] [rbp+18h] BYREF
  int v33; // [rsp+88h] [rbp+20h] BYREF

  v32 = a3;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
  v12 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  v15 = 0;
  v16 = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36324) != 0;
  if ( (unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19136)
      && (unsigned __int8)IsInputProcessingActivated()
      && !(unsigned int)IsRemoteConnection() )
    {
      v19 = 1;
    }
    else
    {
      v16 = 0;
      v19 = 2;
    }
    *(_DWORD *)(a1 + 32) = v19;
    if ( *(_BYTE *)(a1 + 14) != v16 )
    {
      *(_BYTE *)(a1 + 14) = v16;
      InputTraceLogging::Cursor::Api::RequestCursorSynchronizationMode(v16);
      v19 = *(_DWORD *)(a1 + 32);
      v15 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 2;
    v19 = 2;
  }
  ExReleasePushLockExclusiveEx(a1 + 40, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 == 1 )
  {
    InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(*(_BYTE *)(a1 + 14));
    v20 = (void *)ReferenceDwmApiPort();
    if ( (int)DwmAsyncChangeCursorSynchronization(v20) < 0 )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 671LL);
    }
  }
  if ( v19 == 1 )
  {
    if ( v12 == 2 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v33);
      CursorApiRouter::DestroyGreTrailsTimerIfExists(v23);
      GreSetPointer(0LL, *(_DWORD *)a1, 0, 0);
      if ( (_BYTE)v33 )
        UserSessionSwitchLeaveCrit(v24);
    }
    CursorApiRouter::DwmMovePointer(a1, v32, a4, a6, a7, a8);
  }
  else if ( v19 == 2 )
  {
    if ( v12 == 1 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v33);
      CursorApiRouter::DwmSetPointer((CursorApiRouter *)a1, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v21) )
        CursorApiRouter::EnsureGreTrailsTimer(v22);
      if ( (_BYTE)v33 )
        UserSessionSwitchLeaveCrit(v22);
    }
    GreMovePointer(a2, v32, a4, a5);
  }
  if ( v19 != v12 )
  {
    EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v32);
    CursorApiRouter::ForceSetCurrentCursorShape((CursorApiRouter *)a1);
    if ( (_BYTE)v32 )
      UserSessionSwitchLeaveCrit(v25);
    LOBYTE(v30) = IsInputProcessingActivated();
    LOBYTE(v29) = (unsigned int)IsRemoteConnection() != 0;
    LOBYTE(v28) = *(_DWORD *)(W32GetUserSessionState(v27, v26) + 19136) != 0;
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0LL, v12, v19, v28, v29, v30);
  }
}
