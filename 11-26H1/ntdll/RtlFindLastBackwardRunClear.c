/*
 * XREFs of RtlFindLastBackwardRunClear @ 0x1800E8640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindLastBackwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int *Buffer; // r9
  unsigned int *v5; // r8
  ULONG v6; // ecx
  unsigned int *i; // r8

  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  else
  {
    Buffer = BitMapHeader->Buffer;
    v5 = &Buffer[(unsigned __int64)FromIndex >> 5];
    if ( v5 != Buffer && (*v5 | ~dword_18017D250[(FromIndex & 0x1F) + 1]) == 0xFFFFFFFF )
    {
      FromIndex = (FromIndex & 0xFFFFFFE0) - 1;
      for ( --v5; v5 > Buffer && *v5 == -1; --v5 )
        FromIndex -= 32;
    }
    while ( FromIndex != -1 && _bittest64((const signed __int64 *)Buffer, FromIndex) == 1 )
      --FromIndex;
    v6 = FromIndex;
    if ( (dword_18017D250[FromIndex & 0x1F] & *v5) == 0 )
    {
      v6 = (FromIndex & 0xFFFFFFE0) - 1;
      for ( i = v5 - 1; i > Buffer && !*i; --i )
        v6 -= 32;
    }
    while ( v6 != -1 && !_bittest64((const signed __int64 *)Buffer, v6) )
      --v6;
    *StartingRunIndex = v6 + 1;
    return FromIndex - v6;
  }
}
