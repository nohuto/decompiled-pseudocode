/*
 * XREFs of sub_1400859B4 @ 0x1400859B4
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401360E4 @ 0x1401360E4 (sub_1401360E4.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_140138EF0 @ 0x140138EF0 (sub_140138EF0.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400859B4(_DWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *a3 = *(_QWORD *)(a2 + 64);
      *a4 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      *a3 = *(_QWORD *)(a2 + 24);
      *a4 = *(_DWORD *)(a2 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
