/*
 * XREFs of isChildPartition @ 0x1400D2FA0
 * Callers:
 *     RawInputManagerObjectCreate @ 0x14005DD34 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x14006003C (RawInputManagerDeviceObjectCreate.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14008B63C (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14008C80C (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     rimQueueCompleteFrame @ 0x140095460 (rimQueueCompleteFrame.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     AllocQueue @ 0x1400D2A10 (AllocQueue.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D2D18 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1400E91C0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     IsKeyboardIVEnabled @ 0x14010FD58 (IsKeyboardIVEnabled.c)
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x14014BFE8 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14016AB98 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14018364C (RIMHandlePowerDeviceRemoval.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14018C880 (RIMChildInputTypeIsVirtualized.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14018F42C (RIMIDECreateDeviceInstancePath.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140198F38 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1401B5BE4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     IsTouchIVEnabled @ 0x1401C3E68 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1401C3EA8 (IsPenIVEnabled.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x140222344 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1402225F0 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isChildPartition(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char v6; // di
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  v6 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19480) )
  {
    v8 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19484);
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v9) == v8 )
      return *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 19536) == 0;
  }
  return v6;
}
