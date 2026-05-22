/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800CEEB4
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x1800CE7E4 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CE624 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 */

void __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(16LL * *(_QWORD *)(a1 + 16)));
  }
}
