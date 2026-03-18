/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18020DE48
 * Callers:
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180126CA0 (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v5 = v4 >> 1;
  if ( v4 <= 0x7FFFFFFFFFFFFFFFLL - (v4 >> 1) )
  {
    v2 = v4 + v5;
    if ( v4 + v5 < a2 )
      v2 = a2;
  }
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16>(*(void **)a1, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return std::vector<unsigned char>::_Buy_raw(a1, v2);
}
