/*
 * XREFs of ?vFindExtent@?$FLOODBM@$0A@@@QEAAXJAEAJ0@Z @ 0x140333438
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 *     ?bSearchAllSpans@?$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14033312C (-bSearchAllSpans@-$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 * Callees:
 *     ?iColorGet@?$FLOODBM@$0A@@@QEAAKJ@Z @ 0x140333340 (-iColorGet@-$FLOODBM@$0A@@@QEAAKJ@Z.c)
 */

__int64 __fastcall FLOODBM<0>::vFindExtent(_DWORD *a1, int a2, _DWORD *a3, int *a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 result; // rax

  v4 = a2 - 1;
  v5 = a1[1];
  v6 = a2 + 1;
  if ( a1[8] )
  {
    if ( v4 >= v5 )
    {
      do
      {
        v12 = a1[5];
        if ( (unsigned int)FLOODBM<0>::iColorGet((__int64)a1, v4) != v12 )
          break;
        --v4;
      }
      while ( v4 >= a1[1] );
    }
    while ( v6 < a1[3] )
    {
      v13 = a1[5];
      if ( (unsigned int)FLOODBM<0>::iColorGet((__int64)a1, v6) != v13 )
        break;
      ++v6;
    }
  }
  else
  {
    if ( v4 >= v5 )
    {
      do
      {
        v10 = a1[5];
        if ( (unsigned int)FLOODBM<0>::iColorGet((__int64)a1, v4) == v10 )
          break;
        --v4;
      }
      while ( v4 >= a1[1] );
    }
    while ( v6 < a1[3] )
    {
      v11 = a1[5];
      if ( (unsigned int)FLOODBM<0>::iColorGet((__int64)a1, v6) == v11 )
        break;
      ++v6;
    }
  }
  result = (unsigned int)(v4 + 1);
  *a3 = result;
  *a4 = v6;
  return result;
}
