/*
 * XREFs of sub_140029150 @ 0x140029150
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_140068088 @ 0x140068088 (sub_140068088.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140029150(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1840), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 344);
    if ( (int)v6 < 6 || (v7 = *(unsigned int *)(v4 + 348), (int)v7 < 4) )
    {
      if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 336)) )
      {
        if ( *(_DWORD *)(v4 + 872) )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 864), &LockHandle);
        else
          LOBYTE(LockHandle.LockQueue.Next) = sub_14001E1F0(v4);
        v5(*(_QWORD *)(v4 + 616) + 16LL);
        if ( *(_DWORD *)(v4 + 872) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          sub_140029830(v4, LOBYTE(LockHandle.LockQueue.Next));
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 336));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v8, BusRelations);
        }
      }
    }
    else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
           && (HIDWORD(off_140168120->Timer) & 0x80u) != 0
           && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_140068088(
        off_140168120->AttachedDevice,
        v6,
        v7,
        v4,
        v6,
        *(_DWORD *)(v4 + 348),
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
    }
  }
}
