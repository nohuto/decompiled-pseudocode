/*
 * XREFs of CcGetDeviceGuidAsync @ 0x1405B3100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x140384440 (CcDecrementVolumeUseCountWithDelete.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CcGetDeviceGuid @ 0x1409067DC (CcGetDeviceGuid.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcGetDeviceGuidAsync(__int64 *P)
{
  __int64 v2; // rcx
  int DeviceGuid; // eax
  __int64 v4; // rbx
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF

  v2 = P[1];
  v9 = 0LL;
  DeviceGuid = CcGetDeviceGuid(v2, &v9);
  v4 = *P;
  v5 = (void *)P[1];
  if ( DeviceGuid >= 0 )
  {
    v6 = *(_QWORD *)(v4 + 232) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(v4 + 240) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v6 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v7 = *(_QWORD *)(v4 + 232) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v4 + 240) - *(_QWORD *)GUID_NULL.Data4;
      if ( !v7 )
        *(_OWORD *)(v4 + 232) = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  CcDecrementVolumeUseCountWithDelete(v4);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag(P, 0x65546343u);
}
