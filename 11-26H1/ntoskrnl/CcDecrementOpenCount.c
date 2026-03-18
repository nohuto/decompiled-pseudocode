/*
 * XREFs of CcDecrementOpenCount @ 0x14039E74C
 * Callers:
 *     CcWriteBehindPreProcess @ 0x1403848C4 (CcWriteBehindPreProcess.c)
 *     CcPerformReadAhead @ 0x140386E18 (CcPerformReadAhead.c)
 *     CcNotifyOfMappedWrite @ 0x14038984C (CcNotifyOfMappedWrite.c)
 *     CcPurgeCacheSection @ 0x14039B300 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14046D008 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteAbort @ 0x1405B1FC0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039D068 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1403E0640 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E07DC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E0844 (CcNotifyWriteBehindVolume.c)
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
