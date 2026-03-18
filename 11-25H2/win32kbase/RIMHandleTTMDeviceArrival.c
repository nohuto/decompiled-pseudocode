/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1401F662C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1401A1444 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1401F6B3C (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebp
  int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  char v7; // di
  char v8; // bp
  const wchar_t *v9; // rbx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  char v12; // r14
  bool v13; // r15
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v25; // [rsp+20h] [rbp-98h]
  int v26; // [rsp+28h] [rbp-90h]
  int v27; // [rsp+30h] [rbp-88h]
  int v28; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+40h] [rbp-78h]
  _QWORD v30[4]; // [rsp+70h] [rbp-48h] BYREF

  v30[0] = RIMOnTTMDeviceClose;
  v30[2] = 0LL;
  v30[1] = RIMOnTTMDeviceAssignedToTerminal;
  v30[3] = RIMOnTTMDeviceSetInputMode;
  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 53);
  if ( *(_DWORD *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v3 >= 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 1296) = 0;
      v6 = RimDeviceTypeToRimInputType(a1, v4);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v5 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v5 & 1) == 0)
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v7 = 0;
      }
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *(const wchar_t **)(a1 + 200);
        UserSessionState = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_dqqdS(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v7,
          v8,
          *(_QWORD *)(UserSessionState + 19336),
          v25,
          v26,
          v27,
          v28,
          v29,
          a1,
          (char)v30,
          v6,
          v9);
      }
      v3 = TtmNotifyDeviceArrival(2LL, a1, v30, v6);
      if ( v3 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 109);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v12 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = *(_QWORD *)(a1 + 200);
          v15 = *(_DWORD *)(a1 + 48);
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
          LOBYTE(v17) = v13;
          LOBYTE(v18) = v12;
          WPP_RECORDER_AND_TRACE_SF_qdSD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(v16 + 19336),
            a1 + 192,
            v26,
            v27,
            v28,
            a1,
            v15,
            v14,
            v3);
        }
        if ( v3 != -1073741768 )
          *(_DWORD *)(a1 + 1296) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v19 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 19336),
      4,
      1,
      12,
      (__int64)&WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
