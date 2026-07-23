/*
 * XREFs of MiBlackRemoveChildPartitionHugeRanges @ 0x1406F4200
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiBlackRemoveChildPartitionHugeRanges(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = a1;
  v2[2] = 2LL;
  v2[1] = 0LL;
  return MiWalkAllBitmapRanges(
           (unsigned __int64 *)&stru_140E2ED08.SchedulingGroup,
           (__int64)MiBlackRemoveChildPartitionHugeRangesCallback,
           (__int64)v2);
}
