/*
 * XREFs of CcGetNumberOfMappedPages @ 0x1404E1730
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void __fastcall CcGetNumberOfMappedPages(__int64 a1, _QWORD *a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  LegacyAutoBoost *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  __int64 v10; // rtt

  v4 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v4 )
  {
    v7 = (LegacyAutoBoost *)KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 104), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v4 + 104), 0, v7, (struct _KTHREAD *)(v4 + 104));
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v7 + 33) |= 2u;
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    *a2 = (unsigned __int64)*(unsigned int *)(v4 + 548) << 6;
    *a3 = (unsigned __int64)*(unsigned int *)(v4 + 552) << 6;
    _m_prefetchw((const void *)(v4 + 104));
    v8 = *(_QWORD *)(v4 + 104);
    v9 = v8 - 16;
    if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v9 = 0LL;
    if ( (v8 & 2) != 0
      || (v10 = *(_QWORD *)(v4 + 104),
          v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 104), v9, v8)) )
    {
      ExfReleasePushLock((_QWORD *)(v4 + 104));
    }
    KeAbPostRelease(v4 + 104);
  }
}
