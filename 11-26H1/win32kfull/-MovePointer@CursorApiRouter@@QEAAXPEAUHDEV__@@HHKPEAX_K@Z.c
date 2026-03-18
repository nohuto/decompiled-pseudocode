/*
 * XREFs of ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x14006B018 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
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

void __fastcall CursorApiRouter::MovePointer(
        CursorApiRouter *this,
        HDEV a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  char v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  CursorApiRouter *v22; // rcx
  CursorApiRouter *v23; // rcx
  CursorApiRouter *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // [rsp+20h] [rbp-48h]
  int v31; // [rsp+28h] [rbp-40h]
  unsigned int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v33 = a3;
  InputTraceLogging::Cursor::Api::MovePointer(a3, a4, a5, a6, a7);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v11 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = a4;
  v14 = 0;
  v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 36324) != 0;
  if ( (unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 19136)
      && (unsigned __int8)IsInputProcessingActivated()
      && !(unsigned int)IsRemoteConnection() )
    {
      v18 = 1;
    }
    else
    {
      v15 = 0;
      v18 = 2;
    }
    *((_DWORD *)this + 8) = v18;
    if ( *((_BYTE *)this + 14) != v15 )
    {
      *((_BYTE *)this + 14) = v15;
      InputTraceLogging::Cursor::Api::RequestCursorSynchronizationMode(v15);
      v18 = *((_DWORD *)this + 8);
      v14 = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 8) = 2;
    v18 = 2;
  }
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 == 1 )
  {
    InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(*((_BYTE *)this + 14));
    v21 = (void *)ReferenceDwmApiPort(v20, v19);
    if ( (int)DwmAsyncChangeCursorSynchronization(v21) < 0 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 671LL);
    }
  }
  if ( v18 == 1 )
  {
    if ( v11 == 2 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v34);
      CursorApiRouter::DestroyGreTrailsTimerIfExists(v24);
      GreSetPointer(0LL, *(_DWORD *)this, 0, 0);
      if ( (_BYTE)v34 )
        UserSessionSwitchLeaveCrit(v25);
    }
    CursorApiRouter::DwmMovePointer(this, v33, a4, 0LL, a6, a7);
  }
  else if ( v18 == 2 )
  {
    if ( v11 == 1 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v34);
      CursorApiRouter::DwmSetPointer(this, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v22) )
        CursorApiRouter::EnsureGreTrailsTimer(v23);
      if ( (_BYTE)v34 )
        UserSessionSwitchLeaveCrit(v23);
    }
    GreMovePointer(a2, v33, a4, a5);
  }
  if ( v18 != v11 )
  {
    EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v33);
    CursorApiRouter::ForceSetCurrentCursorShape(this);
    if ( (_BYTE)v33 )
      UserSessionSwitchLeaveCrit(v26);
    LOBYTE(v31) = IsInputProcessingActivated();
    LOBYTE(v30) = (unsigned int)IsRemoteConnection() != 0;
    LOBYTE(v29) = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 19136) != 0;
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0LL, v11, v18, v29, v30, v31);
  }
}
