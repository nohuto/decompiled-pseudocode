/*
 * XREFs of ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801A3618
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x180019BF0 (--$_Reallocate@$0A@@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801FEBEC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 * Callees:
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18001A27C (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CDrawListBitmap *v6; // rcx
  __int64 result; // rax

  v6 = *(CDrawListBitmap **)a1;
  if ( v6 )
  {
    detail::destruct_range<EffectInput>(v6, *(CDrawListBitmap **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 112 * a3;
  result = a2 + 112 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
