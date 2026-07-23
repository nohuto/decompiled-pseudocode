/*
 * XREFs of PopDirectedDripsUmDirectedFxSetMode @ 0x1407E76EC
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140775F20 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxSetMode(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx

  if ( a1 >= 0xC )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopDirectedDripsUmLock, a2, a3, a4);
    v5 = 0;
    PopDirectedDripsUmTestPermissive = *(_BYTE *)(a2 + 8) != 0;
    PopReleaseRwLock((struct _KTHREAD *)&PopDirectedDripsUmLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
