/*
 * XREFs of PnprMirrorPhysicalMemory @ 0x1405DBC70
 * Callers:
 *     <none>
 * Callees:
 *     PnprGetMillisecondCounter @ 0x140BF16E4 (PnprGetMillisecondCounter.c)
 *     PnprMarkOrMirrorPages @ 0x140BF1DB4 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprMirrorPhysicalMemory(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si

  v3 = 0;
  if ( *(_BYTE *)(PnprContext + 208) )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    PnprGetMillisecondCounter(0LL);
  }
  else
  {
    v3 = 1;
  }
  LOBYTE(a3) = v3;
  return PnprMarkOrMirrorPages(a1, a2, a3);
}
