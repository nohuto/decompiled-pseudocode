/*
 * XREFs of RtlSubtractAffinityEx @ 0x14025CBE8
 * Callers:
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 *     PpmHeteroDistributeUtility @ 0x14025B4D0 (PpmHeteroDistributeUtility.c)
 *     PpmParkReportParkedCores @ 0x14025BAD0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x14025CB80 (PpmParkReportUnparkedCores.c)
 *     KeSubtractAffinityEx2 @ 0x14025CBD0 (KeSubtractAffinityEx2.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiStopProfileTarget @ 0x140421130 (KiStopProfileTarget.c)
 *     KiStartProfileTarget @ 0x1404C89E0 (KiStartProfileTarget.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpRemoveProfileSourceFromList @ 0x140582CD8 (HalpRemoveProfileSourceFromList.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     PpmPostProcessMediaBuffering @ 0x1409C1AD0 (PpmPostProcessMediaBuffering.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     ?RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140625BF4 (-RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall RtlSubtractAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, __int64 a3)
{
  unsigned __int16 Count; // ax
  int v6; // r9d
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // dx
  signed __int64 v11; // r11
  __int64 v12; // rsi
  $B38C3B1372D6E954799962D5DD404846 *v13; // rbx
  bool v14; // zf
  __int64 v15; // rcx
  unsigned __int64 v17; // rcx

  if ( !a3 )
    return RtlpSubtractAffinityExNoResult(a1, a2);
  Count = a2->Count;
  v6 = 0;
  v7 = a1->Count;
  v8 = *(_WORD *)(a3 + 2);
  *(_WORD *)(a3 + 2) = v8;
  if ( v7 >= Count )
    v7 = Count;
  v9 = a1->Count;
  *(_WORD *)a3 = a1->Count;
  if ( v9 > v8 )
    *(_WORD *)a3 = v8;
  if ( v7 <= v8 )
    v8 = v7;
  v10 = 0;
  if ( v8 )
  {
    v11 = (char *)a2 - (char *)a1;
    v12 = v8;
    v13 = &a1->8;
    v10 = v8;
    do
    {
      v14 = (v13->Bitmap[0] & ~*(unsigned __int64 *)((char *)v13->Bitmap + v11)) == 0;
      *(unsigned __int64 *)((char *)v13->Bitmap + a3 - (_QWORD)a1) = v13->Bitmap[0] & ~*(unsigned __int64 *)((char *)v13->Bitmap + v11);
      v13 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v13 + 8);
      if ( !v14 )
        v6 = 1;
      --v12;
    }
    while ( v12 );
  }
  while ( v10 < *(_WORD *)a3 )
  {
    v17 = a1->Bitmap[v10];
    *(_QWORD *)(a3 + 8LL * v10 + 8) = v17;
    if ( v17 )
      v6 = 1;
    ++v10;
  }
  *(_DWORD *)(a3 + 4) = 0;
  while ( v10 < *(_WORD *)(a3 + 2) )
  {
    v15 = v10++;
    *(_QWORD *)(a3 + 8 * v15 + 8) = 0LL;
  }
  return v6;
}
