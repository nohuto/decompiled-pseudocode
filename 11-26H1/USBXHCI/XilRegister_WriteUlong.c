/*
 * XREFs of XilRegister_WriteUlong @ 0x140008FA4
 * Callers:
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     Register_ControllerStop @ 0x140005EBC (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x1400060A4 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1400075D4 (XilCoreDeviceSlot_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x140007680 (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_D0Entry @ 0x140007F84 (Register_D0Entry.c)
 *     Interrupter_InterruptDisable @ 0x140008248 (Interrupter_InterruptDisable.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x1400082F0 (Controller_InitializeDeviceNotificationRegister.c)
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 *     Interrupter_InterruptEnable @ 0x140008910 (Interrupter_InterruptEnable.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     RootHub_D0Entry @ 0x14002C718 (RootHub_D0Entry.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Controller_D0ExitSaveState @ 0x14002D350 (Controller_D0ExitSaveState.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x140031BB4 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x140031C5C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x140031E48 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_DisableComplianceModeCapability @ 0x140031FF4 (Register_DisableComplianceModeCapability.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140034CC8 (RootHub_RestoreU1U2Timeouts.c)
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x14003AB70 (Interrupter_WdfEvtInterruptIsr.c)
 *     Controller_ClearHSIIWorkaround @ 0x140040AA0 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x140040C4C (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_SetHSIIWorkaround @ 0x140042D4C (Controller_SetHSIIWorkaround.c)
 *     Controller_StopTimeTrackingForHandle @ 0x140042DD4 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1400494D0 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_InitializeForOffload @ 0x140049820 (Interrupter_InitializeForOffload.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x14004A078 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x14004A1D8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004B32C (RootHub_Update20HardwareLpmParameters.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140057340 (XilCoreDeviceSlot_FreeResources.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007C448 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 1001) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
