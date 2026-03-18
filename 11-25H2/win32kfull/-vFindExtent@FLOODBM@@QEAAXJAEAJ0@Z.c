/*
 * XREFs of ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x140160360
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14015F1D4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 * Callees:
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x140160428 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 */

void __fastcall FLOODBM::vFindExtent(FLOODBM *this, int a2, int *a3, int *a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi

  v4 = a2 - 1;
  v5 = *((_DWORD *)this + 1);
  v6 = a2 + 1;
  if ( *((_DWORD *)this + 8) )
  {
    if ( v4 >= v5 )
    {
      do
      {
        if ( FLOODBM::iColorGet(this, v4) != *((_DWORD *)this + 5) )
          break;
        --v4;
      }
      while ( v4 >= *((_DWORD *)this + 1) );
    }
    while ( v6 < *((_DWORD *)this + 3) && FLOODBM::iColorGet(this, v6) == *((_DWORD *)this + 5) )
      ++v6;
  }
  else
  {
    if ( v4 >= v5 )
    {
      do
      {
        if ( FLOODBM::iColorGet(this, v4) == *((_DWORD *)this + 5) )
          break;
        --v4;
      }
      while ( v4 >= *((_DWORD *)this + 1) );
    }
    while ( v6 < *((_DWORD *)this + 3) && FLOODBM::iColorGet(this, v6) != *((_DWORD *)this + 5) )
      ++v6;
  }
  *a3 = v4 + 1;
  *a4 = v6;
}
