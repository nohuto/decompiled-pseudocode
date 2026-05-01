/*
 * XREFs of ?at@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAAAEAUtagPRESENTFRAME@@_K@Z @ 0x1801E8274
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034C598 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<tagPRESENTFRAME>::at(__int64 **a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( (unsigned __int64)a1[4] <= a2 )
  {
    std::_Xout_of_range("invalid deque<T> subscript");
    __debugbreak();
  }
  v2 = 0LL;
  if ( *a1 )
    v2 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * (((unsigned __int64)a1[3] + a2) & (*(_QWORD *)(v2 + 16) - 1LL)));
}
