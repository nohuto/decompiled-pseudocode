/*
 * XREFs of ??$emplace_back@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAUDisplayOcclusionRect@@AEAU2@@Z @ 0x1801A6048
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801A64F4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18013C768 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::emplace_back<DisplayOcclusionRect &>(_QWORD *a1, __int128 *a2)
{
  __int128 *v3; // rdx
  _OWORD *v4; // rdx
  __int64 v5; // rdx

  v3 = (__int128 *)a1[1];
  if ( v3 == (__int128 *)a1[2] )
    return std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v3[3] = a2[3];
  v3[4] = a2[4];
  v3[5] = a2[5];
  v3[6] = a2[6];
  v4 = v3 + 8;
  *(v4 - 1) = a2[7];
  *v4 = a2[8];
  v4[1] = a2[9];
  v4[2] = a2[10];
  v5 = a1[1];
  a1[1] = v5 + 176;
  return (char *)v5;
}
