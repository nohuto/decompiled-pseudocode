/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1400977A8
 * Callers:
 *     rimCompleteReads @ 0x1400987C0 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  char v6; // r15
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rax
  _QWORD *v10; // rcx
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v1 = (_QWORD *)((char *)a1 + 784);
  v3 = -1073741823;
  while ( 1 )
  {
    v4 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v6 = (_BYTE)v4 + 96;
    if ( *((_DWORD *)v4 - 10) == 3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 252LL);
    if ( *((_DWORD *)v4 - 10) == 2 && (*((_DWORD *)v4 + 24) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 253LL);
    if ( (struct RawInputManagerObject *)v4[29] != a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 254LL);
    if ( ((unsigned int)RimDeviceTypeToRimInputType(
                          (unsigned __int64)(v4 - 11) & -(__int64)(v4 != (_QWORD *)160),
                          *((_DWORD *)v4 - 10)) & *((_DWORD *)a1 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
    v9 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v4[1] = v4;
    *v4 = v4;
    if ( (v4[10] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(
        a1,
        (struct RIMDEV *)((unsigned __int64)(v4 - 11) & -(__int64)(v4 != (_QWORD *)160)));
      if ( !*((_BYTE *)a1 + 776) )
        return 0;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        12,
        (__int64)&WPP_7bf7317fea8f3c0b82ba448ae30d594a_Traceguids,
        v6,
        a1);
    }
  }
  return v3;
}
