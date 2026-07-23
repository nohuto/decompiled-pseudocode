/*
 * XREFs of MiTrimDelayNeeded @ 0x1403E435C
 * Callers:
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 * Callees:
 *     MiCanFlushMakeProgress @ 0x1403E3EF4 (MiCanFlushMakeProgress.c)
 */

__int64 __fastcall MiTrimDelayNeeded(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v3; // al

  v2 = 0;
  if ( *(_BYTE *)(a2 + 27) )
    return 0LL;
  v3 = *(_BYTE *)(a2 + 24);
  if ( v3 < 4u )
  {
    if ( v3 >= 3u && *(_QWORD *)(a1 + 23456) >= 0x10uLL && *(_QWORD *)(a1 + 1072) )
    {
      LOBYTE(v2) = (unsigned int)MiCanFlushMakeProgress(a1, 1, 0x100uLL) != 0;
      return v2;
    }
    return 0LL;
  }
  return 1LL;
}
