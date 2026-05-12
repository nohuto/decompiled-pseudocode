/*
 * XREFs of RaDriverDeleteDevice @ 0x14005BDB8
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDriverDeleteDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  bool v2; // zf
  __int64 v4; // rcx
  _QWORD *v5; // rax
  KSPIN_LOCK *DriverObjectExtension; // rax
  KSPIN_LOCK *v7; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 8;
  v2 = a1[8] == 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 || !a1[9] )
    return 0LL;
  DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1[1] + 8LL), DriverEntry);
  v7 = DriverObjectExtension;
  if ( DriverObjectExtension )
  {
    KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*((_DWORD *)v7 + 18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return 3221225701LL;
}
