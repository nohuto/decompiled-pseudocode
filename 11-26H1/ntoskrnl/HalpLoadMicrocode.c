/*
 * XREFs of HalpLoadMicrocode @ 0x140784E40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateUnlock @ 0x1404ECD1C (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404ECD50 (HalpMcUpdateLock.c)
 *     HalpMcUpdatePostUpdate @ 0x140509770 (HalpMcUpdatePostUpdate.c)
 *     HalpGetMicrocodePatchRecord @ 0x140593124 (HalpGetMicrocodePatchRecord.c)
 *     HalpMcGetLoadConfiguration @ 0x1405935E8 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x1405936A8 (HalpMcGetRollbackRequest.c)
 *     HalpMcParallelLoadSupported @ 0x140593814 (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x14059384C (HalpMcPatchConfiguration.c)
 *     HalpMcStaging @ 0x140593950 (HalpMcStaging.c)
 *     HalpMcStagingHypervisor @ 0x140593A60 (HalpMcStagingHypervisor.c)
 *     HalpMcStagingSupport @ 0x140593C48 (HalpMcStagingSupport.c)
 *     PrExtControlOperations @ 0x1406DCA28 (PrExtControlOperations.c)
 *     PrExtExportRecordData @ 0x1406DCB78 (PrExtExportRecordData.c)
 *     PrExtGetRecordDataLength @ 0x1406DCD20 (PrExtGetRecordDataLength.c)
 *     PrExtLogLatencyTime @ 0x1406DCD44 (PrExtLogLatencyTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpLoadMicrocodeSerialized @ 0x140785120 (HalpLoadMicrocodeSerialized.c)
 *     HalpMcExportAndChargeNeededData @ 0x1407851F4 (HalpMcExportAndChargeNeededData.c)
 *     PoDisableSleepStates @ 0x1407CC6C0 (PoDisableSleepStates.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1)
{
  int MicrocodePatchRecord; // ebx
  bool Supported; // r14
  unsigned int v4; // esi
  void *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  size_t Size; // [rsp+38h] [rbp-28h] BYREF
  void *Src; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  struct _KTHREAD *v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 Pool2; // [rsp+98h] [rbp+38h] BYREF
  char v15; // [rsp+A0h] [rbp+40h]
  bool IsMicrosoftCompatibleHvLoaded; // [rsp+A8h] [rbp+48h]

  v13 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v9 = 0;
  v12 = 0LL;
  v15 = 0;
  LOBYTE(Pool2) = 0;
  IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded();
  MicrocodePatchRecord = HalpMcPatchConfiguration();
  if ( MicrocodePatchRecord >= 0 )
  {
    HalpMcGetLoadConfiguration(&Pool2);
    Supported = Pool2;
    if ( (_BYTE)Pool2 )
      Supported = HalpMcParallelLoadSupported();
    HalpMcGetRollbackRequest();
    MicrocodePatchRecord = PrExtControlOperations(8, *(unsigned int **)(a1 + 48), 8LL);
    if ( MicrocodePatchRecord >= 0 )
    {
      MicrocodePatchRecord = HalpGetMicrocodePatchRecord(a1, &Src, &Size);
      if ( MicrocodePatchRecord >= 0 )
      {
        HalpMicrocodeFeatures = ((int)HalpMcStagingSupport() >= 0) | HalpMicrocodeFeatures & 0xFFFFFFFE;
        MicrocodePatchRecord = PrExtGetRecordDataLength((__int64)Src, Size, &v12);
        if ( MicrocodePatchRecord != -1073741762 )
        {
          v4 = v12;
          Pool2 = ExAllocatePool2(0x40uLL);
          v5 = (void *)Pool2;
          if ( !Pool2 )
          {
            MicrocodePatchRecord = -1073741664;
            goto LABEL_27;
          }
          v6 = PrExtExportRecordData(Src);
          v5 = (void *)Pool2;
          MicrocodePatchRecord = v6;
          if ( v6 >= 0 )
          {
            HalpMicrocodeData = Pool2;
            if ( IsMicrosoftCompatibleHvLoaded && qword_140FBB210 )
            {
              if ( (HalpMicrocodeFeatures & 1) == 0
                || (MicrocodePatchRecord = HalpMcStagingHypervisor(), MicrocodePatchRecord >= 0) )
              {
                MicrocodePatchRecord = guard_dispatch_icall_no_overrides((__int64)v5, v4);
                if ( MicrocodePatchRecord >= 0 )
                {
                  v9 = 3;
                  MicrocodePatchRecord = PrExtControlOperations(10, &v9, 4LL);
                  if ( MicrocodePatchRecord >= 0 )
                  {
                    if ( qword_140FBB218 )
                    {
                      guard_dispatch_icall_no_overrides((__int64)&v13, v7);
                      PrExtLogLatencyTime(v13);
                    }
                    goto LABEL_25;
                  }
                }
              }
            }
            else
            {
              MicrocodePatchRecord = HalpMcExportAndChargeNeededData(Src, (unsigned int)Size);
              if ( MicrocodePatchRecord >= 0 )
              {
                MicrocodePatchRecord = HalpMcUpdateLock();
                if ( MicrocodePatchRecord >= 0 )
                {
                  v15 = 1;
                  if ( (HalpMicrocodeFeatures & 1) != 0 )
                  {
                    MicrocodePatchRecord = HalpMcStaging();
                    if ( MicrocodePatchRecord < 0 )
                    {
LABEL_26:
                      HalpMcUpdateUnlock();
                      goto LABEL_27;
                    }
                  }
                  if ( Supported )
                  {
                    HalpMcLoadSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
                    HalpMcSyncBarrier = HalpMcLoadSyncBarrier;
                    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpMcLoadMicrocodeWorker, 0LL);
                  }
                  else
                  {
                    HalpLoadMicrocodeSerialized();
                  }
LABEL_25:
                  HalpMcUpdatePostUpdate();
                  MicrocodePatchRecord = PrExtControlOperations(9, *(unsigned int **)(a1 + 48), 8LL);
                  if ( !v15 )
                    goto LABEL_27;
                  goto LABEL_26;
                }
              }
            }
          }
LABEL_27:
          if ( v5 )
          {
            HalpMicrocodeData = 0LL;
            ExFreePoolWithTag(v5, 0x636C6148u);
          }
        }
      }
    }
  }
  if ( IsMicrosoftCompatibleHvLoaded && !HalMcSleepDisabled )
  {
    MicrocodePatchRecord = PoDisableSleepStates(1LL, 14LL, &Pool2);
    if ( MicrocodePatchRecord >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)MicrocodePatchRecord;
}
