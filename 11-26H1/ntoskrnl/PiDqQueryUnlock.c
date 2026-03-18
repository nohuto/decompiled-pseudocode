/*
 * XREFs of PiDqQueryUnlock @ 0x14098FE44
 * Callers:
 *     PiDqIrpCancel @ 0x1405DB110 (PiDqIrpCancel.c)
 *     PiDqIrpQueryGetResult @ 0x14098E4A4 (PiDqIrpQueryGetResult.c)
 *     PiDqQuerySerializeActionQueue @ 0x14098E76C (PiDqQuerySerializeActionQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x14098EE00 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14098EFF8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 __fastcall PiDqQueryUnlock(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((unsigned __int64)v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5);
}
