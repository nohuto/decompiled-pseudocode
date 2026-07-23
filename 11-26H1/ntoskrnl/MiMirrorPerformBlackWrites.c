/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x1406F4A58
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+38h] [rbp-10h]

  v2[0] = *a1;
  v2[1] = 0LL;
  v2[2] = 0LL;
  v3 = 0LL;
  result = MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlockFill11[64],
             (__int64)MiWriteBlackPages,
             (__int64)v2);
  if ( (int)result >= 0 )
  {
    HIDWORD(v3) = 1;
    return MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlock[2],
             (__int64)MiWriteBlackPages,
             (__int64)v2);
  }
  return result;
}
