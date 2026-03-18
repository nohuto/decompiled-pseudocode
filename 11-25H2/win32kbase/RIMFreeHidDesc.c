/*
 * XREFs of RIMFreeHidDesc @ 0x1401E0854
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(_WORD *Buffer, __int64 a2)
{
  char v3; // bp
  bool v4; // r14
  __int16 v5; // bx
  __int16 v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx

  if ( !Buffer )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = Buffer[20];
    v6 = Buffer[21];
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v4;
    LOBYTE(v9) = v3;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      29,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)Buffer,
      v6,
      v5);
  }
  v10 = (char *)*((_QWORD *)Buffer + 3);
  if ( v10 )
    GreDeleteFastMutex(v10);
  v11 = (char *)*((_QWORD *)Buffer + 2);
  if ( v11 )
    GreDeleteFastMutex(v11);
  v12 = (char *)*((_QWORD *)Buffer + 4);
  if ( v12 )
    GreDeleteFastMutex(v12);
  GreDeleteFastMutex((char *)Buffer);
}
