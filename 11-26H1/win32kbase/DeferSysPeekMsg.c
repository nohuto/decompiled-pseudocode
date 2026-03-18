/*
 * XREFs of DeferSysPeekMsg @ 0x1400E32C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400E3A04 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400E3AF4 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400E3DB8 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 */

void __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  char v3; // r12
  __int64 v4; // r14
  unsigned int v5; // eax
  bool v6; // r13
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  unsigned int ThreadId; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  bool v22; // [rsp+A8h] [rbp+10h]

  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 88LL);
  v5 = *(_DWORD *)(v4 + 24);
  v6 = v5 >= 0x100 && v5 <= 0x109;
  switch ( a2 )
  {
    case 1:
LABEL_7:
      *(_QWORD *)(a1 + 1360) |= 0x20000000uLL;
      if ( a2 == 1 )
      {
        *(_DWORD *)(v4 + 100) |= 0x2000u;
        goto LABEL_9;
      }
LABEL_28:
      *(_DWORD *)(v4 + 100) |= 0x10000u;
      break;
    case 3:
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_7;
    case 2:
      *(_DWORD *)(v4 + 100) |= 0x4000u;
LABEL_9:
      *(_QWORD *)(*(_QWORD *)(a1 + 464) + 56LL) = v4;
      break;
  }
  InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v4);
  *(_QWORD *)(v4 + 104) = a1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 464) + 40LL);
  v9 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
    LOBYTE(v11) = v3;
    LOBYTE(v12) = v22;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69136));
  }
  if ( (*(_DWORD *)(a1 + 1360) & 0x1000000) == 0 && v6 )
  {
    if ( !*(_QWORD *)(v4 + 144) )
    {
      *(LARGE_INTEGER *)(v4 + 144) = KeQueryPerformanceCounter(0LL);
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
      v17 = W32GetUserSessionState(v15, v14, v16);
      KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        (KeyboardInputTelemetry *)(v17 + 14504),
        ThreadId);
    }
    if ( (*(_DWORD *)(v4 + 100) & 0x10000) == 0 )
    {
      v18 = *(_QWORD *)(v4 + 144);
      v19 = W32GetUserSessionState(v9, v7, v8);
      v20 = v19;
      if ( *(_DWORD *)(v19 + 14692) )
      {
        v21 = *(_DWORD *)(v19 + 14512);
        if ( !v21 )
          *(_QWORD *)(v20 + 14504) = v18;
        *(_DWORD *)(v20 + 14512) = v21 + 1;
      }
    }
  }
}
