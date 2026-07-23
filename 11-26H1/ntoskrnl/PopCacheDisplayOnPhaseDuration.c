/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x1404FB6A8
 * Callers:
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F10278);
  if ( dword_140F10280 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140F10268 = a2;
        break;
      case '0':
        qword_140F10270 = a2;
        break;
    }
  }
  KeReleaseSpinLock(&qword_140F10278, v4);
}
