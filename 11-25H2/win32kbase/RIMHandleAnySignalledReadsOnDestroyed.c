/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1400FFF28
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1)
{
  _QWORD *v2; // rdx
  bool v3; // bl
  bool v4; // r14
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  bool v9; // bl
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r8
  _QWORD *v16; // rax

  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      50,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  v8 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 && (*(_DWORD *)(v8 + 244) & 8) != 0 )
  {
    v14 = *(_QWORD *)(v8 + 392);
    if ( (*(_DWORD *)(v8 + 240) & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(v8 + 96);
    }
    else
    {
      v15 = *(_QWORD *)(v8 + 400);
      if ( !v15 )
        v15 = *(_QWORD *)(v8 + 88);
    }
    if ( *(_DWORD *)(v14 + 848) )
    {
      v2 = *(_QWORD **)(v14 + 864);
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_QWORD *)MmUserProbeAddress;
      if ( *v2 == v15 )
      {
        v2 = *(_QWORD **)(v14 + 864);
        if ( (unsigned __int64)v2 >= MmUserProbeAddress )
          v2 = (_QWORD *)MmUserProbeAddress;
        *v2 = -1LL;
      }
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 864);
      if ( *v16 == v15 )
        *v16 = -1LL;
    }
  }
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 19336),
      4,
      1,
      52,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
}
