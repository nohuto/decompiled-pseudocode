/*
 * XREFs of ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401A80D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A845C (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagWND::DwsUnlinkAllProcesses(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  bool v9; // zf
  char v10; // al
  _UNKNOWN **v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  tagPROCESSINFO *v17; // [rsp+50h] [rbp-48h]
  char v18; // [rsp+B0h] [rbp+18h]
  bool v19; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    if ( (v2 == 3) != *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 20LL) >> 7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 130);
    v4 = (_QWORD *)(a1 + 400);
    v5 = *(_QWORD **)(a1 + 400);
    if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v5 != (_QWORD *)(a1 + 400)) )
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
    if ( v5 != v4 )
    {
      v6 = ~v2;
      do
      {
        v7 = v5 - 3;
        v8 = v5;
        v5 = (_QWORD *)*v5;
        v9 = (v6 & (_DWORD)v7[2]) == 0;
        *((_DWORD *)v7 + 4) &= v6;
        if ( v9 )
        {
          v17 = (tagPROCESSINFO *)v7[1];
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
            || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v10 = 0;
          }
          v11 = &WPP_RECORDER_INITIALIZED;
          v18 = v10;
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            UserSessionState = W32GetUserSessionState(v11, v7[1]);
            LOBYTE(v13) = v19;
            LOBYTE(v14) = v18;
            WPP_RECORDER_AND_TRACE_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v14,
              v13,
              *(_QWORD *)(UserSessionState + 69144));
          }
          tagPROCESSINFO::DwsUnlinkWindow(v17, (struct ContribueToProcessDws *)v7);
          v15 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v16 = (_QWORD *)v8[1], (_QWORD *)*v16 != v8) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          GreDeleteFastMutex((char *)v7);
        }
      }
      while ( v5 != v4 );
    }
    if ( (_QWORD *)*v4 == v4 )
      *(_DWORD *)(a1 + 380) &= ~0x8000000u;
  }
}
