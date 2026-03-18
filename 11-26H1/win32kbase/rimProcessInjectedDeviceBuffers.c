/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x14017ECF0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140167D54 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401685BC (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // r8
  __int64 *v9; // rbx
  __int64 **v10; // rcx

  v2 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1129LL);
  result = *(unsigned int *)(a2 + 48);
  if ( !(_DWORD)result && (v6 = (_DWORD *)(a2 + 900), *(_DWORD *)(a2 + 900)) )
  {
    v7 = (_DWORD *)(a2 + 676);
  }
  else
  {
    if ( (_DWORD)result != 1 )
      return result;
    v7 = (_DWORD *)(a2 + 676);
    if ( !*(_DWORD *)(a2 + 676) )
      return result;
    v6 = (_DWORD *)(a2 + 900);
  }
  if ( !*(_BYTE *)(a1 + 776) )
  {
    if ( (_DWORD)result )
    {
      if ( *(_DWORD *)(a2 + 672) )
      {
        v8 = 1151LL;
        goto LABEL_17;
      }
    }
    else if ( *(_DWORD *)(a2 + 896) )
    {
      v8 = 1147LL;
LABEL_17:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v8);
    }
    RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
    InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
    *(_DWORD *)(a2 + 168) |= 0x200u;
    v9 = (__int64 *)(a2 + 88);
    if ( (__int64 *)*v9 != v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1165LL);
    result = a1 + 784;
    v10 = *(__int64 ***)(a1 + 792);
    if ( *v10 != (__int64 *)(a1 + 784) )
      __fastfail(3u);
    *v9 = result;
    v9[1] = (__int64)v10;
    *v10 = v9;
    *(_QWORD *)(a1 + 792) = v9;
    return result;
  }
  if ( (_DWORD)result )
  {
    if ( !*(_DWORD *)(a2 + 672) )
    {
      result = InputTraceLogging::RIM::DropInput(a2, 8u);
      *v7 = 0;
    }
  }
  else if ( !*(_DWORD *)(a2 + 896) )
  {
    result = InputTraceLogging::RIM::DropInput(a2, 8u);
    *v6 = 0;
  }
  return result;
}
