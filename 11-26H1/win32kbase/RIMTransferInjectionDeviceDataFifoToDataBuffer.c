/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401685BC
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x14017ECF0 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // di
  bool v15; // si
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // [rsp+30h] [rbp-28h]
  char v27; // [rsp+40h] [rbp-18h]

  v2 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2932LL);
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2970LL);
    v19 = *(_DWORD *)(a2 + 676);
    result = 16LL;
    if ( v19 <= 0x10 )
    {
      v20 = *(_DWORD *)(a2 + 676);
      if ( !v19 )
        return result;
    }
    else
    {
      v20 = 16;
    }
    v21 = *(_DWORD *)(a2 + 672);
    v22 = 16 - v21;
    if ( 16 - v21 >= v20 )
      v22 = v20;
    if ( v22 )
    {
      v23 = v22;
      do
      {
        v24 = 3 * ((((unsigned __int8)*(_DWORD *)(a2 + 680) - (_BYTE)v19 + 1) & 0xF) + 57LL);
        v25 = 3 * (v21 + 40LL);
        *(_QWORD *)(a2 + 4 * v25) = *(_QWORD *)(a2 + 4 * v24);
        *(_DWORD *)(a2 + 4 * v25 + 8) = *(_DWORD *)(a2 + 4 * v24 + 8);
        LODWORD(v25) = *(_DWORD *)(a2 + 672);
        --*(_DWORD *)(a2 + 676);
        v21 = v25 + 1;
        v19 = *(_DWORD *)(a2 + 676);
        *(_DWORD *)(a2 + 672) = v21;
        --v23;
      }
      while ( v23 );
      result = v21;
      v13 = 12LL * v21;
      goto LABEL_13;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = a2;
      v18 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20) + 19368);
      v26 = 67;
      goto LABEL_41;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 900);
    result = 16LL;
    if ( v5 > 0x10 )
    {
      v7 = 16;
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 900);
      if ( !v5 )
        return result;
    }
    v8 = *(_DWORD *)(a2 + 896);
    v9 = 16 - v8;
    if ( 16 - v8 >= v7 )
      v9 = v7;
    if ( v9 )
    {
      v10 = v9;
      do
      {
        v11 = 3LL * (((unsigned __int8)*(_DWORD *)(a2 + 904) - (_BYTE)v5 + 1) & 0xF);
        v12 = 3LL * v8;
        *(_OWORD *)(a2 + 8 * v12 + 452) = *(_OWORD *)(a2 + 8 * v11 + 908);
        *(_QWORD *)(a2 + 8 * v12 + 468) = *(_QWORD *)(a2 + 8 * v11 + 924);
        LODWORD(v12) = *(_DWORD *)(a2 + 896);
        --*(_DWORD *)(a2 + 900);
        v8 = v12 + 1;
        v5 = *(_DWORD *)(a2 + 900);
        *(_DWORD *)(a2 + 896) = v8;
        --v10;
      }
      while ( v10 );
      result = v8;
      v13 = 24LL * v8;
LABEL_13:
      *(_DWORD *)(a2 + 240) = 0;
      *(_QWORD *)(a2 + 248) = v13;
      return result;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = a2;
      v18 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7) + 19368);
      v26 = 66;
LABEL_41:
      LOBYTE(v17) = v15;
      LOBYTE(v16) = v14;
      return WPP_RECORDER_AND_TRACE_SF_q(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v16,
               v17,
               v18,
               4,
               1,
               v26,
               (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
               v27);
    }
  }
  return result;
}
