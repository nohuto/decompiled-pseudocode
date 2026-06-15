/*
 * XREFs of ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x180037BDC
 * Callers:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a1 + 16)));
}
