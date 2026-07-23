/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140319EC0
 * Callers:
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCreateWriteWatchView @ 0x1409A07F8 (MiCreateWriteWatchView.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
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
