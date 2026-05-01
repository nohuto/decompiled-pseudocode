/*
 * XREFs of ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x180358620
 * Callers:
 *     ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x180342054 (--1-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Reset_map@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x180358588 (-_Reset_map@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagPRESENTFRAME>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    v1 = a1[4];
    if ( !v1 )
      break;
    v2 = v1 - 1;
    a1[4] = v2;
    if ( !v2 )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    std::deque<tagPRESENTFRAME>::_Reset_map((__int64)a1);
}
