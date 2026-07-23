/*
 * XREFs of MiMirrorReduceBlackToActiveAndPrivatePages @ 0x1406F4B60
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiMirrorReduceBlackToActiveAndPrivatePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+30h] [rbp-18h]

  v2 = a1;
  v3 = 0LL;
  v4 = 0LL;
  result = MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlockFill11[64],
             (__int64)MiPurgeMirrorPacketPages,
             (__int64)&v2);
  if ( (int)result >= 0 )
  {
    LODWORD(v3) = 1;
    return MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlock[2],
             (__int64)MiPurgeMirrorPacketPages,
             (__int64)&v2);
  }
  return result;
}
