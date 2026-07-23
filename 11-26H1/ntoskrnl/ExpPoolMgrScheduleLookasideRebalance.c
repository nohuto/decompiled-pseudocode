/*
 * XREFs of ExpPoolMgrScheduleLookasideRebalance @ 0x140428D8C
 * Callers:
 *     ExHeapLookasideRebalance @ 0x140428AE0 (ExHeapLookasideRebalance.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall ExpPoolMgrScheduleLookasideRebalance(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // r9
  _DWORD *v4; // rdx

  v2 = 0;
  v3 = 2LL;
  v4 = (_DWORD *)(a1 + 32);
  do
  {
    v2 += *v4;
    v4 += 6;
    --v3;
  }
  while ( v3 );
  if ( v2 )
  {
    _m_prefetchw((const void *)a1);
    if ( (_InterlockedOr((volatile signed __int32 *)a1, 2u) & 2) == 0 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 80), DelayedWorkQueue);
  }
}
