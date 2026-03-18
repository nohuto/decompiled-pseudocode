/*
 * XREFs of SetMouseTrails @ 0x140241038
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     SetPointer @ 0x140123830 (SetPointer.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14026D970 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DC7BC (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 */

void __fastcall SetMouseTrails(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  CursorApiRouter *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BOOL8 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( (unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
  {
    W32GetUserSessionState(v3, v2);
    CursorApiRouter::SetMouseTrails(v4, a1);
  }
  else
  {
    SetPointer(0LL);
    v7 = a1 - 1;
    if ( !a1 )
      v7 = 0;
    *(_DWORD *)(W32GetUserSessionState(v6, v5) + 16296) = v7;
    SetPointer(1LL);
    if ( !IsRemoteConnection(v9, v8) )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 16304);
      v16 = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 16296) != 0;
      if ( v16 != (v12 != 0) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 16296) )
        {
          UserSessionState = W32GetUserSessionState(v18, v17);
          PostMessage(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 68480) + 504LL) + 24LL), 1025, 0, 0);
        }
        else
        {
          v20 = W32GetUserSessionState(v18, v17);
          FindTimer(0LL, *(_QWORD *)(v20 + 16304), 4u, 1, 0LL);
          *(_QWORD *)(W32GetUserSessionState(v22, v21) + 16304) = 0LL;
        }
      }
    }
  }
}
