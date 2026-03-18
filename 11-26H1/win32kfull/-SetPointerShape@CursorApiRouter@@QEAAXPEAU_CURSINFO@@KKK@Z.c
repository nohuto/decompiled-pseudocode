/*
 * XREFs of ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     GreSetPointer @ 0x14001AE9C (GreSetPointer.c)
 *     GreMovePointer @ 0x14006B170 (GreMovePointer.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x1400F7B38 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1400F9C18 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1400F9C78 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1400F9D10 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x140252BA8 (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x140287DE4 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x140287F08 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402EE65C (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 */

void __fastcall CursorApiRouter::SetPointerShape(
        CursorApiRouter *this,
        struct _CURSINFO *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  int updated; // eax
  unsigned int v14; // r13d
  int v15; // edi
  CursorApiRouter *v16; // rcx
  CursorApiRouter *v17; // rcx
  unsigned __int8 v18; // di
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax

  InputTraceLogging::Cursor::Api::SetPointerShape((__int64)a2, a3, a4);
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  *(_DWORD *)this = a3;
  *((_BYTE *)this + 13) = a2 == 0LL;
  if ( a2 && (a3 & 0x10) != 0 )
    *((_DWORD *)this + 1) |= 1u;
  else
    *((_DWORD *)this + 1) &= ~1u;
  v9 = *((_DWORD *)this + 1);
  v10 = v9 | 2;
  v11 = v9 & 0xFFFFFFFD;
  if ( !a4 )
    v10 = v11;
  *((_DWORD *)this + 1) = v10;
  v12 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 2) = a4;
  updated = CursorApiRouter::UpdateRoutingState((__int64)this, (a3 & 0x20) != 0);
  v14 = *((_DWORD *)this + 8);
  v15 = updated;
  W32ReleasePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  CursorApiRouter::HandleRoutingStateAction((__int64)this, v15);
  if ( v14 == 1 )
  {
    if ( v12 == 2 )
    {
      CursorApiRouter::DestroyGreTrailsTimerIfExists((CursorApiRouter *)(v14 - 1));
      GreSetPointer(0LL, *(_DWORD *)this, 0, 0);
      CursorApiRouter::DwmMovePointer(this, *((unsigned int *)this + 6), *((unsigned int *)this + 7), 1LL, 0LL, 0LL);
    }
    if ( !*((_BYTE *)this + 12) )
      CursorApiRouter::DwmSetPointer(this, a2);
  }
  else if ( v14 == 2 )
  {
    if ( v12 == 1 )
    {
      CursorApiRouter::DwmSetPointer(this, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v16) )
        CursorApiRouter::EnsureGreTrailsTimer(v17);
      GreMovePointer(*((_QWORD *)this + 2), *((_DWORD *)this + 6), *((_DWORD *)this + 7), 1);
    }
    GreSetPointer(a2, a3, a4, a5);
  }
  if ( v14 != v12 )
  {
    v18 = IsInputProcessingActivated();
    v21 = IsRemoteConnection(v20, v19);
    UserSessionState = W32GetUserSessionState(v23, v22);
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(
      1,
      v12,
      v14,
      *(_DWORD *)(UserSessionState + 19136) != 0,
      v21,
      v18);
  }
}
