/*
 * XREFs of rimProcessHidInput @ 0x1401F11FC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7374 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimStackAttachAndProcessInput @ 0x1400E69D8 (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x14013F2A0 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall rimProcessHidInput(struct RawInputManagerObject *a1, __m128i *a2)
{
  __int32 v4; // eax

  if ( (a2[10].m128i_i32[2] & 0x10000) == 0 && (a2[11].m128i_i32[2] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 378);
  if ( a2[28].m128i_i64[1] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 379);
  if ( !*((_DWORD *)a1 + 22) && (a2[11].m128i_i32[2] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 380);
  if ( (*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264))
    && (v4 = a2[10].m128i_i32[2], (v4 & 0x2000) != 0)
    && (v4 & 0x80000) != 0
    && (v4 & 0x1000000) == 0 )
  {
    if ( (v4 & 0x400000) == 0 )
    {
      a2[10].m128i_i32[2] = v4 | 0x400000;
      ZwSetEvent(*((HANDLE *)a1 + 43), 0LL);
    }
    *((_BYTE *)a1 + 776) = 1;
    InputTraceLogging::RIM::DropInput((__int64)a2, 0xAu);
  }
  else
  {
    rimStackAttachAndProcessInput((__int64)a1, (__int64)a2, *(unsigned int **)(a2[27].m128i_i64[1] + 24), a2 + 15, 0);
    if ( (a2[10].m128i_i32[2] & 0x20000) != 0 )
    {
      if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
        ApiSetProcessHidRawInput((__int64)a2, *(_QWORD *)(a2[27].m128i_i64[1] + 24), a2[15].m128i_u32[2]);
      else
        rimQueueApiSetHidRawInputAsyncWorkItem(a1, (__int64)a2);
    }
  }
}
