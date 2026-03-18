/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1400393C4
 * Callers:
 *     VidSchTerminateDevice @ 0x1400FD230 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rdx
  PVOID *v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 5) + 2016LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 14);
    if ( v4[1] != P + 112 || (v5 = (PVOID *)*((_QWORD *)P + 15), *v5 != P + 112) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    if ( !a2 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
  else if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
