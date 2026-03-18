/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x14003AE50
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x14009AF10 (VidSchUnreferenceDmaBuffer.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     RemoveDMAReferences @ 0x14003AF5C (RemoveDMAReferences.c)
 *     VidSchUnreferenceDmaBuffer @ 0x14009AF10 (VidSchUnreferenceDmaBuffer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmUnreferenceDmaBuffer(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a2 )
    return VidSchUnreferenceDmaBuffer(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 128) + 16LL) + 744LL), a1);
  result = *(_QWORD *)&g_IsInternalReleaseOrDbg;
  v4 = *(_QWORD *)(a1 + 96);
  if ( g_IsInternalReleaseOrDbg )
  {
    result = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(result + 24) = a1;
    WdLogGlobalForLineNumber = 30283;
  }
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 136) )
    goto LABEL_8;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !v6 )
      break;
    result = *(unsigned int *)(v6 + 692);
    if ( (int)result >= 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 692));
      break;
    }
    v7 = *(int *)(v6 + 692);
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 270LL, 41LL, v6, v7, 0LL);
    WdLogGlobalForLineNumber = 213;
    do
    {
LABEL_8:
      v8 = *(_QWORD *)(v4 + 8 * v5);
      if ( v8 )
        result = RemoveDMAReferences(v8, 1LL);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a1 + 136) );
  }
  ++*(_DWORD *)(a1 + 20);
  return result;
}
