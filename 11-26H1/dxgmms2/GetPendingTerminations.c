/*
 * XREFs of GetPendingTerminations @ 0x14005078C
 * Callers:
 *     QueryPendingTerminations @ 0x1400B8E64 (QueryPendingTerminations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPendingTerminations(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 *v5; // rcx
  __int64 **v6; // rdx
  __int64 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = 0;
  if ( *(int *)(*a1 + 44552) > 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 44528), &LockHandle);
    v5 = (__int64 *)(v2 + 44536);
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v6 = (__int64 **)a2[1], *v6 != a2)
      || *(__int64 **)(*v5 + 8) != v5
      || **(__int64 ***)(v2 + 44544) != v5
      || (*v6 = v5,
          a2[1] = *(_QWORD *)(v2 + 44544),
          **(_QWORD **)(v2 + 44544) = a2,
          *(_QWORD *)(v2 + 44544) = v6,
          v7 = (__int64 *)*v5,
          *(__int64 **)(*v5 + 8) != v5)
      || *v6 != v5 )
    {
      __fastfail(3u);
    }
    *v6 = v7;
    v7[1] = (__int64)v6;
    *(_QWORD *)(v2 + 44544) = v2 + 44536;
    *v5 = (__int64)v5;
    v3 = *(_DWORD *)(v2 + 44552);
    *(_DWORD *)(v2 + 44552) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v3;
}
