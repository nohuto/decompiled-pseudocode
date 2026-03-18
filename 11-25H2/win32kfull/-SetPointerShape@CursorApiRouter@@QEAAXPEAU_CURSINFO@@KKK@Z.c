/*
 * XREFs of ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C
 * Callers:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     GreMovePointer @ 0x14008E890 (GreMovePointer.c)
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401C6D38 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140221338 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402DB688 (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x1402DB6EC (-DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402DB7A0 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402DB7F4 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DBE90 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DBF60 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1402DC894 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
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
  __int64 v12; // rdx
  int v13; // ebp
  unsigned int updated; // eax
  int v15; // r13d
  unsigned int v16; // edi
  CursorApiRouter *v17; // rcx
  CursorApiRouter *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx

  InputTraceLogging::Cursor::Api::SetPointerShape(a2);
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
  v12 = a3 >> 5;
  *((_DWORD *)this + 1) = v10;
  LOBYTE(v12) = (a3 & 0x20) != 0;
  v13 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 2) = a4;
  updated = CursorApiRouter::UpdateRoutingState(this, v12);
  v15 = *((_DWORD *)this + 8);
  v16 = updated;
  W32ReleasePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0LL);
  CursorApiRouter::HandleRoutingStateAction(this, v16);
  if ( v15 == 1 )
  {
    if ( v13 == 2 )
    {
      CursorApiRouter::DestroyGreTrailsTimerIfExists((CursorApiRouter *)(unsigned int)(v15 - 1));
      GreSetPointer(0LL, *(unsigned int *)this, 0, 0);
      CursorApiRouter::DwmMovePointer(this, *((unsigned int *)this + 6), *((unsigned int *)this + 7), 1LL, 0LL, 0LL);
    }
    if ( !*((_BYTE *)this + 12) )
      CursorApiRouter::DwmSetPointer(this, a2);
  }
  else if ( v15 == 2 )
  {
    if ( v13 == 1 )
    {
      CursorApiRouter::DwmSetPointer(this, 0LL);
      if ( CursorApiRouter::IsGreTrailsTimerNeeded(v17) )
        CursorApiRouter::EnsureGreTrailsTimer(v18);
      GreMovePointer(*((_QWORD *)this + 2), *((unsigned int *)this + 6), *((_DWORD *)this + 7), 1);
    }
    GreSetPointer((__int64)a2, a3, a4, a5);
  }
  if ( v15 != v13 )
  {
    IsInputProcessingActivated();
    IsRemoteConnection(v20, v19);
    W32GetUserSessionState(v22, v21);
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(1);
  }
}
