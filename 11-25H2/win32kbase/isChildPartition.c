/*
 * XREFs of isChildPartition @ 0x140060A90
 * Callers:
 *     IsKeyboardIVEnabled @ 0x14005DFE8 (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     AllocQueue @ 0x140060510 (AllocQueue.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140060814 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x140061230 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140061500 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140061940 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1400621F0 (RawInputManagerDeviceObjectCreate.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 *     RawInputManagerObjectCreate @ 0x14013785C (RawInputManagerObjectCreate.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14014B934 (RIMHandlePowerDeviceRemoval.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014D0A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014FF4C (RIMIDECreateDeviceInstancePath.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1401504F0 (RIMChildInputTypeIsVirtualized.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140159F74 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x1401A07E4 (-UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ.c)
 *     NtUserGetInputContainerId @ 0x1401BD5F0 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     IsPenIVEnabled @ 0x14021B7A4 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x14021B7FC (IsTouchIVEnabled.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021EBBC (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021EE50 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isChildPartition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // di
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19448) )
  {
    v6 = *(_DWORD *)(W32GetUserSessionState(v3, v2) + 19452);
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == v6 )
      return *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19504) == 0;
  }
  return v4;
}
