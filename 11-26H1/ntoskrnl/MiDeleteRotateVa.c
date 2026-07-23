/*
 * XREFs of MiDeleteRotateVa @ 0x140314480
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReduceShareCount @ 0x1402BC9E0 (MiReduceShareCount.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiUnmapFrameBuffer @ 0x140314AD4 (MiUnmapFrameBuffer.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiDeleteRotateVa(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 184);
  v6 = *v4;
  v7 = *(_QWORD *)(v4[1] + 32);
  if ( (unsigned int)MiRotatedToFrameBuffer(a2, a2, a3, a4) )
  {
    v9 = *(_QWORD *)(v6 + 16);
    MiUnmapFrameBuffer(v7, a2, 3LL);
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    v10 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiReduceShareCount(v10, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  else
  {
    if ( (*(_QWORD *)a2 & 0x42) != 0 && (*(_DWORD *)(v7 + 48) & 0x180000) == 0x180000 && (*(_DWORD *)(v7 + 48) & 1) == 0 )
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a2 << 25) >> 16, v7);
    return 0LL;
  }
}
