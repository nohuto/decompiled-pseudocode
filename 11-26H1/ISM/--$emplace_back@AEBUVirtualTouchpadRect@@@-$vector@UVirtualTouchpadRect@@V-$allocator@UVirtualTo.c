/*
 * XREFs of ??$emplace_back@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAUVirtualTouchpadRect@@AEBU2@@Z @ 0x1801A54D8
 * Callers:
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A597C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x18013DB5C (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 */

char *__fastcall std::vector<VirtualTouchpadRect>::emplace_back<VirtualTouchpadRect const &>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<VirtualTouchpadRect>::_Emplace_reallocate<VirtualTouchpadRect const &>(
             (void **)a1,
             v3,
             (__int128 *)a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 24;
  return (char *)v4;
}
