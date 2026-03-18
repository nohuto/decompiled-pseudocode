/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x140130784
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSearchHidTLCInfo @ 0x140130948 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(int a1, int a2, int a3)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // si
  __int64 UserSessionState; // rax
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // edx
  int v16; // ecx
  __int64 *i; // rdi
  int v18; // r8d
  char v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v25,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( RIMSearchHidTLCInfo(v4, v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 152LL);
  v6 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x70707352u);
  v10 = v6;
  if ( v6 )
  {
    *(_WORD *)(v6 + 16) = v4;
    *(_WORD *)(v6 + 18) = v3;
    v11 = W32GetUserSessionState(v8, v7, v9) + 192;
    v14 = *(_QWORD *)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
      __fastfail(3u);
    *(_QWORD *)v10 = v14;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(v14 + 8) = v10;
    *(_QWORD *)v11 = v10;
    for ( i = *(__int64 **)(W32GetUserSessionState(v14, v12, v13) + 208);
          i != (__int64 *)(W32GetUserSessionState(v16, v15, v18) + 208);
          i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 8) == v4 )
      {
        *(_DWORD *)(v10 + 32) = *((_DWORD *)i + 5);
        break;
      }
    }
    if ( v25 )
      RIMUnlockExclusive(v25);
    return v10;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 19368),
        3,
        1,
        10,
        (__int64)&WPP_874cc551c50532d10d3b13ce90299f33_Traceguids);
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v25);
    return 0LL;
  }
}
