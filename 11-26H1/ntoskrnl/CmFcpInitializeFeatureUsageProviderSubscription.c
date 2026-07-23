/*
 * XREFs of CmFcpInitializeFeatureUsageProviderSubscription @ 0x140867B58
 * Callers:
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x14077C144 (CmFcpManagerAllocateUsageProviderSubscription.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_LIST_ENTRY *__fastcall CmFcpInitializeFeatureUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _LIST_ENTRY *result; // rax

  memset_0((void *)a1, 0, 0x88uLL);
  if ( a4 )
  {
    *(_QWORD *)(a1 + 112) = *(_QWORD *)a4;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(a4 + 24);
    a4 = *(_QWORD *)(a4 + 16);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_QWORD *)(a1 + 32) = CmpWorkItemWrapper;
  *(_QWORD *)(a1 + 64) = CmFcpFeatureUsageProviderSubscriptionWrapper;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 60) = 4;
  *(_QWORD *)(a1 + 72) = a4;
  result = &CmpFreezeListLock.Timer.TimerListEntry;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = &CmpFreezeListLock.Timer.TimerListEntry;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
