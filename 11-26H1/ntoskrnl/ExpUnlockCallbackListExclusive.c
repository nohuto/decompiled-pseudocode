/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1404DC800
 * Callers:
 *     ExpDeleteCallback @ 0x14083A830 (ExpDeleteCallback.c)
 *     ExpGetNextCallback @ 0x140AFA0E0 (ExpGetNextCallback.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  signed __int64 v2; // r8
  __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // rcx

  _m_prefetchw(&stru_140EFEF90);
  v2 = *(_QWORD *)&stru_140EFEF90.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140EFEF90.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (stru_140EFEF90.Header.Type & 2) != 0
    || (v3 = *(_QWORD *)&stru_140EFEF90.Header.Lock,
        v3 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&stru_140EFEF90,
                v2,
                *(signed __int64 *)&stru_140EFEF90.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140EFEF90);
  }
  KeAbPostRelease((unsigned __int64)&stru_140EFEF90);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
