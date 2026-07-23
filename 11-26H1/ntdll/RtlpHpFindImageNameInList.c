/*
 * XREFs of RtlpHpFindImageNameInList @ 0x1800E6634
 * Callers:
 *     RtlpHpOptIntoSegmentHeap @ 0x1800CFF64 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 * Callees:
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpFindImageNameInList(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // edi
  _WORD *i; // rcx
  const wchar_t *v4; // rsi
  unsigned int j; // ebx
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  for ( i = (_WORD *)(v1 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v1; --i )
  {
    if ( *i == 92 )
    {
      if ( v2 )
      {
        v4 = i + 1;
        if ( i != (_WORD *)-2LL )
        {
          for ( j = 0; j < 0x18; ++j )
          {
            if ( !wcsnicmp(v4, (&off_180170F20)[j], v2) )
            {
              v7 = -1LL;
              do
                ++v7;
              while ( (&off_180170F20)[j][v7] );
              if ( v2 == v7 )
                return 1LL;
            }
          }
        }
      }
      return 0LL;
    }
    ++v2;
  }
  return 0LL;
}
