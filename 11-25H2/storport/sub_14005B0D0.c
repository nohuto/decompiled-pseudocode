/*
 * XREFs of sub_14005B0D0 @ 0x14005B0D0
 * Callers:
 *     sub_14009E2E0 @ 0x14009E2E0 (sub_14009E2E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14005B0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 216;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &LockHandle);
  *(_BYTE *)(a2 + 504) |= 0x20u;
  v4 = *(_QWORD **)(v2 + 16);
  v5 = (_QWORD *)(a2 + 64);
  if ( *v4 != v2 + 8 )
    __fastfail(3u);
  v5[1] = v4;
  *v5 = v2 + 8;
  *v4 = v5;
  *(_QWORD *)(v2 + 16) = v5;
  ++*(_DWORD *)(v2 + 24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
