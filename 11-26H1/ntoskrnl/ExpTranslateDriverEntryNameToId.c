/*
 * XREFs of ExpTranslateDriverEntryNameToId @ 0x140842F18
 * Callers:
 *     ExpIsDriverEntry @ 0x140841C70 (ExpIsDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 * Callees:
 *     towlower @ 0x14053A250 (towlower.c)
 */

__int64 __fastcall ExpTranslateDriverEntryNameToId(wint_t *a1, int *a2)
{
  int v4; // edi
  unsigned int i; // esi
  wint_t v6; // ax
  int v7; // edi

  if ( towlower(*a1) != 100
    || towlower(a1[1]) != 114
    || towlower(a1[2]) != 105
    || towlower(a1[3]) != 118
    || towlower(a1[4]) != 101
    || towlower(a1[5]) != 114 )
  {
    return 0LL;
  }
  v4 = 0;
  for ( i = 6; i < 0xA; ++i )
  {
    v6 = towlower(a1[i]);
    if ( (unsigned __int16)(v6 - 48) > 9u )
    {
      if ( (unsigned __int16)(v6 - 97) > 5u )
        return 0LL;
      v7 = 16 * v4 - 87;
    }
    else
    {
      v7 = 16 * v4 - 48;
    }
    v4 = v6 + v7;
  }
  if ( a1[10] )
    return 0LL;
  *a2 = v4;
  return 1LL;
}
