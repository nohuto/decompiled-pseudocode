/*
 * XREFs of KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022C528
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x140420BA0 (KiUnparkCurrentProcessor.c)
 * Callees:
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 */

void __fastcall KiAdjustReadyQueueScanOwnerOnParkingChange(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al

  v3 = a1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD *)(v3 + 36480);
  if ( !v6 )
    goto LABEL_5;
  v7 = *(_QWORD *)(v3 + 36488);
  v8 = v6 & *(_QWORD *)(a2 + 80);
  if ( v8 )
  {
    if ( v8 == v5 )
    {
      *(_DWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int8 *)(v3 + 208)].Flink
                                   + *(unsigned __int8 *)(v7 + 709))]
                + 36496) = 0;
      v14 = *(_BYTE *)(v3 + 209);
      *(_DWORD *)(v3 + 36496) = 1;
      goto LABEL_15;
    }
    if ( !*(_DWORD *)(v3 + 36496) || (*(_QWORD *)(a2 + 80) & v5) != 0 )
      goto LABEL_5;
  }
  else
  {
    v4 = 1;
    if ( !(unsigned __int8)KeIsForceParkingEnabled(v5) )
      goto LABEL_5;
    v11 = *(_QWORD *)(v9 + 104);
    if ( (v11 & v10) == 0 )
      goto LABEL_5;
    if ( !*(_DWORD *)(v3 + 36496) )
      goto LABEL_5;
    v8 = *(_QWORD *)(v3 + 36480) & ~v11;
    if ( !v8 )
      goto LABEL_5;
  }
  *(_DWORD *)(v3 + 36496) = 0;
  _BitScanReverse64(&v12, v8);
  v13 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int8 *)(v3 + 208)].Flink
                         + (int)v12)];
  *(_DWORD *)(v13 + 36496) = 1;
  v14 = *(_BYTE *)(v13 + 209);
LABEL_15:
  *(_BYTE *)(v7 + 709) = v14;
LABEL_5:
  if ( a3 )
    *a3 = v4;
}
