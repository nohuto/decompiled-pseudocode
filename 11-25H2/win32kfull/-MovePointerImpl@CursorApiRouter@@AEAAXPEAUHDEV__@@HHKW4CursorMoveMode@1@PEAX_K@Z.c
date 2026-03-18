/*
 * XREFs of ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1400603DC (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x140060460 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 * Callees:
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x140219EE8 (--0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140221338 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14022655C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402DB688 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x1402DB6EC (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402DB7A0 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402DB7F4 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DBE90 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DBF60 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1402DC894 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 */

__int64 __fastcall CursorApiRouter::MovePointerImpl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int updated; // eax
  unsigned int v17; // r14d
  unsigned int v18; // edi
  __int64 result; // rax
  CursorApiRouter *v20; // rcx
  CursorApiRouter *v21; // rcx
  CursorApiRouter *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-38h]
  int v29; // [rsp+28h] [rbp-30h]
  char v30; // [rsp+70h] [rbp+18h] BYREF

  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 40), 0);
  v12 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  LOBYTE(v15) = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36292) != 0;
  updated = CursorApiRouter::UpdateRoutingState(a1, v15);
  v17 = *(_DWORD *)(a1 + 32);
  v18 = updated;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 40), 0);
  result = CursorApiRouter::HandleRoutingStateAction(a1, v18);
  if ( v17 == 1 )
  {
    if ( v12 == 2 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v30);
      CursorApiRouter::DestroyGreTrailsTimerIfExists(v22);
      GreSetPointer(0LL, *(_DWORD *)a1);
      if ( v30 )
        UserSessionSwitchLeaveCrit(v23);
    }
    result = CursorApiRouter::DwmMovePointer(a1, a3, a4, a6, a7, a8);
  }
  else if ( v17 == 2 )
  {
    if ( v12 == 1 )
    {
      EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v30);
      CursorApiRouter::DwmSetPointer((CursorApiRouter *)a1, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v20) )
        CursorApiRouter::EnsureGreTrailsTimer(v21);
      if ( v30 )
        UserSessionSwitchLeaveCrit(v21);
    }
    result = GreMovePointer(a2, a3, a4, a5);
  }
  if ( v17 != v12 )
  {
    EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld((EnterLeaveSharedCritIfNotHeld *)&v30);
    CursorApiRouter::ForceSetCurrentCursorShape((CursorApiRouter *)a1);
    if ( v30 )
      UserSessionSwitchLeaveCrit(v24);
    LOBYTE(v29) = IsInputProcessingActivated();
    LOBYTE(v28) = (unsigned int)IsRemoteConnection() != 0;
    LOBYTE(v27) = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 19096) != 0;
    return InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0LL, v12, v17, v27, v28, v29);
  }
  return result;
}
