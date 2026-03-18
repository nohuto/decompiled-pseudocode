/*
 * XREFs of ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x18020AEFC
 * Callers:
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020AE10 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18022FDFC (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 */

__int64 __fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 == *(_QWORD *)(a1 + 16) )
    return std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>();
  *(_DWORD *)(v1 + 113) = 0;
  *(_WORD *)(v1 + 117) = 0;
  *(_BYTE *)(v1 + 119) = 0;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = -1LL;
  *(_OWORD *)(v1 + 32) = 0LL;
  *(_OWORD *)(v1 + 48) = 0LL;
  *(_OWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_BYTE *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2 + 120;
  return v2;
}
