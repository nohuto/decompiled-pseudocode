/*
 * XREFs of ??1?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@QEAA@XZ @ 0x180341474
 * Callers:
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$39 @ 0x1806BCA3A (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$39.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::~vector<_PDH_RAW_COUNTER_ITEM_W>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
