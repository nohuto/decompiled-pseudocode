/*
 * XREFs of ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x180342054
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$1 @ 0x1806E4ED3 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x180358620 (-_Tidy@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagPRESENTFRAME>::~deque<tagPRESENTFRAME>(void **a1)
{
  void *v2; // rcx

  std::deque<tagPRESENTFRAME>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x10);
}
