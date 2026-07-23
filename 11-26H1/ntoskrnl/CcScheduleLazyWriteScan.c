/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1403E3830
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14039FBB0 (CcChargeDirtyPages.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     CcRescheduleLazyWriteScan @ 0x1403E429C (CcRescheduleLazyWriteScan.c)
 *     CcChargeDirtyPagesInternal @ 0x1404B349C (CcChargeDirtyPagesInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404F26A0 (CcAddDirtyPagesToExternalCache.c)
 *     CcUpdateExternalCacheInfoEx @ 0x1404FE9A0 (CcUpdateExternalCacheInfoEx.c)
 *     CcRegisterExternalCacheEx @ 0x1405B3970 (CcRegisterExternalCacheEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, _BYTE *a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  _BYTE *v10; // rbx

  if ( CcEnablePerVolumeLazyWriter )
  {
    result = a2[1172];
    if ( !result || a3 )
    {
      if ( a4 )
      {
        v7 = 8LL;
      }
      else
      {
        result = -result;
        v7 = result != 0 ? 16 : 4;
      }
      if ( a3 )
      {
        result = CcNotifyWriteBehindVolume(a2, v7);
        v8 = a2 + 985;
      }
      else
      {
        v8 = a2 + 985;
        if ( !a2[985] )
        {
          if ( !a2[984] )
            KeBugCheckEx(0x34u, 0x7C9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a2 + 920), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a2[1172] )
        *v8 = 1;
    }
  }
  else
  {
    result = a1[1292];
    if ( !result || a3 )
    {
      if ( a4 )
      {
        v9 = 8LL;
      }
      else
      {
        result = -result;
        v9 = result != 0 ? 16 : 4;
      }
      if ( a3 )
      {
        result = CcNotifyWriteBehindInternal(a1, v9);
        v10 = a1 + 1049;
      }
      else
      {
        v10 = a1 + 1049;
        if ( !a1[1049] )
        {
          if ( !a1[1048] )
            KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a1 + 984), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v10 = 1;
    }
  }
  return result;
}
