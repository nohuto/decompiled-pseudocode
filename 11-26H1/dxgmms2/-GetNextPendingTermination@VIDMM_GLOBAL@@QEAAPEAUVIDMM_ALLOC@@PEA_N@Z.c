/*
 * XREFs of ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400360F0
 * Callers:
 *     VidMmProcessPendingTerminations @ 0x1400CFDF0 (VidMmProcessPendingTerminations.c)
 * Callees:
 *     <none>
 */

struct VIDMM_ALLOC *__fastcall VIDMM_GLOBAL::GetNextPendingTermination(KSPIN_LOCK *this, bool *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct VIDMM_ALLOC *result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 5566, &LockHandle);
  v4 = this + 5567;
  v5 = (_QWORD *)this[5567];
  if ( v5 == v4 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0LL;
    *a2 = 0;
  }
  else
  {
    v7 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *a2 = *v4 != (_QWORD)v4;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (struct VIDMM_ALLOC *)(v5 - 92);
  }
  return result;
}
