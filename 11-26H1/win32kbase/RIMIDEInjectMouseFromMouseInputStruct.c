/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8
 * Callers:
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x140155218 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1401552D4 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140155390 (RIMIDEValidateMouseInputStruct.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEInjectMouseInput @ 0x140155A3C (RIMIDEInjectMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // r15
  unsigned int i; // esi
  int v8; // ecx
  int v9; // ebx
  int v10; // r8d
  __int64 v12; // r14
  int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // r12
  unsigned int v16; // ebx
  __int16 v17; // dx
  __int16 v18; // cx
  unsigned int v19; // eax
  __int16 v20; // ax
  __int64 v21; // xmm1_8
  char v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // di
  bool v28; // si
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  _OWORD v34[24]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a2;
  memset(v34, 0, sizeof(v34));
  v6 = (a1 + 72) & -(__int64)(a1 != 0);
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1620LL);
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0), 3LL, a3);
  for ( i = 0; ; ++i )
  {
    if ( i >= a3 )
    {
      v9 = RIMIDEInjectMouseInput(a1, v34, a3);
      if ( v9 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v8 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v8 & 1) == 0)
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v27 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v8, (unsigned int)&WPP_GLOBAL_Control, v10);
          LOBYTE(v30) = v28;
          LOBYTE(v31) = v27;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(UserSessionState + 19368),
            2,
            1,
            36,
            (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
            v9);
        }
      }
      return (unsigned int)v9;
    }
    if ( i )
    {
      v21 = *((_QWORD *)v34 + 3 * i - 1);
      *(_OWORD *)(v6 + 836) = *(_OWORD *)((char *)&v34[-1] + 24 * i - 8);
      *(_QWORD *)(v6 + 852) = v21;
    }
    v12 = v4 + 32LL * i;
    if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v12) )
      break;
    v14 = *(_DWORD *)(v12 + 12);
    v15 = 3LL * i;
    v16 = *(_DWORD *)(v6 + 844);
    *((_WORD *)v34 + 12 * i) = -2;
    v17 = (v14 >> 15) & 1 | 8;
    if ( (v14 & 0x2000) == 0 )
      v17 = (v14 >> 15) & 1;
    v18 = v17 | 2;
    if ( (v14 & 0x4000) == 0 )
      v18 = v17;
    *((_WORD *)v34 + 12 * i + 1) = v18;
    v19 = RIMIDEBuildRawButtonsFromMouseInputStruct(v16, v12);
    *((_DWORD *)v34 + 6 * i + 2) = v19;
    *((_WORD *)v34 + 12 * i + 2) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v16, v19, v12);
    v20 = 0;
    if ( (v14 & 0x1800) != 0 )
      v20 = *(_WORD *)(v12 + 8);
    v4 = a2;
    *((_WORD *)v34 + 12 * i + 3) = v20;
    *((_DWORD *)v34 + 6 * i + 3) = *(_DWORD *)v12;
    *((_DWORD *)&v34[1] + 6 * i) = *(_DWORD *)(v12 + 4);
    *((_DWORD *)&v34[1] + 2 * v15 + 1) = *(_DWORD *)(v12 + 16);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, v13);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      2,
      1,
      35,
      (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
  }
  return (unsigned int)-1073741811;
}
