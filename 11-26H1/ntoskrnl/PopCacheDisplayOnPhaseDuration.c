/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x140501EB8
 * Callers:
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&unk_140F10EF8);
  if ( unk_140F10F00 )
  {
    switch ( a1 )
    {
      case 'P':
        unk_140F10EE0 = a2;
        break;
      case '@':
        unk_140F10EE8 = a2;
        break;
      case '0':
        unk_140F10EF0 = a2;
        break;
    }
  }
  KeReleaseSpinLock(&unk_140F10EF8, v4);
}
