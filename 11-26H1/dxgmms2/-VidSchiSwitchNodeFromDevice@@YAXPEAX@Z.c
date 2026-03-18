/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1400269F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400EBAC0 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  struct _VIDSCH_CONTEXT *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[5];
  v2 = (_QWORD **)(a1 + 10);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 2016), &LockHandle);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (struct _VIDSCH_CONTEXT *)(v3 - 3);
    VidSchiIncrementContextReference((__int64)(v3 - 3));
    if ( !*((_DWORD *)v3 + 222) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v3 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 2016), &LockHandle);
    }
    v3 = (_QWORD *)*v3;
    VidSchiDecrementContextReference(v4, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
