/*
 * XREFs of PopHaltDeviceIdle @ 0x1404F3A6C
 * Callers:
 *     PoInitializeBroadcast @ 0x140AC752C (PoInitializeBroadcast.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  KIRQL v1; // al
  __int128 v2; // [rsp+30h] [rbp-20h] BYREF
  char *v3; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
  byte_140E676D4 = 1;
  if ( dword_140E676D0 )
  {
    LOWORD(v2) = 1;
    v3 = (char *)&v2 + 8;
    BYTE2(v2) = 6;
    *((_QWORD *)&v2 + 1) = (char *)&v2 + 8;
    v0 = &v2;
    DWORD1(v2) = 0;
    qword_140E676C8 = (PRKEVENT)&v2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v1);
  if ( v0 )
    KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
}
