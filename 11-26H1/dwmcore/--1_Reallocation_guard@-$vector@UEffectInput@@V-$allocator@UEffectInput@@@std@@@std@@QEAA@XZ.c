/*
 * XREFs of ??1_Reallocation_guard@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA@XZ @ 0x18028839C
 * Callers:
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801FEBEC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 * Callees:
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18001A27C (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<EffectInput>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    detail::destruct_range<EffectInput>(*(CDrawListBitmap **)(a1 + 24), *(CDrawListBitmap **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 112LL * *(_QWORD *)(a1 + 16));
  }
}
