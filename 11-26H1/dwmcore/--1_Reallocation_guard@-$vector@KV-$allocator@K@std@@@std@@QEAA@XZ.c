/*
 * XREFs of ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1802316F0
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x1801CD8A8 (--$_Reallocate@$0A@@-$vector@MV-$allocator@M@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Insert_counted_range@PEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@1@PEBI_K@Z @ 0x1801E7B2C (--$_Insert_counted_range@PEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x1802314D4 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18023E898 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 4LL * *(_QWORD *)(a1 + 16));
}
