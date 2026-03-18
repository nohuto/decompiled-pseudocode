/*
 * XREFs of ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140039868
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rbx
  VIDMM_GLOBAL **v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 5566, &LockHandle);
  v4 = (struct VIDMM_ALLOC *)((char *)a2 + 736);
  v5 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5568);
  if ( *v5 != (VIDMM_GLOBAL *)((char *)this + 44536) )
    __fastfail(3u);
  *((_QWORD *)v4 + 1) = v5;
  *(_QWORD *)v4 = (char *)this + 44536;
  *v5 = v4;
  *((_QWORD *)this + 5568) = v4;
  ++*((_DWORD *)this + 11138);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*((PRKEVENT *)this + 5607), 0, 0);
}
