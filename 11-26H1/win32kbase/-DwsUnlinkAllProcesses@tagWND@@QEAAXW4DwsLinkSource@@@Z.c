/*
 * XREFs of ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401CBEA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7FA4 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagWND::DwsUnlinkAllProcesses(__int64 a1, int a2)
{
  int v4; // r8d
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  int v7; // r12d
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  bool v10; // zf
  tagPROCESSINFO *v11; // rdx
  char v12; // al
  _UNKNOWN **v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  char v21; // [rsp+90h] [rbp+8h]
  char v22; // [rsp+98h] [rbp+10h]
  tagPROCESSINFO *v23; // [rsp+A0h] [rbp+18h]

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 20LL) >> 7;
  if ( (a2 == 3) != v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 115);
  v5 = (_QWORD *)(a1 + 400);
  v6 = *(_QWORD **)(a1 + 400);
  if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v6 != (_QWORD *)(a1 + 400)) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  if ( v6 != v5 )
  {
    v7 = ~a2;
    do
    {
      v8 = v6 - 3;
      v9 = v6;
      v6 = (_QWORD *)*v6;
      v10 = (v7 & (_DWORD)v8[2]) == 0;
      *((_DWORD *)v8 + 4) &= v7;
      if ( v10 )
      {
        v11 = (tagPROCESSINFO *)v8[1];
        v23 = v11;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v12 = 0;
        }
        v13 = &WPP_RECORDER_INITIALIZED;
        v22 = v12;
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          UserSessionState = W32GetUserSessionState((_DWORD)v13, (_DWORD)v11, v4);
          WPP_RECORDER_AND_TRACE_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v22,
            v21,
            *(_QWORD *)(UserSessionState + 69136),
            BugCheckParameter4,
            0xEu,
            0xDu,
            (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids);
        }
        tagPROCESSINFO::DwsUnlinkWindow(v23, (struct ContribueToProcessDws *)v8);
        v18 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v19 = (_QWORD *)v9[1], (_QWORD *)*v19 != v9) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        GreDeleteFastMutex((char *)v8, v15, v16, v17);
      }
    }
    while ( v6 != v5 );
  }
  if ( (_QWORD *)*v5 == v5 )
    *(_DWORD *)(a1 + 380) &= ~0x8000000u;
}
