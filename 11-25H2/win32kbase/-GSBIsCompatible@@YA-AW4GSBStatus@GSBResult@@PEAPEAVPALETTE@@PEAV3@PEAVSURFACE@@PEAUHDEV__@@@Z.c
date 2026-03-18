/*
 * XREFs of ?GSBIsCompatible@@YA?AW4GSBStatus@GSBResult@@PEAPEAVPALETTE@@PEAV3@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400DD160
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GSBIsCompatible(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10

  v4 = 0;
  if ( (*(_WORD *)(a3 + 100) || *(_QWORD *)(a3 + 24)) && *(_QWORD *)(a3 + 48) != a4 )
    return 1;
  if ( a2 )
  {
    *a1 = a2;
  }
  else if ( *(_DWORD *)(a3 + 96) == *(_DWORD *)(a4 + 2092) )
  {
    if ( (*(_DWORD *)(a4 + 2156) & 0x100) != 0 )
      *a1 = 0LL;
    else
      *a1 = *(_QWORD *)(a4 + 1792);
  }
  else
  {
    return 2;
  }
  return v4;
}
