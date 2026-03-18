/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1401E9688
 * Callers:
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(__int64 a1, _DWORD *a2, unsigned int a3, int *a4)
{
  int v4; // r14d
  unsigned int v5; // ebp
  char v8; // r12
  __int64 v9; // rdx
  int v10; // r15d
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // r8d
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  bool v30; // zf
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // eax

  v4 = *a4;
  v5 = 0;
  v8 = a3;
  v9 = a1;
  v10 = 0;
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1088);
      goto LABEL_5;
    }
    if ( a3 < 0xA )
    {
LABEL_5:
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19336),
          2,
          1,
          21,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v4,
          v8);
      }
      v10 = 1;
      goto LABEL_13;
    }
  }
  if ( ((v4 - 2) & 0xFFFFFFFC) != 0 )
    goto LABEL_5;
  v17 = a4[5];
  if ( (v17 & 4) != 0 )
    a2[7] = 1;
  if ( (v17 & 2) != 0 )
    a2[10] = 1;
  if ( v4 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || (v18 = 1, *(_DWORD *)(a1 + 364) != 1) )
      v18 = 0;
    if ( v18 )
    {
      v19 = a4[11];
      v20 = a4[10];
    }
    else
    {
      v19 = a4[13];
      v20 = a4[12];
    }
    a2[1] = v20;
    a2[4] = v19;
    v21 = a4[27];
    if ( (v21 & 1) != 0 )
      a2[13] = a4[28];
    if ( (v21 & 4) != 0 )
      a2[25] = a4[30];
    if ( (v21 & 8) != 0 )
      a2[28] = a4[31];
    if ( (v21 & 2) != 0 )
      a2[31] = a4[29];
    v22 = a4[26];
    if ( (v22 & 1) != 0 )
      a2[16] = 1;
    if ( (v22 & 2) != 0 )
      a2[19] = 1;
    if ( (v22 & 4) != 0 )
      a2[22] = 1;
  }
  else if ( v4 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || (v23 = 1, *(_DWORD *)(a1 + 364) != 1) )
      v23 = 0;
    if ( v23 )
    {
      v24 = a4[11];
      v25 = a4[10];
    }
    else
    {
      v24 = a4[13];
      v25 = a4[12];
    }
    a2[1] = v25;
    a2[4] = v24;
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
    a2[25] = a4[3];
    if ( (v26 & 2) != 0 )
      a2[28] = a4[36];
    if ( (*(_DWORD *)(v9 + 368) & 8) != 0 && *(_DWORD *)(v9 + 364) == 1 || (a4[5] & 0x4000) != 0 )
      a2[16] = 1;
  }
  else
  {
    a2[25] = a4[3];
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1194);
    v30 = (a4[5] & 0x4000) == 0;
    a2[1] = a4[12];
    a2[4] = a4[13];
    if ( !v30 )
      a2[16] = 1;
    v31 = a4[27];
    if ( (v31 & 4) != 0 )
      a2[13] = a4[37];
    if ( (v31 & 1) != 0 )
    {
      v32 = a4[28] - a4[30];
      if ( v32 < 0 )
        v32 = a4[30] - a4[28];
      v33 = a4[31] - a4[29];
      a2[19] = v32;
      v34 = -v33;
      if ( v33 > 0 )
        v34 = v33;
      a2[22] = v34;
    }
    if ( (v31 & 2) != 0 )
      a2[28] = a4[36];
  }
LABEL_13:
  LOBYTE(v5) = v10 == 0;
  return v5;
}
