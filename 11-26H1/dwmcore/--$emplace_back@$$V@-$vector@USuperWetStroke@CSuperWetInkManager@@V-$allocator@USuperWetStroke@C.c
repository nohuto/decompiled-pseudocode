/*
 * XREFs of ??$emplace_back@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180230140
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180125CD8 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18022FC7C (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 */

char *__fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::emplace_back<>(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = a1[1];
  if ( v1 == a1[2] )
    return std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(a1, v1);
  *(_DWORD *)(v1 + 97) = 0;
  *(_WORD *)(v1 + 101) = 0;
  *(_BYTE *)(v1 + 103) = 0;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_OWORD *)(v1 + 16) = 0LL;
  *(_OWORD *)(v1 + 32) = 0LL;
  *(_OWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  v2 = a1[1];
  a1[1] = v2 + 104;
  return (char *)v2;
}
