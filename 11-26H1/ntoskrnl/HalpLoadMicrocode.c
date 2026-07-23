/*
 * XREFs of HalpLoadMicrocode @ 0x140787970
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMcUpdateUnlock @ 0x1404E62FC (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404E6330 (HalpMcUpdateLock.c)
 *     HalpMcUpdatePostUpdate @ 0x140503220 (HalpMcUpdatePostUpdate.c)
 *     HalpGetMicrocodePatchRecord @ 0x1405958A4 (HalpGetMicrocodePatchRecord.c)
 *     HalpMcGetLoadConfiguration @ 0x140595D68 (HalpMcGetLoadConfiguration.c)
 *     HalpMcGetRollbackRequest @ 0x140595E28 (HalpMcGetRollbackRequest.c)
 *     HalpMcParallelLoadSupported @ 0x140595F94 (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x140595FCC (HalpMcPatchConfiguration.c)
 *     HalpMcStaging @ 0x1405960D0 (HalpMcStaging.c)
 *     HalpMcStagingHypervisor @ 0x1405961E0 (HalpMcStagingHypervisor.c)
 *     HalpMcStagingSupport @ 0x1405963C8 (HalpMcStagingSupport.c)
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 *     PrExtExportRecordData @ 0x1406E0E18 (PrExtExportRecordData.c)
 *     PrExtGetRecordDataLength @ 0x1406E0FC0 (PrExtGetRecordDataLength.c)
 *     PrExtLogLatencyTime @ 0x1406E0FE4 (PrExtLogLatencyTime.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpLoadMicrocodeSerialized @ 0x140787C50 (HalpLoadMicrocodeSerialized.c)
 *     HalpMcExportAndChargeNeededData @ 0x140787D24 (HalpMcExportAndChargeNeededData.c)
 *     PoDisableSleepStates @ 0x1407CF760 (PoDisableSleepStates.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  struct _LIST_ENTRY *v13; // [rsp+50h] [rbp-10h] BYREF
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
            if ( IsMicrosoftCompatibleHvLoaded && qword_140FBB5B0 )
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
                    if ( qword_140FBB5B8 )
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
