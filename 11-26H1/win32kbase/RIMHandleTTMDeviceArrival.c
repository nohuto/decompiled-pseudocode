/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x14021164C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1401C5198 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x140211B5C (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // ebp
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // r14d
  char v9; // di
  char v10; // bp
  const wchar_t *v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // r8d
  char v15; // r14
  bool v16; // r15
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v28; // [rsp+20h] [rbp-98h]
  int v29; // [rsp+28h] [rbp-90h]
  int v30; // [rsp+30h] [rbp-88h]
  int v31; // [rsp+38h] [rbp-80h]
  int v32; // [rsp+40h] [rbp-78h]
  _QWORD v33[4]; // [rsp+70h] [rbp-48h] BYREF

  v33[0] = RIMOnTTMDeviceClose;
  v33[2] = 0LL;
  v33[1] = RIMOnTTMDeviceAssignedToTerminal;
  v33[3] = RIMOnTTMDeviceSetInputMode;
  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 53);
  if ( *(_DWORD *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v4 >= 0 )
    {
      v5 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 1296) = 0;
      v8 = RimDeviceTypeToRimInputType(a1, v5);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v6 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v6 & 1) == 0)
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(const wchar_t **)(a1 + 200);
        UserSessionState = W32GetUserSessionState(v6, (_DWORD)WPP_GLOBAL_Control, v7);
        WPP_RECORDER_AND_TRACE_SF_dqqdS(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v10,
          *(_QWORD *)(UserSessionState + 19368),
          v28,
          v29,
          v30,
          v31,
          v32,
          a1,
          (char)v33,
          v8,
          v11);
      }
      v4 = TtmNotifyDeviceArrival(2LL, a1, v33, v8);
      if ( v4 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 109);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_QWORD *)(a1 + 200);
          v18 = *(_DWORD *)(a1 + 48);
          v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
          LOBYTE(v20) = v16;
          LOBYTE(v21) = v15;
          WPP_RECORDER_AND_TRACE_SF_qdSD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 19368),
            a1 + 192,
            v29,
            v30,
            v31,
            a1,
            v18,
            v17,
            v4);
        }
        if ( v4 != -1073741768 )
          *(_DWORD *)(a1 + 1296) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v2, v3);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v22;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      4,
      1,
      12,
      (__int64)&WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
