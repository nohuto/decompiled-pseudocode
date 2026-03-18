/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x14013E280
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x14013DFAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

void __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  bool v5; // bl
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // bl
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rax

  v4 = (int)WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      50,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 && (*(_DWORD *)(v10 + 244) & 8) != 0 )
  {
    v16 = *(_QWORD *)(v10 + 392);
    if ( (*(_DWORD *)(v10 + 240) & 0x2000) != 0 )
    {
      v17 = *(_QWORD *)(v10 + 96);
    }
    else
    {
      v17 = *(_QWORD *)(v10 + 400);
      if ( !v17 )
        v17 = *(_QWORD *)(v10 + 88);
    }
    if ( *(_DWORD *)(v16 + 848) )
    {
      if ( RtlReadULong64FromUser(*(_QWORD *)(v16 + 864)) == v17 )
        RtlWriteULong64ToUser(*(_QWORD *)(v16 + 864), -1LL);
    }
    else
    {
      v18 = *(_QWORD **)(v16 + 864);
      if ( *v18 == v17 )
        *v18 = -1LL;
    }
  }
  v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, a3);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 19368),
      4,
      1,
      52,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
}
