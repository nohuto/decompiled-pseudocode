/*
 * XREFs of HalpHpetInitialize @ 0x14059B510
 * Callers:
 *     <none>
 * Callees:
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 */

__int64 __fastcall HalpHpetInitialize(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock;
  v2 = 0;
  if ( *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock
    || (*(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock = HalMapIoSpace(
                                                                                    (LARGE_INTEGER)IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias,
                                                                                    0x400uLL,
                                                                                    MmNonCached),
        (v1 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock) != 0) )
  {
    if ( IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill5[48] )
      v4 = *(_DWORD *)(v1 + 16) | 3;
    else
      v4 = *(_DWORD *)(v1 + 16) & 0xFFFFFFFC | 1;
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
