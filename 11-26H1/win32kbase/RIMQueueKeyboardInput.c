/*
 * XREFs of RIMQueueKeyboardInput @ 0x1402098CC
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x14020943C (RIMIDEInjectKeyboardInput.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x14021E188 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140070FE4 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  char v18; // si
  char v19; // r14
  int v20; // ebx
  __int64 UserSessionState; // rax

  v4 = *((_DWORD *)a2 + 42);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2237);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2238);
  v10 = *((_DWORD *)a2 + 169);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput((__int64)a2, 7u);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *((_DWORD *)a2 + 169);
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
      WPP_RECORDER_AND_TRACE_SF_ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(UserSessionState + 19368),
        2u,
        1u,
        0x34u,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v20,
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
