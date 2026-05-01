/*
 * XREFs of ??1_Reallocation_guard@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@QEAA@XZ @ 0x180342D78
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18033E5D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(48LL * *(_QWORD *)(a1 + 16)));
}
