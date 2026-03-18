/*
 * XREFs of UninitializeInputSensorsOnSharedThread @ 0x14021C3F4
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x14021D880 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1400E9D80 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CleanupSensorExplicitly @ 0x140196C90 (CleanupSensorExplicitly.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IOCPDispatcher_Destroy @ 0x140218AE0 (IOCPDispatcher_Destroy.c)
 */

__int64 __fastcall UninitializeInputSensorsOnSharedThread(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // rbx
  int v11; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19248) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19248), 1);
  }
  v7 = 3LL;
  v10 = (_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 3128);
  do
  {
    if ( (unsigned int)(*v10 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1245);
    if ( *v10 == 2 )
      CleanupSensorExplicitly(v10[4], v8, v11);
    v10 += 12;
    --v7;
  }
  while ( v7 );
  return IOCPDispatcher_Destroy(v9, v8, v11);
}
