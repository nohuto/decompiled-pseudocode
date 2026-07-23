/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x14025A064
 * Callers:
 *     CcIsThereDirtyData @ 0x140259630 (CcIsThereDirtyData.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // edx
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 768);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v7 = *(_QWORD *)(a1 + 672) - 136LL;
  v8 = a1 + 536;
  while ( 1 )
  {
    if ( v7 == v8 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 1;
    }
    v9 = *(_DWORD *)(v7 + 152);
    if ( (v9 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a3
      && *(_DWORD *)(v7 + 112)
      && (*(_DWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      break;
    }
    if ( (unsigned int)++v6 >= 0x14 && (v9 & 0x820) == 0 )
    {
      *(_DWORD *)(v7 + 152) |= 0x20u;
      ++*(_DWORD *)(v7 + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v6 = 0;
      KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
      *(_DWORD *)(v7 + 152) &= ~0x20u;
      --*(_DWORD *)(v7 + 112);
    }
    v7 = *(_QWORD *)(v7 + 136) - 136LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = 0;
  *(_BYTE *)(a3 + 8) = 1;
  return result;
}
