/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x140008740
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1400A1EE4 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1400A6D90 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1400A863C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1400A8D98 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A90F8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
