/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x14012E9F4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 *     rimDestroyDeadzone @ 0x14017F5E4 (rimDestroyDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAssignPreparsedData @ 0x1401B88FC (RIMAssignPreparsedData.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  CTouchProcessor *v6; // rdx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r15
  char v11; // si
  bool v12; // r14
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char *v16; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 456);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2937LL);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 440), a2, v2);
  v10 = v5;
  if ( v5 < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v7 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v7 & 1) == 0)
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v7, (_DWORD)WPP_GLOBAL_Control, v8);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        39,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
        v10);
    }
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v16 = *(char **)(a1 + 1048);
    if ( v16 )
    {
      GreDeleteFastMutex(v16, (__int64)v6, v8, v9);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    rimDestroyDeadzone();
  }
  result = RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 456) = 0LL;
  return result;
}
