/*
 * XREFs of StorBuildSynchronousScsiRequest @ 0x140007A30
 * Callers:
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1400A1EE4 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrb @ 0x1400A6B30 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1400A863C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1400A8D98 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A90F8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     StorProbeAndLockPages @ 0x140008824 (StorProbeAndLockPages.c)
 */

PIRP __fastcall StorBuildSynchronousScsiRequest(__int64 a1, unsigned __int64 a2, __int64 a3, _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v9; // rax
  ULONG v10; // r10d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // edi
  PMDL Mdl; // rax
  __int64 v16; // rdx

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    v9 = 60LL;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v9 = 16LL;
    v10 = *(_DWORD *)(v9 + a2);
    v11 = 64LL;
    v12 = 24LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
    {
      v11 = 24LL;
      v12 = 12LL;
    }
    v13 = *(_DWORD *)(v12 + a2);
    if ( (*(_BYTE *)(v12 + a2) & 0xC0) == 0xC0 )
    {
      v14 = 2;
    }
    else if ( (v13 & 0x40) != 0 )
    {
      v14 = 1;
    }
    else
    {
      v14 = ((v13 & 0x80u) != 0) - 1;
    }
    if ( !v10 )
      goto LABEL_12;
    Mdl = IoAllocateMdl(*(PVOID *)(v11 + a2), v10, 0, 0, 0LL);
    v7->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)StorProbeAndLockPages(Mdl, v16, v14) >= 0 )
      {
LABEL_12:
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
        v7->UserIosb = a4;
        v7->UserEvent = 0LL;
        return v7;
      }
      IoFreeMdl(v7->MdlAddress);
      v7->MdlAddress = 0LL;
    }
    IoFreeIrp(v7);
    return 0LL;
  }
  return result;
}
