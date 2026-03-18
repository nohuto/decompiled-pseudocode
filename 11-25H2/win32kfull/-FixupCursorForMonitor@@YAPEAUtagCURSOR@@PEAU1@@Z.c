/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C8FC
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14004C710 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14004C98C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1, __int64 a2)
{
  struct tagCURSOR *v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  __int64 UserSessionState; // rax
  unsigned int CurrentCursorSize; // eax
  __int64 v7; // r9
  unsigned int v8; // r10d
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // rax
  int v12; // edx

  v2 = a1;
  if ( a1 )
  {
    v3 = 0LL;
    v4 = 0x7FFFFFFF;
    UserSessionState = W32GetUserSessionState(a1, a2);
    CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(UserSessionState + 36344));
    v7 = *((_QWORD *)v2 + 6);
    v8 = CurrentCursorSize;
    if ( v7 )
    {
      do
      {
        v9 = v4;
        v10 = *(_DWORD *)(v7 + 76) - v8;
        v11 = v7;
        v7 = *(_QWORD *)(v7 + 40);
        v12 = -v10;
        if ( v10 > 0 )
          v12 = v10;
        if ( v12 < v4 )
          v4 = v12;
        if ( v12 >= v9 )
          v11 = v3;
        v3 = v11;
      }
      while ( v7 );
      if ( v11 )
        return (struct tagCURSOR *)v11;
    }
  }
  return v2;
}
