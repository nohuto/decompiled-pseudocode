/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140036F40
 * Callers:
 *     VidMmFreeFenceStorageSlot @ 0x140036E30 (VidMmFreeFenceStorageSlot.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  __int64 v4; // r8
  __int64 *v5; // rax
  bool v6; // zf
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 **v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
  v4 = *(_QWORD *)a2;
  v5 = (__int64 *)(*(_QWORD *)a2 + 8LL);
  v6 = *(_BYTE *)(*(_QWORD *)a2 + 225LL) == 0;
  *(_QWORD *)(*(_QWORD *)a2 + 104LL) &= ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v7 = (__int64 *)*v5;
  if ( v6 )
  {
    if ( (__int64 *)v7[1] == v5 )
    {
      v8 = (__int64 **)v5[1];
      if ( *v8 == v5 )
      {
        *v8 = v7;
        v7[1] = (__int64)v8;
        v9 = (char *)(this + 3);
        goto LABEL_5;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  if ( (__int64 *)v7[1] != v5 )
    goto LABEL_6;
  v11 = (__int64 **)v5[1];
  if ( *v11 != v5 )
    goto LABEL_6;
  *v11 = v7;
  v7[1] = (__int64)v11;
  if ( *(_DWORD *)(v4 + 228) == 1 )
    v9 = (char *)(this + 9);
  else
    v9 = (char *)(this + 11);
LABEL_5:
  v10 = *(_QWORD *)v9;
  if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
    goto LABEL_6;
  *v5 = v10;
  v5[1] = (__int64)v9;
  *(_QWORD *)(v10 + 8) = v5;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v4 + 144) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
