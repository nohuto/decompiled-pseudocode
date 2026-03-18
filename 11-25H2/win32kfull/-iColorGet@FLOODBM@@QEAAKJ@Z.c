/*
 * XREFs of ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x140160428
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14015F1D4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x140160360 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FLOODBM::iColorGet(FLOODBM *this, int a2)
{
  unsigned __int8 *v3; // rdx
  unsigned int v4; // eax

  switch ( *(_DWORD *)this )
  {
    case 1:
      return (*(unsigned __int8 *)(((__int64)a2 >> 3) + *((_QWORD *)this + 3)) >> (7 - (a2 & 7))) & 1;
    case 2:
      v4 = *(unsigned __int8 *)(((__int64)a2 >> 1) + *((_QWORD *)this + 3));
      if ( (a2 & 1) != 0 )
        return v4 & 0xF;
      else
        return v4 >> 4;
    case 3:
      return *(unsigned __int8 *)(*((_QWORD *)this + 3) + a2);
    case 4:
      return *((_DWORD *)this + 9) & (unsigned int)*(unsigned __int16 *)(2 * a2 + *((_QWORD *)this + 3));
    case 5:
      v3 = (unsigned __int8 *)(*((_QWORD *)this + 3) + 3 * a2);
      return (*(unsigned __int16 *)(v3 + 1) << 8) | (unsigned int)*v3;
    case 6:
      return (unsigned int)(*((_DWORD *)this + 9) & *(_DWORD *)(4 * a2 + *((_QWORD *)this + 3)));
    default:
      return 0LL;
  }
}
