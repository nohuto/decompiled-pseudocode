/*
 * XREFs of UninitializeInputSensorsOnSharedThread @ 0x140216EDC
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1402189B0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140082720 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IOCPDispatcher_Destroy @ 0x140210EC0 (IOCPDispatcher_Destroy.c)
 *     CleanupSensorExplicitly @ 0x140215F30 (CleanupSensorExplicitly.c)
 */

__int64 __fastcall UninitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  _DWORD *v7; // rbx
  __int64 v8; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19216) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19216), 1);
  }
  v5 = 3LL;
  v7 = (_DWORD *)(W32GetUserSessionState(v3, v2) + 3128);
  do
  {
    v8 = (unsigned int)(*v7 - 1);
    if ( (unsigned int)v8 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1227);
    if ( *v7 == 2 )
      CleanupSensorExplicitly((unsigned int)v7[4], v6);
    v7 += 12;
    --v5;
  }
  while ( v5 );
  return IOCPDispatcher_Destroy(v8, v6);
}
