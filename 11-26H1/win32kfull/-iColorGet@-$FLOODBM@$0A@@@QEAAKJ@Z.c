/*
 * XREFs of ?iColorGet@?$FLOODBM@$0A@@@QEAAKJ@Z @ 0x140333340
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     ?bSearchAllSpans@?$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14033312C (-bSearchAllSpans@-$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     ?vFindExtent@?$FLOODBM@$0A@@@QEAAXJAEAJ0@Z @ 0x140333438 (-vFindExtent@-$FLOODBM@$0A@@@QEAAXJAEAJ0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FLOODBM<0>::iColorGet(__int64 a1, int a2)
{
  unsigned int v3; // eax

  switch ( *(_DWORD *)a1 )
  {
    case 1:
      return (*(unsigned __int8 *)(((__int64)a2 >> 3) + *(_QWORD *)(a1 + 24)) >> (7 - (a2 & 7))) & 1;
    case 2:
      v3 = *(unsigned __int8 *)(((__int64)a2 >> 1) + *(_QWORD *)(a1 + 24));
      if ( (a2 & 1) != 0 )
        return v3 & 0xF;
      else
        return v3 >> 4;
    case 3:
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + a2);
    case 4:
      return *(_DWORD *)(a1 + 36) & (unsigned int)*(unsigned __int16 *)(2 * a2 + *(_QWORD *)(a1 + 24));
    case 5:
      return *(unsigned __int8 *)(3 * a2 + *(_QWORD *)(a1 + 24)) | (*(unsigned __int16 *)(3 * a2
                                                                                        + *(_QWORD *)(a1 + 24)
                                                                                        + 1LL) << 8);
    case 6:
      return (unsigned int)(*(_DWORD *)(a1 + 36) & *(_DWORD *)(4 * a2 + *(_QWORD *)(a1 + 24)));
    default:
      return 0LL;
  }
}
