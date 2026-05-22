/*
 * XREFs of ??1_Reallocation_guard@?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x1800D96AC
 * Callers:
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z @ 0x1800D901C (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(2LL * *(_QWORD *)(a1 + 16)));
}
