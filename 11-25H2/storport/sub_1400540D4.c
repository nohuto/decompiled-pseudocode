/*
 * XREFs of sub_1400540D4 @ 0x1400540D4
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1400540D4(__int64 a1, struct _KEVENT *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL); ++i )
  {
    v5 = a1 + 320LL * i;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 192), 0, 0) )
    {
      *(_QWORD *)(v5 + 200) = a2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( i >= *(_DWORD *)(v6 + 968) )
    LODWORD(v6) = KeSetEvent(a2, 0, 0);
  return v6;
}
