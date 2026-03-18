/*
 * XREFs of ?TraceCurrentState@CursorApiRouter@@QEBAXXZ @ 0x1400F7ABC
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1400F776C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x1400F7B38 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 */

void __fastcall CursorApiRouter::TraceCurrentState(CursorApiRouter *this)
{
  char v2; // di
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  bool v7; // [rsp+20h] [rbp-18h]
  char v8; // [rsp+28h] [rbp-10h]

  v2 = IsInputProcessingActivated();
  v3 = IsRemoteConnection();
  v8 = v2;
  LOBYTE(v6) = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19136) != 0;
  v7 = v3 != 0;
  InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0LL, 0LL, *((unsigned int *)this + 8), v6, v7, v8);
  InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(*((_BYTE *)this + 14));
}
