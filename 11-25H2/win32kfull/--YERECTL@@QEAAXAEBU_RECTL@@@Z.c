/*
 * XREFs of ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14014AFD0
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900 (--$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::operator+=(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r10d
  int v4; // r9d
  int v5; // r8d
  int v6; // r8d

  result = *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)a1 == (_DWORD)result || (v3 = *(_DWORD *)(a1 + 4), v4 = *(_DWORD *)(a1 + 12), v3 == v4) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    if ( *(_DWORD *)a2 < *(_DWORD *)a1 )
      *(_DWORD *)a1 = *(_DWORD *)a2;
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 < v3 )
      *(_DWORD *)(a1 + 4) = v5;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v6 > (int)result )
      *(_DWORD *)(a1 + 8) = v6;
    result = *(unsigned int *)(a2 + 12);
    if ( (int)result > v4 )
      *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
