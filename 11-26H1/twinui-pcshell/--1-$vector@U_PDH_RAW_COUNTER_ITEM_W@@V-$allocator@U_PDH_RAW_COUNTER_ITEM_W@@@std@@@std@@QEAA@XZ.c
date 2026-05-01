/*
 * XREFs of ??1?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@QEAA@XZ @ 0x18034249C
 * Callers:
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$44 @ 0x1806E3DFC (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$44.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::~vector<_PDH_RAW_COUNTER_ITEM_W>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
