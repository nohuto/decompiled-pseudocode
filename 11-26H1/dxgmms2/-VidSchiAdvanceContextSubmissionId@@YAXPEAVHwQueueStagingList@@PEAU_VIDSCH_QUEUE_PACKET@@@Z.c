/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140012B50
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiAdvanceContextSubmissionId(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  _QWORD *v2; // r9
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9

  v2 = (_QWORD *)*((_QWORD *)a2 + 11);
  v5 = v2[13];
  v6 = *(_QWORD *)(v2[12] + 24LL);
  v7 = v2[21];
  if ( v7 && *((_QWORD *)a2 + 14) <= v7 )
  {
    if ( !*(_BYTE *)(v5 + 212)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 208), 0, 0)
      && (*(_BYTE *)(v6 + 3284) & 1) == 0 )
    {
      v8 = v2[21];
      v9 = *((_QWORD *)a2 + 14);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1792LL, v9, v8, 0LL);
      WdLogGlobalForLineNumber = 916;
    }
    WdLogSingleEntry1(4LL, *((_QWORD *)a2 + 14));
    WdLogGlobalForLineNumber = 12029;
  }
  else
  {
    if ( *(_BYTE *)(v5 + 212)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 208), 0, 0)
      || (*(_BYTE *)(v6 + 3284) & 1) != 0 )
    {
      WdLogSingleEntry2(4LL, a2, *((_QWORD *)a2 + 14));
      WdLogGlobalForLineNumber = 12048;
    }
    else
    {
      WdLogSingleEntry3(4LL, a2, *((_QWORD *)a2 + 14), v2[21]);
      WdLogGlobalForLineNumber = 12057;
    }
    *(_QWORD *)(*((_QWORD *)a2 + 11) + 168LL) = *((_QWORD *)a2 + 14);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 104LL) + 1840LL) )
      VidSchUnwaitFlipQueue(a1, v6);
  }
}
