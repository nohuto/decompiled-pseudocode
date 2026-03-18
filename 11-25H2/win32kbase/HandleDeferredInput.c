/*
 * XREFs of HandleDeferredInput @ 0x1400C1830
 * Callers:
 *     NtUserSetInputServiceState @ 0x140111350 (NtUserSetInputServiceState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400C1D18 (-EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z @ 0x1400C1D40 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@SAXPEAUtagQMSG@@_N@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1400C230C (ApiSetEditionDelQEntry.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400C2598 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400C2678 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ApiSetEditionWakeSomeone @ 0x1400C2900 (ApiSetEditionWakeSomeone.c)
 *     UpdateKeyStateForMessage @ 0x1400C2A40 (UpdateKeyStateForMessage.c)
 */

void __fastcall HandleDeferredInput(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  int v4; // edi
  bool v6; // r9
  char v7; // bl
  __int64 *i; // r14
  __int64 v9; // rdx
  int v10; // ecx
  char v11; // al
  int v12; // eax
  char v13; // bp
  bool v14; // r12
  int v15; // ebx
  int v16; // edi
  __int64 v17; // rsi
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // r8
  __int64 *v23; // rsi
  char v24; // cl
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r12d
  char v28; // bp
  bool v29; // r14
  int v30; // ebx
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // [rsp+20h] [rbp-98h]
  int v40; // [rsp+28h] [rbp-90h]
  int v41; // [rsp+38h] [rbp-80h]
  char v42; // [rsp+C0h] [rbp+8h]
  int v44; // [rsp+D0h] [rbp+18h]
  bool v45; // [rsp+D8h] [rbp+20h]

  v44 = a3;
  v3 = *(_QWORD *)(a1 + 472);
  v4 = a2;
  v6 = a2 == 4;
  v7 = 0;
  v45 = a2 == 4;
LABEL_2:
  for ( i = *(__int64 **)(v3 + 24); i; i = (__int64 *)*i )
  {
    v9 = i[13];
    if ( v9 == a1 && (unsigned int)(*((_DWORD *)i + 6) - 256) <= 9 )
    {
      v10 = *((_DWORD *)i + 25);
      if ( (v10 & 0x2000) != 0
        || (v10 & 0x4000) != 0
        || (*(_DWORD *)(v9 + 1360) & 0x1000000) != 0 && (v10 & 0x8000) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 1360) & 0x1000000) == 0 || (v11 = 1, a3 == *((_DWORD *)i + 41)) )
          v11 = 0;
        v42 = v11;
        if ( v4 == 6 && !v11 && (v10 & 0x40000) == 0 )
        {
          UpdateKeyStateForMessage(a1, i);
          *((_DWORD *)i + 25) |= 0x40000u;
          return;
        }
        KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService((struct tagQMSG *)i, v6);
        if ( (*(_DWORD *)(a1 + 1360) & 0x1000000) == 0 && (*((_DWORD *)i + 25) & 0x2000) != 0 )
          *(_QWORD *)(i[13] + 1360) &= ~0x20000000uLL;
        v12 = *((_DWORD *)i + 25);
        if ( (v12 & 0x2000) != 0 || (v12 & 0x4000) != 0 || (v12 & 0x10000) != 0 )
        {
          *((_DWORD *)i + 25) = v12 & 0xFFFE9FFF;
          ++*(_DWORD *)(v3 + 40);
        }
        *((_DWORD *)i + 25) |= 0x8000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)i);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
          || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v13 = 0;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = *(_DWORD *)(v3 + 40);
          v16 = *(_DWORD *)(v3 + 44);
          v17 = i[18];
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v19) = v14;
          LOBYTE(v20) = v13;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 69144),
            v39,
            v40,
            11,
            v41,
            (char)i,
            v17,
            v3 + 24,
            v16,
            v15);
          v4 = a2;
          v7 = 0;
        }
        if ( v4 == 2 || v42 )
        {
          if ( i == *(__int64 **)(v3 + 88) )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
              || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v35 = 0;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v7 = 1;
            }
            if ( v35 || v7 )
            {
              v36 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LOBYTE(v37) = v7;
              LOBYTE(v38) = v35;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v38,
                v37,
                *(_QWORD *)(v36 + 69144),
                5,
                19,
                12,
                (__int64)&WPP_84c2b5c4938a36ac72cdd032315a6539_Traceguids,
                v3);
            }
            *(_QWORD *)(v3 + 88) = 0LL;
            v4 = a2;
          }
          if ( (*((_DWORD *)i + 25) & 0x40000) == 0 )
            UpdateKeyStateForMessage(a1, i);
          ApiSetEditionDelQEntry(v3 + 24, i);
          v7 = 0;
          if ( v42 )
          {
            a3 = v44;
            v6 = v45;
            goto LABEL_2;
          }
        }
        else
        {
          v21 = 0;
          v22 = *((unsigned int *)i + 6);
          if ( v4 == 5 )
            v21 = 0x4000000;
          *((_DWORD *)i + 25) = v21 | *((_DWORD *)i + 25) & 0xFBFFFFFF | 0x20000;
          ApiSetEditionWakeSomeone(v3, a1, v22, i);
        }
        break;
      }
    }
  }
  v23 = *(__int64 **)(v3 + 24);
  v24 = 1;
  while ( v23 )
  {
    v25 = *((unsigned int *)v23 + 25);
    if ( __CFSHR__(*((_DWORD *)v23 + 25), 15) && v4 != 4 && v23[13] == a1 )
      return;
    if ( (v25 & 0x10000) != 0 || __CFSHR__(*((_DWORD *)v23 + 25), 15) )
    {
      v26 = v23[13];
      if ( v26 == a1 || *((_DWORD *)v23 + 24) == 4 )
      {
        *(_QWORD *)(v26 + 1360) &= ~0x20000000uLL;
        *((_DWORD *)v23 + 25) &= 0xFFFE9FFF;
        v27 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v27;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v28 = 0;
        }
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = *(_DWORD *)(v3 + 44);
          v31 = v23[18];
          v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v33) = v29;
          LOBYTE(v34) = v28;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(v32 + 69144),
            v39,
            v40,
            13,
            v41,
            (char)v23,
            v31,
            v3 + 24,
            v30,
            v27);
        }
        *((_DWORD *)v23 + 25) |= 0x20000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v23);
        ApiSetEditionWakeSomeone(v3, a1, *((unsigned int *)v23 + 6), v23);
        v24 = 0;
      }
    }
    v23 = (__int64 *)*v23;
    v4 = a2;
  }
  if ( v24 )
    KeyboardInputTelemetry::EndKeyboardEventSequence();
}
