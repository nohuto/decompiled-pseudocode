/*
 * XREFs of CcGetNodeForLazyWrite @ 0x14038B3FC
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetNodeForLazyWrite(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 556);
  if ( v1 == -1 )
    v1 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v2 = v1 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v2 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * v2 + 128);
}
