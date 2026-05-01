/*
 * XREFs of ??1_Reallocation_guard@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ @ 0x1805BE70C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAPEAUDISPLAYCONFIG_MODE_INFO@@QEAU2@AEBU2@@Z @ 0x1805BE0A0 (--$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$alloc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) << 6));
}
