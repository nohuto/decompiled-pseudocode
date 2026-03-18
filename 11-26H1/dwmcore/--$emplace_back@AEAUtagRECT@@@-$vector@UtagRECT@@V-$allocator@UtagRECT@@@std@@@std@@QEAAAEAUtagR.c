/*
 * XREFs of ??$emplace_back@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAU2@@Z @ 0x1802346E0
 * Callers:
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056338 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?GetDirtyRects@COverlaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056520 (-GetDirtyRects@COverlaySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801E56BC (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 */

char *__fastcall std::vector<tagRECT>::emplace_back<tagRECT &>(__int64 a1, __int128 *a2)
{
  __int128 *v3; // rdx
  __int64 v4; // rdx

  v3 = *(__int128 **)(a1 + 8);
  if ( v3 == *(__int128 **)(a1 + 16) )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>((void **)a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 16;
  return (char *)v4;
}
