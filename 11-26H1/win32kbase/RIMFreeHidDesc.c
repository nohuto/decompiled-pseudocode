/*
 * XREFs of RIMFreeHidDesc @ 0x1401323EC
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(_WORD *Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  bool v6; // r14
  __int16 v7; // bx
  __int16 v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // rcx

  if ( !Buffer )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 563LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = Buffer[20];
    v8 = Buffer[21];
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v10) = v6;
    LOBYTE(v11) = v5;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      29,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)Buffer,
      v8,
      v7);
  }
  v12 = (char *)*((_QWORD *)Buffer + 3);
  if ( v12 )
    GreDeleteFastMutex(v12, a2, a3, a4);
  v13 = (char *)*((_QWORD *)Buffer + 2);
  if ( v13 )
    GreDeleteFastMutex(v13, a2, a3, a4);
  v14 = (char *)*((_QWORD *)Buffer + 4);
  if ( v14 )
    GreDeleteFastMutex(v14, a2, a3, a4);
  GreDeleteFastMutex((char *)Buffer, a2, a3, a4);
}
