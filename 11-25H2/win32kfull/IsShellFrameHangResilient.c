/*
 * XREFs of IsShellFrameHangResilient @ 0x140151BD4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 * Callees:
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140151C68 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r8

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1360) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(*(tagQ **)(a1 + 472)) )
    return (unsigned int)IsAdaptiveQueueDetachExempted(v3) == 0;
  return v1;
}
