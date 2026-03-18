/*
 * XREFs of RIMQueryDev @ 0x14002E9E8
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x14002DEC0 (RIMRefreshDeviceAttributes.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMGetKbdExId @ 0x140141078 (RIMGetKbdExId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x14014BB2C (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  char v7; // r14
  unsigned int v8; // r12d
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  bool v15; // r15
  char v16; // di
  char v17; // si
  __int64 v18; // rax
  void *v19; // rdx
  int v20; // r8d
  int v21; // esi
  int v22; // r15d
  char v23; // bl
  bool v24; // di
  __int64 v25; // rax
  void *v26; // rdx
  int v27; // r8d
  int IoStatusBlock; // [rsp+20h] [rbp-78h]
  ULONG IoControlCode; // [rsp+28h] [rbp-70h]

  v2 = *(unsigned int *)(a2 + 48);
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_DWORD)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1392LL);
  v5 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 208),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 240),
         v4[2],
         0LL,
         0,
         (PVOID)(a2 + v4[3]),
         v4[4]);
  *(_DWORD *)(a2 + 276) = v5;
  v7 = 1;
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        21,
        (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
        a2,
        v8);
    }
  }
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 208)) < 0 )
    {
      v21 = *(unsigned __int8 *)(a2 + 440);
      v22 = *(unsigned __int8 *)(a2 + 441);
      *(_DWORD *)(a2 + 468) = v21;
      *(_DWORD *)(a2 + 472) = v22;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        v26 = &WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids;
        LOBYTE(v27) = v24;
        LOBYTE(v26) = v23;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v26,
          v27,
          *(_QWORD *)(v25 + 19336),
          2,
          1,
          23,
          (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
          a2,
          v21,
          v22);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v7 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_BYTE *)(a2 + 441);
        v17 = *(_BYTE *)(a2 + 440);
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        v19 = &WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids;
        LOBYTE(v20) = v15;
        LOBYTE(v19) = v7;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v19,
          v20,
          *(_QWORD *)(v18 + 19336),
          IoStatusBlock,
          IoControlCode,
          22,
          (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
          v17,
          v16,
          0,
          0);
      }
      *(_QWORD *)(a2 + 468) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 184) &= ~0x40u;
  return v8;
}
