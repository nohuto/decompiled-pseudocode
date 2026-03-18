/*
 * XREFs of RIMQueueMouseInput @ 0x1401EAB30
 * Callers:
 *     RIMIDEInjectMouseInput @ 0x1401EA358 (RIMIDEInjectMouseInput.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140219800 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueueMouseInput(struct RawInputManagerObject *a1, struct RIMDEV *a2, _OWORD *a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v10; // eax
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2321);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2322);
  v10 = *((_DWORD *)a2 + 225);
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
      v19 = *((_DWORD *)a2 + 225);
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
        53,
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
      v11 = a3;
      v12 = v6;
      do
      {
        v13 = ((unsigned __int8)*((_DWORD *)a2 + 226) + 1) & 0xF;
        *((_DWORD *)a2 + 226) = v13;
        v14 = *v11;
        v11 = (_OWORD *)((char *)v11 + 24);
        v15 = 3 * v13;
        *(_OWORD *)((char *)a2 + 8 * v15 + 908) = v14;
        *(_QWORD *)((char *)a2 + 8 * v15 + 924) = *((_QWORD *)v11 - 1);
        ++*((_DWORD *)a2 + 225);
        --v12;
      }
      while ( v12 );
    }
    *(_OWORD *)((char *)a2 + 836) = *(_OWORD *)((char *)a3 + 24 * (unsigned int)(v6 - 1));
    *(_QWORD *)((char *)a2 + 852) = *((_QWORD *)a3 + 3 * (unsigned int)(v6 - 1) + 2);
    rimProcessDeviceBufferAndStartRead(a1, a2, 1);
  }
  return v5;
}
