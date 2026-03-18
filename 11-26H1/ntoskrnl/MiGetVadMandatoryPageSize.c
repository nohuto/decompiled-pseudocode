/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140317E90
 * Callers:
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049754C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCreateWriteWatchView @ 0x1409CF818 (MiCreateWriteWatchView.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 *     NtResetWriteWatch @ 0x140AB72D0 (NtResetWriteWatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetVadMandatoryPageSize(unsigned int a1)
{
  unsigned __int64 result; // rax

  result = MiVadPageSizes[(a1 >> 17) & 3];
  if ( result < 0x200 && (a1 & 0x200000) == 0 )
    return 1LL;
  return result;
}
