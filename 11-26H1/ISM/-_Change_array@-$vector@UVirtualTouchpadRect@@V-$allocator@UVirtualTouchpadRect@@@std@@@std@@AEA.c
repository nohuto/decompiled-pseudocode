/*
 * XREFs of ?_Change_array@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXQEAUVirtualTouchpadRect@@_K1@Z @ 0x18013E8F4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x18013DB5C (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<VirtualTouchpadRect>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
