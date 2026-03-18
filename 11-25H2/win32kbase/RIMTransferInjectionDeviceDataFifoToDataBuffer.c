/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401EAD20
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1401F1380 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // di
  bool v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int16 v22; // [rsp+30h] [rbp-28h]
  char v23; // [rsp+40h] [rbp-18h]

  v2 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2943);
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2981);
    v17 = *(unsigned int *)(a2 + 676);
    if ( (unsigned int)v17 <= 0x10 )
    {
      result = (unsigned int)v17;
      if ( !(_DWORD)v17 )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v18 = *(_DWORD *)(a2 + 672);
    v19 = 16 - v18;
    if ( 16 - v18 >= (unsigned int)result )
      v19 = result;
    if ( v19 )
    {
      v20 = 0;
      do
      {
        ++v20;
        v17 = 3 * ((((unsigned __int8)*(_DWORD *)(a2 + 680) - (_BYTE)v17 + 1) & 0xF) + 57LL);
        v21 = 3 * (v18 + 40LL);
        *(_QWORD *)(a2 + 4 * v21) = *(_QWORD *)(a2 + 4 * v17);
        *(_DWORD *)(a2 + 4 * v21 + 8) = *(_DWORD *)(a2 + 4 * v17 + 8);
        LODWORD(v21) = *(_DWORD *)(a2 + 672);
        --*(_DWORD *)(a2 + 676);
        v18 = v21 + 1;
        LODWORD(v17) = *(_DWORD *)(a2 + 676);
        *(_DWORD *)(a2 + 672) = v18;
      }
      while ( v20 < v19 );
      result = v18;
      v11 = 12LL * v18;
      goto LABEL_32;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = a2;
      v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v17) + 19336);
      v22 = 67;
      goto LABEL_40;
    }
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 900);
    if ( (unsigned int)v5 <= 0x10 )
    {
      result = (unsigned int)v5;
      if ( !(_DWORD)v5 )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v7 = *(_DWORD *)(a2 + 896);
    v8 = 16 - v7;
    if ( 16 - v7 >= (unsigned int)result )
      v8 = result;
    if ( v8 )
    {
      v9 = 0;
      do
      {
        ++v9;
        v5 = 3LL * (((unsigned __int8)*(_DWORD *)(a2 + 904) - (_BYTE)v5 + 1) & 0xF);
        v10 = 3LL * v7;
        *(_OWORD *)(a2 + 8 * v10 + 452) = *(_OWORD *)(a2 + 8 * v5 + 908);
        *(_QWORD *)(a2 + 8 * v10 + 468) = *(_QWORD *)(a2 + 8 * v5 + 924);
        LODWORD(v10) = *(_DWORD *)(a2 + 896);
        --*(_DWORD *)(a2 + 900);
        v7 = v10 + 1;
        LODWORD(v5) = *(_DWORD *)(a2 + 900);
        *(_DWORD *)(a2 + 896) = v7;
      }
      while ( v9 < v8 );
      result = v7;
      v11 = 24LL * v7;
LABEL_32:
      *(_DWORD *)(a2 + 240) = 0;
      *(_QWORD *)(a2 + 248) = v11;
      return result;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = a2;
      v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v5) + 19336);
      v22 = 66;
LABEL_40:
      LOBYTE(v15) = v13;
      LOBYTE(v14) = v12;
      return WPP_RECORDER_AND_TRACE_SF_q(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v14,
               v15,
               v16,
               4,
               1,
               v22,
               (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
               v23);
    }
  }
  return result;
}
