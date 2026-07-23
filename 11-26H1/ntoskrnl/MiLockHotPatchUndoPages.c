/*
 * XREFs of MiLockHotPatchUndoPages @ 0x140877A3C
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140879848 (MiPrepareDriverForHotPatch.c)
 * Callees:
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x1408B135C (RtlDetermineHotPatchUndoExtent.c)
 */

__int64 __fastcall MiLockHotPatchUndoPages(__int64 a1, int a2)
{
  int i; // ebx
  __int64 result; // rax
  unsigned int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  for ( i = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(a2, 1, i, (unsigned int)&v7, (__int64)&v6); ++i )
  {
    result = MiLockDriverPageRange(a1, v7, v6, 1, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
