/*
 * XREFs of RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     RaAdapterStartPowerIo @ 0x1400118E8 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x140071020 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x14002B9D4 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRaiseIrqlAndExecuteXrb(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  KIRQL v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  char v8; // cl
  int v9; // edi
  bool v10; // di
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  void (__fastcall *v14)(__int64, _QWORD, __int64); // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  bool v23; // di
  unsigned int v24; // r14d
  __int64 *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, bool, _QWORD *, int); // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, int); // rax
  __int64 *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, _QWORD, __int64); // rax
  int v36; // [rsp+38h] [rbp-50h]

  v5 = KfRaiseIrql(2u);
  if ( !*(_BYTE *)(a1 + 4434) )
  {
LABEL_13:
    v16 = RaidAdapterPostScatterGatherExecute(a1, (__int64)a2);
    goto LABEL_14;
  }
  v6 = a2[21];
  v7 = 24LL;
  LOBYTE(v4) = 40;
  v8 = *(_BYTE *)(v6 + 2);
  if ( v8 != 40 )
    v7 = 12LL;
  v9 = *(_DWORD *)(v7 + v6);
  if ( (*(_BYTE *)(a1 + 4435) & 4) != 0 )
  {
    v10 = (*(_DWORD *)(v7 + v6) & 0x40) != 0;
    if ( a2[13] )
    {
      v11 = (__int64 *)(a1 + 896);
      if ( a1 != -896 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          v13 = *(_QWORD *)(v12 + 8);
          if ( v13 )
          {
            if ( *(int *)(a1 + 924) >= 3 && (v14 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v13 + 240)) != 0LL )
            {
              LOBYTE(v4) = v10;
              v14(v12, a2[13], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v13) = v10;
              KeFlushIoBuffers(a2[13], v13, v4);
            }
          }
        }
      }
    }
    v15 = a2[17];
    if ( v15 )
    {
      v32 = (__int64 *)(a1 + 896);
      if ( a1 != -896 )
      {
        v33 = *v32;
        if ( *v32 )
        {
          v34 = *(_QWORD *)(v33 + 8);
          if ( v34 )
          {
            if ( *(int *)(a1 + 924) >= 3 && (v35 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v34 + 240)) != 0LL )
            {
              LOBYTE(v4) = v10;
              v35(v33, a2[17], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v34) = v10;
              KeFlushIoBuffers(v15, v34, v4);
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
  if ( a2[17] )
  {
    v16 = RaidAdapterScatterGatherExecuteBidirectionalRequest(a1, a2, v4);
    goto LABEL_14;
  }
  if ( (v9 & 0xC0) == 0 )
    goto LABEL_13;
  if ( v8 == 40 )
    v19 = *(_DWORD *)(v6 + 20);
  else
    v19 = *(unsigned __int8 *)(v6 + 2);
  v20 = 60LL;
  v21 = 16LL;
  if ( v8 != 40 )
    v20 = 16LL;
  v22 = v9 & 0x40;
  v23 = (v9 & 0x80) != 0;
  v24 = *(_DWORD *)(v20 + v6);
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v4) = 1;
    LOBYTE(v21) = v22 != 0;
    KeFlushIoBuffers(a2[13], v21, v4);
  }
  if ( v19 == 23 && *(_DWORD *)(a2[13] + 40LL) > v24 )
    v24 = *(_DWORD *)(a2[13] + 40LL);
  v25 = (__int64 *)(a1 + 896);
  if ( a1 == -896 )
    goto LABEL_36;
  v26 = *v25;
  if ( !*v25 )
    goto LABEL_36;
  v27 = *(_QWORD *)(v26 + 8);
  if ( !v27 )
    goto LABEL_36;
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, bool, _QWORD *, int))(v27 + 112);
  if ( !v28 )
    goto LABEL_36;
  v17 = v28(v26, *(_QWORD *)(a1 + 8), a2[13], a2[23], v24, RaidpAdapterContinueScatterGather, a2, v23, a2 + 29, 424);
  if ( v17 != -1073741789 )
    goto LABEL_15;
  v29 = *v25;
  if ( !*v25
    || (v30 = *(_QWORD *)(v29 + 8)) == 0
    || (v31 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *, int))(v30 + 88)) == 0LL )
  {
LABEL_36:
    v17 = -1073741811;
    goto LABEL_15;
  }
  LOBYTE(v36) = v23;
  v16 = v31(v29, *(_QWORD *)(a1 + 8), a2[13], a2[23], v24, RaidpAdapterContinueScatterGather, a2, v36);
LABEL_14:
  v17 = v16;
LABEL_15:
  KeLowerIrql(v5);
  return v17;
}
