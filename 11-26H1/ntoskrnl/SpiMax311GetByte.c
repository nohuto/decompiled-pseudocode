/*
 * XREFs of SpiMax311GetByte @ 0x140722120
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x140722458 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  unsigned __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140E65010) == (_DWORD)qword_140E65010 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( (v5 & 0x8000u) == 0 )
    {
      return 1LL;
    }
    else
    {
      *a2 = v5;
      return (v5 >> 9) & 2;
    }
  }
  else
  {
    v3 = word_140E6501A[HIDWORD(qword_140E65010)];
    *a2 = v3;
    HIDWORD(qword_140E65010) = (WORD2(qword_140E65010) + 1) & 0x3FF;
    if ( (v3 & 0x400) != 0 )
      return 2LL;
    else
      return 0LL;
  }
}
