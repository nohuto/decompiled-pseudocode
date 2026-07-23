/*
 * XREFs of RtlFindLongestRunClear @ 0x14061BA60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearRuns @ 0x140407B70 (RtlFindClearRuns.c)
 */

ULONG __stdcall RtlFindLongestRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  _RTL_BITMAP_RUN RunArray; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlFindClearRuns(BitMapHeader, &RunArray, 1u, 1u) == 1 )
  {
    *StartingIndex = RunArray.StartingIndex;
    return RunArray.NumberOfBits;
  }
  else
  {
    *StartingIndex = 0;
    return 0;
  }
}
