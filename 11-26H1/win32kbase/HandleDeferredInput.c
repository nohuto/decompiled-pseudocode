/*
 * XREFs of HandleDeferredInput @ 0x1400E3510
 * Callers:
 *     NtUserSetInputServiceState @ 0x140154100 (NtUserSetInputServiceState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1400E3A04 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400E3AF4 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ApiSetEditionWakeSomeone @ 0x1400E3C68 (ApiSetEditionWakeSomeone.c)
 *     ?_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z @ 0x1400E3CF8 (-_EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXPEAUtagQMSG@@_N@Z.c)
 *     ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400E3D90 (-EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ.c)
 *     ApiSetEditionDelQEntry @ 0x1400E43DC (ApiSetEditionDelQEntry.c)
 *     UpdateKeyStateForMessage @ 0x1400E4500 (UpdateKeyStateForMessage.c)
 */

void __fastcall HandleDeferredInput(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  int v4; // edi
  bool v6; // si
  char v7; // bl
  __int64 *i; // r14
  __int64 v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 UserSessionState; // rax
  int v13; // eax
  char v14; // bp
  bool v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  __int64 v20; // r8
  __int64 *v21; // rsi
  char v22; // cl
  int v23; // edx
  __int64 v24; // rax
  char v25; // bp
  bool v26; // r14
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rsi
  char v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // [rsp+C0h] [rbp+8h]
  int v37; // [rsp+D0h] [rbp+18h]
  bool v38; // [rsp+D8h] [rbp+20h]

  v37 = a3;
  v3 = *(_QWORD *)(a1 + 464);
  v4 = a2;
  v6 = a2 == 4;
  v7 = 0;
  v38 = a2 == 4;
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
        v35 = v11;
        if ( v4 == 6 && !v11 && (v10 & 0x40000) == 0 )
        {
          UpdateKeyStateForMessage(a1, i);
          *((_DWORD *)i + 25) |= 0x40000u;
          return;
        }
        UserSessionState = W32GetUserSessionState(v10, v9, a3);
        KeyboardInputTelemetry::_EndKeyboardEventProcessingByInputService(
          (KeyboardInputTelemetry *)(UserSessionState + 14504),
          (struct tagQMSG *)i,
          v6);
        if ( (*(_DWORD *)(a1 + 1360) & 0x1000000) == 0 && (*((_DWORD *)i + 25) & 0x2000) != 0 )
          *(_QWORD *)(i[13] + 1360) &= ~0x20000000uLL;
        v13 = *((_DWORD *)i + 25);
        if ( (v13 & 0x2000) != 0 || (v13 & 0x4000) != 0 || (v13 & 0x10000) != 0 )
        {
          *((_DWORD *)i + 25) = v13 & 0xFFFE9FFF;
          ++*(_DWORD *)(v3 + 40);
        }
        *((_DWORD *)i + 25) |= 0x8000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)i);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(
                  (_DWORD)WPP_GLOBAL_Control,
                  (unsigned int)&WPP_RECORDER_INITIALIZED,
                  (unsigned int)&WPP_GLOBAL_Control);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v18, v17, *(_QWORD *)(v16 + 69136));
          v4 = a2;
          v7 = 0;
        }
        if ( v4 == 2 || v35 )
        {
          v30 = *(_QWORD *)(v3 + 88);
          if ( i == (__int64 *)v30 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
              || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v31 = 0;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v7 = 1;
            }
            if ( v31 || v7 )
            {
              v32 = W32GetUserSessionState(
                      (_DWORD)WPP_GLOBAL_Control,
                      (unsigned int)&WPP_RECORDER_INITIALIZED,
                      (unsigned int)&WPP_GLOBAL_Control);
              LOBYTE(v33) = v7;
              LOBYTE(v34) = v31;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v34,
                v33,
                *(_QWORD *)(v32 + 69136),
                5,
                19,
                12,
                (__int64)&WPP_77270a430edc34841d00bca0a286e14c_Traceguids,
                v3,
                v30);
            }
            v4 = a2;
            *(_QWORD *)(v3 + 88) = 0LL;
          }
          if ( (*((_DWORD *)i + 25) & 0x40000) == 0 )
            UpdateKeyStateForMessage(a1, i);
          ApiSetEditionDelQEntry(v3 + 24, i);
          v7 = 0;
          if ( v35 )
          {
            a3 = v37;
            v6 = v38;
            goto LABEL_2;
          }
        }
        else
        {
          v19 = 0;
          v20 = *((unsigned int *)i + 6);
          if ( v4 == 5 )
            v19 = 0x4000000;
          *((_DWORD *)i + 25) = v19 | *((_DWORD *)i + 25) & 0xFBFFFFFF | 0x20000;
          ApiSetEditionWakeSomeone(v3, a1, v20, i);
        }
        break;
      }
    }
  }
  v21 = *(__int64 **)(v3 + 24);
  v22 = 1;
  while ( v21 )
  {
    v23 = *((_DWORD *)v21 + 25);
    if ( __CFSHR__(v23, 15) && v4 != 4 && v21[13] == a1 )
      return;
    if ( (v23 & 0x10000) != 0 || __CFSHR__(*((_DWORD *)v21 + 25), 15) )
    {
      v24 = v21[13];
      if ( v24 == a1 || *((_DWORD *)v21 + 24) == 4 )
      {
        *(_QWORD *)(v24 + 1360) &= ~0x20000000uLL;
        *((_DWORD *)v21 + 25) &= 0xFFFE9FFF;
        ++*(_DWORD *)(v3 + 40);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v25 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, a3);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v25;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v29, v28, *(_QWORD *)(v27 + 69136));
        }
        *((_DWORD *)v21 + 25) |= 0x20000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v21);
        ApiSetEditionWakeSomeone(v3, a1, *((unsigned int *)v21 + 6), v21);
        v22 = 0;
      }
    }
    v21 = (__int64 *)*v21;
    v4 = a2;
  }
  if ( v22 )
    KeyboardInputTelemetry::EndKeyboardEventSequence();
}
