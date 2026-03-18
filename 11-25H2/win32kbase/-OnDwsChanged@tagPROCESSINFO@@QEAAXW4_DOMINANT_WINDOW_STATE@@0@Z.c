/*
 * XREFs of ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140166FA8
 * Callers:
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140166C10 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A8044 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A845C (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReportProcess@QualityOfService@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8850 (-ReportProcess@QualityOfService@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1401A88CC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 */

void __fastcall tagPROCESSINFO::OnDwsChanged(_DWORD *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  char v7; // r14
  __int16 v8; // ax
  __int16 v9; // ax
  int v10; // ecx
  unsigned __int64 v11; // rax
  struct tagPROCESSINFO *v12; // rdx
  bool v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v3 = a3;
  v4 = a2;
  if ( a2 == a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 263LL);
  if ( (int)v4 < a1[285] )
    goto LABEL_30;
  v6 = 5;
  v7 = 1;
  if ( (_DWORD)v4 != 5 )
  {
    v8 = *((_WORD *)a1 + v4 + 564);
    if ( !v8 )
      goto LABEL_30;
    *((_WORD *)a1 + v4 + 564) = v8 - 1;
  }
  if ( (_DWORD)v3 == 5 )
    goto LABEL_10;
  v9 = *((_WORD *)a1 + v3 + 564);
  if ( v9 == -2 )
LABEL_30:
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  *((_WORD *)a1 + v3 + 564) = v9 + 1;
LABEL_10:
  v10 = a1[285];
  if ( (int)v4 <= v10 && ((_DWORD)v4 != v10 || !*((_WORD *)a1 + v4 + 564)) || (int)v3 < v10 )
  {
    v11 = 0LL;
    v12 = (struct tagPROCESSINFO *)(a1 + 282);
    while ( !*(_WORD *)v12 )
    {
      ++v11;
      v12 = (struct tagPROCESSINFO *)((char *)v12 + 2);
      if ( v11 >= 5 )
        goto LABEL_19;
    }
    v6 = v11;
LABEL_19:
    if ( v6 == v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 312LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v7 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v7;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69144));
    }
    a1[285] = v6;
    QualityOfService::ReportProcess((QualityOfService *)a1, v12);
  }
}
