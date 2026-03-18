/*
 * XREFs of VidSchiIsMmIoFlipPending @ 0x14002FD20
 * Callers:
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiIsMmIoFlipPending(__int64 a1, _DWORD *a2)
{
  __int64 i; // rbx
  __int64 v5; // rax
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 48) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0;
    }
    v5 = *(_QWORD *)(a1 + 8 * i + 3448);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 3248) )
        break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = 1;
  if ( a2 )
    *a2 = i;
  return result;
}
