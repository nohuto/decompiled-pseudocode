/*
 * XREFs of RaidXrbDeallocateResources @ 0x1400127A0
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1400118E8 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400C5540 (StorUnitExecuteNvmeSrbComplete.c)
 *     NvmePnPPassToMiniPort @ 0x1400E2018 (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400E2330 (NvmePnPPassToStorMQMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // si
  __int64 v5; // rcx
  struct _MDL *v6; // rcx
  __int64 v7; // rax
  int v8; // ebp
  bool v9; // bp
  struct _MDL *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, _QWORD, bool); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  void (__fastcall *v17)(__int64, __int64, _QWORD); // rax

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v8 = *(_DWORD *)(v7 + 24) >> 6;
      else
        LOBYTE(v8) = *(_BYTE *)(v7 + 12) >> 6;
      v9 = (v8 & 1) == 0;
      if ( RaidVerifierEnabled )
      {
        v10 = *(struct _MDL **)(a1 + 120);
        if ( v10 )
        {
          MmProtectMdlSystemAddress(v10, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      if ( *(_QWORD *)(a1 + 216) != -896LL )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 896LL);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            v13 = *(void (__fastcall **)(__int64, _QWORD, bool))(v12 + 96);
            if ( v13 )
              v13(v11, *(_QWORD *)(a1 + 112), v9);
          }
        }
      }
      v14 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v14 )
      {
        if ( *(_QWORD *)(a1 + 216) != -896LL )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 896LL);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8);
            if ( v16 )
            {
              v17 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v16 + 96);
              if ( v17 )
                v17(v15, v14, 0LL);
            }
          }
        }
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v2);
    }
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v5 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v5);
      IoFreeMdl(*(PMDL *)(a1 + 104));
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v6 = *(struct _MDL **)(a1 + 136);
    if ( v6 )
    {
      MmUnlockPages(v6);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
