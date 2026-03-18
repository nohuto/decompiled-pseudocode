/*
 * XREFs of CleanupLogonProcess @ 0x14016BCA0
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreNotifyCleanupLogonProcess @ 0x1401A1CDC (GreNotifyCleanupLogonProcess.c)
 *     ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1401B6978 (-CleanupWinlogonRpcHandle@@YAXXZ.c)
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline @ 0x1401B6B5C (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline.c)
 *     WmsgpDisconnect @ 0x1402CA6D8 (WmsgpDisconnect.c)
 */

char __fastcall CleanupLogonProcess(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax

  if ( (unsigned int)Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    if ( a1 )
    {
      if ( *(_QWORD *)(UserSessionState + 69120) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 291LL);
    }
    else if ( *(_QWORD *)(UserSessionState + 69120) )
    {
      CleanupWinlogonRpcHandle();
      *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63544) = 0LL;
      GreNotifyCleanupLogonProcess();
    }
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 69120) )
  {
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63544) = 0LL;
    GreNotifyCleanupLogonProcess();
    v11 = W32GetUserSessionState(v10, v9);
    WmsgpDisconnect((RPC_BINDING_HANDLE *)(v11 + 69120));
    *(_QWORD *)(W32GetUserSessionState(v13, v12) + 69120) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36384) )
  {
    v16 = W32GetUserSessionState(v15, v14);
    ZwClose(*(HANDLE *)(v16 + 36384));
    *(_QWORD *)(W32GetUserSessionState(v18, v17) + 36384) = 0LL;
  }
  LOBYTE(v19) = isInputVirtualizationEnabled(v15, v14);
  if ( (_BYTE)v19 )
  {
    v19 = W32GetUserSessionState(v21, v20);
    if ( *(_QWORD *)(v19 + 19376) )
    {
      v24 = W32GetUserSessionState(v23, v22);
      LOBYTE(v19) = KeSetEvent(*(PRKEVENT *)(v24 + 19376), 1, 0);
    }
  }
  return v19;
}
