/*
 * XREFs of CcDecrementOpenCount @ 0x1403A04AC
 * Callers:
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteAbort @ 0x1405B47D0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1)
{
  char v1; // r11
  __int64 result; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rbx
  _BYTE *v5; // rax
  int v6; // edx
  char v7; // r11
  __int64 v8; // r8

  v1 = CcEnablePerVolumeLazyWriter;
  --*(_DWORD *)(a1 + 4);
  result = a1 + 600;
  --*(_DWORD *)(a1 + 544);
  v3 = *(_BYTE **)(a1 + 536);
  if ( v1 )
    v4 = *(_QWORD *)result;
  else
    v4 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( v1 )
      v5 = (_BYTE *)(*(_QWORD *)result + 986LL);
    else
      v5 = v3 + 1050;
    *v5 = 1;
    v6 = *(_DWORD *)(a1 + 152);
    result = *(unsigned int *)(a1 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !(_DWORD)result )
        CcInsertIntoDirtySharedCacheMapList(a1);
      if ( v1 )
      {
        result = CcNotifyWriteBehindVolume(v4, 8LL);
        if ( !*(_BYTE *)(v4 + 1172) )
          *(_BYTE *)(v4 + 985) = 1;
      }
      else
      {
        result = CcNotifyWriteBehindInternal(v3, 8LL);
        if ( !v3[1292] )
          v3[1049] = 1;
      }
    }
    else if ( !(_DWORD)result && (v6 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v8) = v7;
      return CcScheduleLazyWriteScan(v3, v4, v8, 0LL);
    }
  }
  return result;
}
