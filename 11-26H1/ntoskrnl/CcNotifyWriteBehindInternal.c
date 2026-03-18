/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1403E07DC
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x14039E74C (CcDecrementOpenCount.c)
 *     CcNotifyWriteBehindHelper @ 0x1403E01E0 (CcNotifyWriteBehindHelper.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcNotifyWriteBehindEx @ 0x1403E045C (CcNotifyWriteBehindEx.c)
 *     CcCoalescingCallBackHelper @ 0x1403E0480 (CcCoalescingCallBackHelper.c)
 *     CcScheduleLazyWriteScan @ 0x1403E0640 (CcScheduleLazyWriteScan.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcExitPartition @ 0x1405B26C4 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E0938 (CcForEachPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(__int64 a1, int a2)
{
  LONG result; // eax
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1364) )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      return CcForEachPrivateVolumeCacheMap(a1, CcNotifyWriteBehindAllVolumesHelper, &v4);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 1048) )
          KeBugCheckEx(0x34u, 0x12ABuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx(a1 + 984, 0LL, 0, 0, 0LL);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 952), 0, 0);
    }
  }
  return result;
}
