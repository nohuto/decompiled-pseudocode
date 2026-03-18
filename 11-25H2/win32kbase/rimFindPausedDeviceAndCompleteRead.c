/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x140036768
 * Callers:
 *     rimCompleteReads @ 0x1400357E4 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1)
{
  struct RawInputManagerObject **v1; // rsi
  struct RawInputManagerObject *v3; // rbx
  unsigned int v4; // r14d
  char v5; // r15
  struct RIMDEV *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  struct RawInputManagerObject **v9; // rcx
  char v10; // bl
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v1 = (struct RawInputManagerObject **)((char *)a1 + 784);
  v3 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 98);
  v4 = -1073741823;
  if ( v3 != (struct RawInputManagerObject *)((char *)a1 + 784) )
  {
    while ( 1 )
    {
      v5 = (_BYTE)v3 + 96;
      if ( *((_DWORD *)v3 - 10) == 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 252LL);
      if ( *((_DWORD *)v3 - 10) == 2 && (*((_DWORD *)v3 + 24) & 0x80u) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 253LL);
      if ( *((struct RawInputManagerObject **)v3 + 29) != a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 254LL);
      v6 = (struct RawInputManagerObject *)((char *)v3 - 88);
      if ( v3 == (struct RawInputManagerObject *)160 )
        v6 = 0LL;
      if ( ((unsigned int)RimDeviceTypeToRimInputType(v6, *((unsigned int *)v3 - 10)) & *((_DWORD *)a1 + 21)) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      v8 = *(_QWORD *)v3;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v3 + 8LL) != v3
        || (v9 = (struct RawInputManagerObject **)*((_QWORD *)v3 + 1), *v9 != v3) )
      {
        __fastfail(3u);
      }
      *v9 = (struct RawInputManagerObject *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      *((_QWORD *)v3 + 1) = v3;
      *(_QWORD *)v3 = v3;
      if ( (*((_DWORD *)v3 + 20) & 0x400) == 0 )
      {
        rimProcessDeviceBufferAndStartRead(a1, v6);
        if ( !*((_BYTE *)a1 + 776) )
          break;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 19336),
          3,
          1,
          12,
          (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
          v5,
          (char)a1);
      }
      v3 = *v1;
      if ( *v1 == (struct RawInputManagerObject *)v1 )
        return v4;
    }
    return 0;
  }
  return v4;
}
