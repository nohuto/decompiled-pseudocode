/*
 * XREFs of ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140166BB0
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::operator+=(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == v2 || (v3 = *(_DWORD *)(a1 + 12), v4 = *(_DWORD *)(a1 + 4), v4 == v3) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    if ( *(_DWORD *)a2 < *(_DWORD *)a1 )
      *(_DWORD *)a1 = *(_DWORD *)a2;
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 < v4 )
      *(_DWORD *)(a1 + 4) = v5;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v6 > v2 )
      *(_DWORD *)(a1 + 8) = v6;
    v7 = *(_DWORD *)(a2 + 12);
    if ( v7 > v3 )
      *(_DWORD *)(a1 + 12) = v7;
  }
}
