/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x140180DA4
 * Callers:
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140130A50 (RIMIDEValidateMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x14013EC14 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x140143CB4 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEInjectMouseInput @ 0x1401EA358 (RIMIDEInjectMouseInput.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char v6; // di
  unsigned int v7; // ebp
  char *v8; // rsi
  __int16 *v9; // r14
  __int64 v10; // xmm1_8
  unsigned int v11; // edi
  int v12; // ebx
  __int16 v13; // dx
  __int16 v14; // cx
  int v15; // eax
  __int16 v16; // ax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v25; // bl
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // [rsp+50h] [rbp-1D8h]
  _OWORD v32[24]; // [rsp+60h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v32, 0, sizeof(v32));
  v6 = 0;
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1631LL);
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0));
  v7 = 0;
  if ( a3 )
  {
    v8 = (char *)v32 + 2;
    v9 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v7 )
      {
        v10 = *((_QWORD *)v32 + 3 * v7 - 1);
        *(_OWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x344) = *(_OWORD *)((char *)&v32[-1] + 24 * v7 - 8);
        *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x354) = v10;
      }
      v30 = v4 + 32LL * v7;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v30) )
        break;
      v11 = *((_DWORD *)v9 + 1);
      v12 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x34C);
      *((_WORD *)v8 - 1) = -2;
      v13 = (v11 >> 15) & 1 | 8;
      if ( (v11 & 0x2000) == 0 )
        v13 = (v11 >> 15) & 1;
      v14 = v13 | 2;
      if ( (v11 & 0x4000) == 0 )
        v14 = v13;
      *(_WORD *)v8 = v14;
      v15 = RIMIDEBuildRawButtonsFromMouseInputStruct(v12, v30);
      *(_DWORD *)(v8 + 6) = v15;
      *((_WORD *)v8 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v12, v15, v30);
      v16 = 0;
      if ( (v11 & 0x1800) != 0 )
        v16 = *v9;
      v4 = a2;
      ++v7;
      *((_WORD *)v8 + 2) = v16;
      v6 = 0;
      *(_DWORD *)(v8 + 10) = *((_DWORD *)v9 - 2);
      *(_DWORD *)(v8 + 14) = *((_DWORD *)v9 - 1);
      v17 = *((_DWORD *)v9 + 2);
      v9 += 16;
      *(_DWORD *)(v8 + 18) = v17;
      v8 += 24;
      if ( v7 >= a3 )
        goto LABEL_15;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        35,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v19 = RIMIDEInjectMouseInput(a1, v32, a3);
    if ( v19 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
      {
        v18 = *((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( (v18 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
          v6 = 1;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(v18, &WPP_GLOBAL_Control);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v6;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 19336),
          2,
          1,
          36,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v19);
      }
    }
  }
  return (unsigned int)v19;
}
