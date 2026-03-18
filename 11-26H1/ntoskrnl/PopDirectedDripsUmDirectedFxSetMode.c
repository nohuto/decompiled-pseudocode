/*
 * XREFs of PopDirectedDripsUmDirectedFxSetMode @ 0x1407E265C
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140772F20 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
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
    PopDirectedDripsUmLock.ApcStateFill[0] = *(_BYTE *)(a2 + 8) != 0;
    PopReleaseRwLock(&PopDirectedDripsUmLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
