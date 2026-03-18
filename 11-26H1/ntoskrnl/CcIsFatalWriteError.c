/*
 * XREFs of CcIsFatalWriteError @ 0x14046DAB0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x140399E5C (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14046D008 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1404AA000 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140264A20 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039ADF4 (CcReferenceSharedCacheMapFileObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x14046DC60 (FsRtlIsTotalDeviceFailure.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  char v5; // bl
  ULONG_PTR v6; // rax
  int v7; // esi

  if ( a2 >= 0 )
    return 0;
  v5 = 1;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x19BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = CcReferenceSharedCacheMapFileObject(a1);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v6, 0x63536343u);
  if ( (a2 == -1073741740 || !v7 && a2 != -1073741672 && a2 != -1073741566 && a2 != -1073741202) && a2 != -1073741810 )
  {
    if ( a2 == -1073741667 )
    {
      if ( !v7 )
        return v5;
      return FsRtlIsTotalDeviceFailure(a2) == 0;
    }
    if ( a2 != -1073741662 )
      return FsRtlIsTotalDeviceFailure(a2) == 0;
  }
  return v5;
}
