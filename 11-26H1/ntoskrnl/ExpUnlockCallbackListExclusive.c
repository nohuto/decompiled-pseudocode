/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1404D5EE0
 * Callers:
 *     ExpDeleteCallback @ 0x140840A70 (ExpDeleteCallback.c)
 *     ExpGetNextCallback @ 0x140AFC570 (ExpGetNextCallback.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  signed __int64 v2; // r8
  __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // rcx

  _m_prefetchw(&stru_140EFF2C0);
  v2 = *(_QWORD *)&stru_140EFF2C0.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140EFF2C0.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (stru_140EFF2C0.Header.Type & 2) != 0
    || (v3 = *(_QWORD *)&stru_140EFF2C0.Header.Lock,
        v3 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&stru_140EFF2C0,
                v2,
                *(signed __int64 *)&stru_140EFF2C0.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140EFF2C0);
  }
  KeAbPostRelease((unsigned __int64)&stru_140EFF2C0);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
