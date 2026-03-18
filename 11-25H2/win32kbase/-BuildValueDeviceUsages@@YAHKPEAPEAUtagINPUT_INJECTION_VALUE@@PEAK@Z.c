/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401EB7DC
 * Callers:
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rbp
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // r15d
  char *v10; // r12
  char *v11; // r13
  struct tagINPUT_INJECTION_VALUE *v12; // rax
  __int64 v13; // rdx
  struct tagINPUT_INJECTION_VALUE *v14; // r8
  struct tagINPUT_INJECTION_VALUE *v15; // rcx
  __int16 *v16; // rdx
  unsigned int v17; // r14d
  __int16 v18; // ax
  __int64 v19; // rdx
  _WORD *v20; // r8
  __int64 v21; // rcx
  char v22; // di
  bool v23; // bp
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v33; // bp
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx

  v3 = 0;
  if ( ((a1 - 2) & 0xFFFFFFFC) != 0 || a1 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 547);
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 548);
  v6 = 5LL;
  switch ( a1 )
  {
    case 3:
      v7 = 12;
      v8 = 11;
      v9 = 6;
      v10 = (char *)&unk_1402723E2;
      v11 = (char *)&unk_1402723E4;
LABEL_13:
      v12 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInitImpl(256LL, 12LL * v7, 0x6A6E6952u);
      *a2 = v12;
      v14 = v12;
      if ( v12 )
      {
        v15 = v12;
        v16 = (__int16 *)&unk_140272344;
        v17 = 5;
        do
        {
          *(_WORD *)v15 = *(v16 - 1);
          v18 = *v16;
          v16 += 16;
          *((_WORD *)v15 + 1) = v18;
          v15 = (struct tagINPUT_INJECTION_VALUE *)((char *)v15 + 12);
          --v6;
        }
        while ( v6 );
        v19 = 0LL;
        v20 = (_WORD *)((char *)v14 + 60);
        do
        {
          if ( (unsigned int)v19 >= v9 )
            break;
          ++v17;
          v21 = 32LL * (unsigned int)v19;
          v19 = (unsigned int)(v19 + 1);
          *v20 = *(_WORD *)&v10[v21];
          v20[1] = *(_WORD *)&v11[v21];
          v20 += 6;
        }
        while ( v17 < v7 );
        if ( v17 == v8 )
        {
          v3 = 1;
          *a3 = v7;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v22 = 0;
          }
          v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
            LOBYTE(v25) = v23;
            LOBYTE(v26) = v22;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v26,
              v25,
              *(_QWORD *)(UserSessionState + 19336),
              2,
              1,
              12,
              (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
              v17,
              v8);
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v27 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
          LOBYTE(v30) = v28;
          LOBYTE(v31) = v27;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 19336),
            2,
            1,
            13,
            (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
            23);
        }
      }
      return v3;
    case 2:
      v7 = 12;
      v10 = (char *)&unk_140272102;
      v11 = (char *)&unk_140272104;
LABEL_12:
      v8 = 10;
      v9 = 5;
      goto LABEL_13;
    case 5:
      v7 = 15;
      v10 = (char *)&unk_1402721E2;
      v11 = (char *)&unk_1402721E4;
      goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19336),
      2,
      1,
      11,
      (__int64)&WPP_c36c985c814233f64051156d4f542e35_Traceguids,
      a1);
  }
  return 0LL;
}
