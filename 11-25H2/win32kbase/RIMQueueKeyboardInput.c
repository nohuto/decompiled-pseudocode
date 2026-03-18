/*
 * XREFs of RIMQueueKeyboardInput @ 0x1401EA96C
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1401EA290 (RIMIDEInjectKeyboardInput.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140219760 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v17; // bp
  bool v18; // r14
  int v19; // ebx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx

  v4 = *((_DWORD *)a2 + 42);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2248);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2249);
  v10 = *((_DWORD *)a2 + 169);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput((__int64)a2, 7u);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *((_DWORD *)a2 + 169);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        52,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v19,
        16,
        v6);
    }
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v11 = v6;
      do
      {
        v12 = *a3;
        v13 = *((_DWORD *)a3 + 2);
        a3 = (__int64 *)((char *)a3 + 12);
        v14 = ((unsigned __int8)*((_DWORD *)a2 + 170) + 1) & 0xF;
        *((_DWORD *)a2 + 170) = v14;
        v15 = 3 * (v14 + 57);
        *(_QWORD *)((char *)a2 + 4 * v15) = v12;
        *((_DWORD *)a2 + v15 + 2) = v13;
        ++*((_DWORD *)a2 + 169);
        --v11;
      }
      while ( v11 );
    }
    rimProcessDeviceBufferAndStartRead(a1, a2, 1);
  }
  return v5;
}
