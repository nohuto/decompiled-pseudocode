/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x14000754C
 * Callers:
 *     VidSchSuspendAdapter @ 0x1401088A0 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x140117E00 (VidSchResumeAdapter.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r12
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  *(_BYTE *)(a1 + 3256) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 2016);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
  v4 = *(_QWORD **)(a1 + 360);
  while ( v4 != (_QWORD *)(a1 + 360) )
  {
    v5 = v4;
    v6 = v4 - 14;
    _InterlockedIncrement64(v4 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v4 - 7) & 0x10) == 0 && *(volatile signed __int64 **)(a1 + 264) != v6 )
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)(v4 - 14));
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v4 = (_QWORD *)*v4;
    v11 = 0LL;
    v10 = 0LL;
    if ( _InterlockedExchangeAdd64(v6 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v7 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag((PVOID)v6, 0);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
