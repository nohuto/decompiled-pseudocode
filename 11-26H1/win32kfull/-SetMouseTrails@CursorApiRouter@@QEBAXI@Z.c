/*
 * XREFs of ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C
 * Callers:
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x140287DE4 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 *     ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x140287F08 (-EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ.c)
 */

void __fastcall CursorApiRouter::SetMouseTrails(CursorApiRouter *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  CursorApiRouter *v8; // rcx
  CursorApiRouter *v9; // rcx

  SetPointerInternal(0LL, 6LL);
  v5 = a2 - 1;
  if ( !a2 )
    v5 = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  LOBYTE(v7) = 1;
  *(_DWORD *)(UserSessionState + 16288) = v5;
  SetPointerInternal(v7, 6LL);
  if ( CursorApiRouter::IsGreTrailsTimerNeeded(v8) )
    CursorApiRouter::EnsureGreTrailsTimer(v9);
  else
    CursorApiRouter::DestroyGreTrailsTimerIfExists(v9);
}
