/*
 * XREFs of CmFcpManagerFlushUsageTimerRoutine @ 0x140354C70
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcpManagerFlushUsageTimerRoutine(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax
  unsigned int v3; // r8d

  _m_prefetchw((const void *)(a2 + 1744));
  do
  {
    v2 = *(_DWORD *)(a2 + 1744);
    v3 = v2 & 0xFFFFFFED | 0x10;
    if ( (v2 & 1) == 0 )
      v3 = *(_DWORD *)(a2 + 1744) & 0xFFFFFFFD;
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1744), v3, v2) );
  return CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1552));
}
