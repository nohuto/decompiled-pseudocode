/*
 * XREFs of MiCachedPageNotifyPf @ 0x140A5CB60
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiWalkAllBitmapRanges @ 0x14044B8F0 (MiWalkAllBitmapRanges.c)
 *     RtlClearAllBitsEx @ 0x140483500 (RtlClearAllBitsEx.c)
 */

void __fastcall MiCachedPageNotifyPf(__int64 a1)
{
  __int64 v2; // rsi

  if ( *(_QWORD *)(a1 + 128) )
  {
    v2 = **(_QWORD **)(a1 + 24);
    *(_QWORD *)(a1 + 160) = MiReferenceControlAreaFile(v2);
    MiWalkAllBitmapRanges((unsigned __int64 *)(a1 + 112), (__int64)MiNotifyPfCheckCachedPages, a1);
    MiDereferenceControlAreaFile(v2, *(_QWORD *)(a1 + 160));
    *(_QWORD *)(a1 + 160) = 0LL;
    RtlClearAllBitsEx(a1 + 112);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
}
