/*
 * XREFs of ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x1401A81F0
 * Callers:
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x1401A7D20 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7F18 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7FA4 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140161584 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A83E0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagPROCESSINFO::OnDwsChanged(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  char v7; // r14
  __int16 v8; // ax
  __int16 v9; // ax
  int v10; // edx
  unsigned __int64 v11; // rax
  _WORD *v12; // rcx
  char v13; // r15
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]

  v3 = a3;
  v4 = a2;
  if ( a2 == a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 241LL);
  if ( (int)v4 < *(_DWORD *)(a1 + 1164) )
    goto LABEL_30;
  v6 = 5;
  v7 = 1;
  if ( (_DWORD)v4 != 5 )
  {
    v8 = *(_WORD *)(a1 + 2 * v4 + 1152);
    if ( !v8 )
      goto LABEL_30;
    *(_WORD *)(a1 + 2 * v4 + 1152) = v8 - 1;
  }
  if ( (_DWORD)v3 == 5 )
    goto LABEL_10;
  v9 = *(_WORD *)(a1 + 2 * v3 + 1152);
  a3 = 65534;
  if ( v9 == -2 )
LABEL_30:
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  *(_WORD *)(a1 + 2 * v3 + 1152) = v9 + 1;
LABEL_10:
  v10 = *(_DWORD *)(a1 + 1164);
  if ( (int)v4 <= v10 && ((_DWORD)v4 != v10 || !*(_WORD *)(a1 + 2 * v4 + 1152)) || (int)v3 < v10 )
  {
    v11 = 0LL;
    v12 = (_WORD *)(a1 + 1152);
    while ( !*v12 )
    {
      ++v11;
      ++v12;
      if ( v11 >= 5 )
        goto LABEL_19;
    }
    v6 = v11;
LABEL_19:
    if ( v6 == v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 290LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v7 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, a3);
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v13,
        *(_QWORD *)(UserSessionState + 69136),
        BugCheckParameter4,
        v17,
        v18,
        v19);
    }
    v15 = *(_QWORD *)(a1 + 1208);
    *(_DWORD *)(a1 + 1164) = v6;
    CQoSReport::ReportProcess(*(CQoSReport **)(v15 + 41344), (struct tagPROCESSINFO *)a1);
  }
}
