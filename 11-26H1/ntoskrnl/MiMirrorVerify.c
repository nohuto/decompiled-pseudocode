/*
 * XREFs of MiMirrorVerify @ 0x140C0722C
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiMirrorVerify(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  result = MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlock[1],
             (__int64)MiVerifyMirrorPacketPages,
             a1);
  if ( (int)result >= 0 )
    return MiWalkAllBitmapRanges(
             (unsigned __int64 *)&stru_140E2ED08.WaitBlock[1].Object,
             (__int64)MiVerifyMirrorPacketPages,
             a1);
  return result;
}
