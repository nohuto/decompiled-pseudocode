/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMSearchHidTLCInfo @ 0x14002A7D0 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // si
  __int64 UserSessionState; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // bl
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 i; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v24,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( RIMSearchHidTLCInfo(v3, v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 152);
  v5 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x70707352u);
  v8 = v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 16) = v3;
    *(_WORD *)(v5 + 18) = v2;
    v15 = W32GetUserSessionState(v7, v6) + 192;
    v17 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      __fastfail(3u);
    *(_QWORD *)v8 = v17;
    *(_QWORD *)(v8 + 8) = v15;
    *(_QWORD *)(v17 + 8) = v8;
    *(_QWORD *)v15 = v8;
    v18 = *(__int64 **)(W32GetUserSessionState(v17, v16) + 208);
    for ( i = W32GetUserSessionState(v20, v19); v18 != (__int64 *)(i + 208); i = W32GetUserSessionState(v23, v22) )
    {
      if ( *((_WORD *)v18 + 8) == v3 )
      {
        *(_DWORD *)(v8 + 32) = *((_DWORD *)v18 + 5);
        break;
      }
      v18 = (__int64 *)*v18;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v24);
    return v8;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 19336),
        3,
        1,
        10,
        (__int64)&WPP_874cc551c50532d10d3b13ce90299f33_Traceguids);
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v24);
    return 0LL;
  }
}
