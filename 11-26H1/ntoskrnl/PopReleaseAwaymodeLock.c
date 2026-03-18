/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140C087E0
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140B3ABD0 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void PopReleaseAwaymodeLock()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  if ( (struct _KTHREAD *)unk_140F10E48 == KeGetCurrentThread() )
    unk_140F10E48 = 0LL;
  _m_prefetchw(&stru_140F10828);
  v0 = *(_QWORD *)&stru_140F10828.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F10828.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (stru_140F10828.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&stru_140F10828.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&stru_140F10828,
                v0,
                *(signed __int64 *)&stru_140F10828.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F10828);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F10828);
  KeLeaveCriticalRegion();
}
