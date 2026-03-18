/*
 * XREFs of rimProcessHidInput @ 0x1400A19E0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     rimStackAttachAndProcessInput @ 0x1400A05C4 (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1400A1C74 (ApiSetProcessHidRawInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d

  if ( (*(_DWORD *)(a2 + 168) & 0x10000) == 0 && (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
  if ( *(_QWORD *)(a2 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 379LL);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 380LL);
  if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
    && (v4 = *(_DWORD *)(a2 + 168), (v4 & 0x2000) != 0)
    && (v4 & 0x80000) != 0
    && (v4 & 0x1000000) == 0 )
  {
    if ( (v4 & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 168) = v4 | 0x400000;
      ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
    *(_BYTE *)(a1 + 776) = 1;
    InputTraceLogging::RIM::DropInput(a2, 10LL);
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 440) + 24LL), a2 + 240, 0);
    if ( (*(_DWORD *)(a2 + 168) & 0x20000) != 0 )
    {
      if ( (unsigned int)GET_USERCRIT_DISPOSITION(v6, v5) )
        ApiSetProcessHidRawInput(a2, *(_QWORD *)(*(_QWORD *)(a2 + 440) + 24LL), *(unsigned int *)(a2 + 248));
      else
        rimQueueApiSetHidRawInputAsyncWorkItem((void *)a1, a2, v7);
    }
  }
}
