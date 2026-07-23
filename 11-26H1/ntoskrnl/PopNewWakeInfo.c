/*
 * XREFs of PopNewWakeInfo @ 0x140C0F218
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404F2B08 (PopAcquireWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x1404F7D84 (PopWakeInfoDereference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404F8CDC (PopReleaseWakeSourceSpinLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

LONG PopNewWakeInfo()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  LONG result; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_BYTE *)(Pool2 + 80) = 1;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = v1;
    if ( PopWakeInfoCount == 1 )
    {
      v3 = (_QWORD *)qword_140F12208;
      if ( *(__int64 **)qword_140F12208 != &PopWakeInfoList
        || (v4 = *(_QWORD **)(qword_140F12208 + 8), *v4 != qword_140F12208) )
      {
        __fastfail(3u);
      }
      qword_140F12208 = *(_QWORD *)(qword_140F12208 + 8);
      *v4 = &PopWakeInfoList;
      v3[1] = v3;
      *v3 = v3;
      PopWakeInfoDereference((__int64)v3);
      --PopWakeInfoCount;
    }
    PopWakeSourceWorkState = 0;
    PopReleaseWakeSourceSpinLock(&LockHandle);
  }
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
