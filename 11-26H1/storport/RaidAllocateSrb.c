/*
 * XREFs of RaidAllocateSrb @ 0x1400384D0
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x14000D450 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x14008C960 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x14008CC34 (TcglibEalAllocateIfSendCommand.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAbortSrb @ 0x1400A6B30 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1400A863C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1400A8D98 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A90F8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmePnPPassToMiniPort @ 0x1400E2018 (NvmePnPPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaidAllocateSrb(__int64 a1, int a2, char a3, char a4)
{
  __int64 Pool2; // rbx
  __int64 result; // rax
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // rax
  int v11; // r8d

  Pool2 = 0LL;
  if ( a3 != 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( Pool2 || !a1 )
      return Pool2;
    v11 = 88;
    goto LABEL_21;
  }
  if ( a2 == 43 )
  {
LABEL_5:
    v8 = 144;
    v9 = 0;
LABEL_6:
    v10 = ExAllocatePool2(64LL, v8, 1918067026LL);
    Pool2 = v10;
    if ( v10 )
    {
      *(_BYTE *)(v10 + 2) = 40;
      *(_WORD *)v10 = 8;
      *(_WORD *)(v10 + 36) = 2;
      *(_DWORD *)(v10 + 8) = 1397899864;
      *(_DWORD *)(v10 + 12) = 1;
      *(_DWORD *)(v10 + 16) = v8;
      *(_DWORD *)(v10 + 20) = a2;
      *(_DWORD *)(v10 + 52) = 128;
      *(_DWORD *)(v10 + 56) = v9;
      *(_WORD *)(v10 + 128) = 1;
      *(_DWORD *)(v10 + 132) = 4;
      if ( v9 )
        *(_DWORD *)(v10 + 120) = 144;
      return Pool2;
    }
    if ( !a1 )
      return Pool2;
    v11 = v8;
LABEL_21:
    RaidLogAllocationFailure(a1, 64, v11, 1918067026, 0x80000000);
    return Pool2;
  }
  if ( a2 == 37 )
  {
LABEL_10:
    v8 = 168;
    v9 = 1;
    goto LABEL_6;
  }
  switch ( a2 )
  {
    case 0:
      if ( (a4 & 1) != 0 )
      {
        v8 = 184;
        v9 = 1;
        goto LABEL_6;
      }
      result = 0LL;
      break;
    case 2:
    case 9:
    case 16:
    case 19:
    case 32:
    case 38:
    case 39:
    case 42:
      goto LABEL_5;
    case 10:
      v8 = 256;
      v9 = 1;
      goto LABEL_6;
    case 23:
      goto LABEL_10;
    default:
      return Pool2;
  }
  return result;
}
