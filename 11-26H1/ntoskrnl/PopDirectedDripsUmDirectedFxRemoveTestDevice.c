/*
 * XREFs of PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1407E7658
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140775F20 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxRemoveTestDevice(unsigned int a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a1 < 0xC )
    return (unsigned int)-1073741811;
  v2 = *(unsigned int *)(a2 + 8);
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF || 2 * (int)v2 > a1 - 12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Buffer[0] = 1;
    v6 = a2 + 12;
    Buffer[1] = v2;
    PopAcquireRwLockExclusive(
      (unsigned __int64 *)&PopDirectedDripsUmLock,
      a2,
      v2,
      (struct _KLOCK_ENTRIES *)0xFFFFFFFFLL);
    v3 = 0;
    if ( RtlDeleteElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
      _InterlockedDecrement(&PopDirectedDripsUmTestDeviceCount);
    else
      v3 = -1073741275;
    PopReleaseRwLock((struct _KTHREAD *)&PopDirectedDripsUmLock);
  }
  return v3;
}
