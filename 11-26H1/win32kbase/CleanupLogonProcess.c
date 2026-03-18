/*
 * XREFs of CleanupLogonProcess @ 0x1401D96E0
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     GreNotifyCleanupLogonProcess @ 0x14000849C (GreNotifyCleanupLogonProcess.c)
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1401D952C (-CleanupWinlogonRpcHandle@@YAXXZ.c)
 */

char __fastcall CleanupLogonProcess(int a1, int a2, int a3)
{
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  Gre::Base *v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 69112) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 285);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 69112) )
  {
    CleanupWinlogonRpcHandle(v4);
    *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 63536) = 0LL;
    GreNotifyCleanupLogonProcess(v9);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 36424) )
  {
    UserSessionState = W32GetUserSessionState(v11, v10, v12);
    ZwClose(*(HANDLE *)(UserSessionState + 36424));
    *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 36424) = 0LL;
  }
  LOBYTE(v17) = isInputVirtualizationEnabled(v11, v10, v12);
  if ( (_BYTE)v17 )
  {
    v17 = W32GetUserSessionState(v19, v18, v20);
    if ( *(_QWORD *)(v17 + 19408) )
    {
      v24 = W32GetUserSessionState(v22, v21, v23);
      LOBYTE(v17) = KeSetEvent(*(PRKEVENT *)(v24 + 19408), 1, 0);
    }
  }
  return v17;
}
