/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14013A8FC
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1402235C0 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // xmm1_8
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8

  *(_DWORD *)(a1 + 72) = a4;
  v7 = *(_QWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a5;
  v8 = *a3;
  *(_QWORD *)(a1 + 40) = v7;
  v9 = *((_QWORD *)a3 + 2);
  *(_OWORD *)(a1 + 48) = v8;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a1 + 2) & 1) == 0 && !*(_DWORD *)(a1 + 12) && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 72) |= 8u;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 == 1 || *(_DWORD *)a6 == 2 )
      *(_QWORD *)(a1 + 80) = *a6;
    else
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2228LL);
  }
  return a1;
}
