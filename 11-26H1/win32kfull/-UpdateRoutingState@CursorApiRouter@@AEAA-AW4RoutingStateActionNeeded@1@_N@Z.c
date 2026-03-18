/*
 * XREFs of ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1400F9C78
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B130 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402EEA7C (-RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 */

__int64 __fastcall CursorApiRouter::UpdateRoutingState(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax

  v4 = 0;
  result = Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 19136)
      && (unsigned __int8)IsInputProcessingActivated()
      && !IsRemoteConnection(v9, v8) )
    {
      v10 = 1;
    }
    else
    {
      a2 = 0;
      v10 = 2;
    }
    *(_DWORD *)(a1 + 32) = v10;
    if ( *(_BYTE *)(a1 + 14) != a2 )
    {
      *(_BYTE *)(a1 + 14) = a2;
      InputTraceLogging::Cursor::Api::RequestCursorSynchronizationMode(a2);
      return 1;
    }
    return v4;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 2;
  }
  return result;
}
