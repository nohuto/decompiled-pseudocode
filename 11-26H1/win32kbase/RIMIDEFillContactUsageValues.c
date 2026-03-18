/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1402089B8
 * Callers:
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x14020653C (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(__int64 a1, _DWORD *a2, unsigned int a3, int *a4)
{
  int v4; // r14d
  unsigned int v5; // ebp
  char v8; // r15
  __int64 v9; // rdx
  char v10; // di
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  unsigned int v15; // ebx
  int v17; // r15d
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // eax

  v4 = *a4;
  v5 = 0;
  v8 = a3;
  v9 = a1;
  if ( *a4 == 2 )
  {
    if ( a3 < 0xA )
      goto LABEL_5;
  }
  else if ( v4 == 3 )
  {
    if ( a3 < 0xB )
      goto LABEL_5;
  }
  else
  {
    if ( v4 != 5 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1077);
      goto LABEL_5;
    }
    if ( a3 < 0xA )
    {
LABEL_5:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, a3);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 19368),
          2,
          1,
          21,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v4,
          v8);
      }
      return 0;
    }
  }
  if ( ((v4 - 2) & 0xFFFFFFFC) != 0 )
    goto LABEL_5;
  v17 = a4[5];
  v15 = 1;
  if ( (v17 & 4) != 0 )
    a2[7] = 1;
  if ( (v17 & 2) != 0 )
    a2[10] = 1;
  if ( v4 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
      v5 = 1;
    v18 = a4[2 * (v5 ^ 1LL) + 11];
    a2[1] = a4[2 * (v5 ^ 1LL) + 10];
    a2[4] = v18;
    v19 = a4[27];
    if ( (v19 & 1) != 0 )
      a2[13] = a4[28];
    if ( (v19 & 4) != 0 )
      a2[25] = a4[30];
    if ( (v19 & 8) != 0 )
      a2[28] = a4[31];
    if ( (v19 & 2) != 0 )
      a2[31] = a4[29];
    v20 = a4[26];
    if ( (v20 & 1) != 0 )
      a2[16] = 1;
    if ( (v20 & 2) != 0 )
      a2[19] = 1;
    if ( (v20 & 4) != 0 )
      a2[22] = 1;
  }
  else if ( v4 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
      v5 = 1;
    v21 = a4[2 * (v5 ^ 1LL) + 11];
    a2[1] = a4[2 * (v5 ^ 1LL) + 10];
    a2[4] = v21;
    v22 = a4[27];
    if ( (v22 & 4) != 0 )
      a2[13] = a4[37];
    if ( (v22 & 1) != 0 )
    {
      v23 = a4[28] - a4[30];
      if ( v23 < 0 )
        v23 = a4[30] - a4[28];
      v24 = a4[31] - a4[29];
      a2[19] = v23;
      v25 = -v24;
      if ( v24 > 0 )
        v25 = v24;
      a2[22] = v25;
    }
    a2[25] = a4[3];
    if ( (v22 & 2) != 0 )
      a2[28] = a4[36];
    if ( (*(_DWORD *)(v9 + 368) & 8) != 0 && *(_DWORD *)(v9 + 364) == 1 || (a4[5] & 0x4000) != 0 )
      a2[16] = 1;
  }
  else
  {
    a2[25] = a4[3];
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1183);
    a2[1] = a4[12];
    a2[4] = a4[13];
    if ( (v17 & 0x4000) != 0 )
      a2[16] = 1;
    v26 = a4[27];
    if ( (v26 & 4) != 0 )
      a2[13] = a4[37];
    if ( (v26 & 1) != 0 )
    {
      v27 = a4[28] - a4[30];
      if ( v27 < 0 )
        v27 = a4[30] - a4[28];
      v28 = a4[31] - a4[29];
      a2[19] = v27;
      v29 = -v28;
      if ( v28 > 0 )
        v29 = v28;
      a2[22] = v29;
    }
    if ( (v26 & 2) != 0 )
      a2[28] = a4[36];
  }
  return v15;
}
