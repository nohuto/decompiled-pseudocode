/*
 * XREFs of RIMQueryDev @ 0x140094624
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x140060820 (RIMRefreshDeviceAttributes.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 * Callees:
 *     RIMGetKbdExId @ 0x140092D94 (RIMGetKbdExId.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x140185470 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  int v6; // edx
  int v7; // r8d
  char v8; // r14
  unsigned int v9; // r12d
  char v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rbx
  bool v18; // r15
  char v19; // di
  char v20; // si
  __int64 v21; // rax
  void *v22; // rdx
  int v23; // r8d
  int v24; // esi
  int v25; // r15d
  char v26; // bl
  bool v27; // di
  __int64 v28; // rax
  void *v29; // rdx
  int v30; // r8d
  int IoStatusBlock; // [rsp+20h] [rbp-78h]
  ULONG IoControlCode; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(unsigned int *)(a2 + 48);
  v34 = 0LL;
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_DWORD)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1389LL);
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
  v8 = 1;
  v9 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        21,
        (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
        a2,
        v9);
    }
  }
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 208), &v34) < 0 )
    {
      v24 = *(unsigned __int8 *)(a2 + 440);
      v25 = *(unsigned __int8 *)(a2 + 441);
      *(_DWORD *)(a2 + 468) = v24;
      *(_DWORD *)(a2 + 472) = v25;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        v29 = &WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids;
        LOBYTE(v30) = v27;
        LOBYTE(v29) = v26;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v29,
          v30,
          *(_QWORD *)(v28 + 19368),
          2,
          1,
          23,
          (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
          a2,
          v24,
          v25);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v8 = 0;
      }
      v17 = v34;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = *(_BYTE *)(a2 + 441);
        v20 = *(_BYTE *)(a2 + 440);
        v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        v22 = &WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids;
        LOBYTE(v23) = v18;
        LOBYTE(v22) = v8;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v22,
          v23,
          *(_QWORD *)(v21 + 19368),
          IoStatusBlock,
          IoControlCode,
          22,
          (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
          v20,
          v19,
          v17,
          SBYTE4(v34));
      }
      *(_QWORD *)(a2 + 468) = v17;
    }
  }
  *(_DWORD *)(a2 + 184) &= ~0x40u;
  return v9;
}
