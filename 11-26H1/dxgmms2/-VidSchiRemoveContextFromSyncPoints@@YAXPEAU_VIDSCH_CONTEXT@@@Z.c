/*
 * XREFs of ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1400418E4
 * Callers:
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRemoveContextFromSyncPoints(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v1; // rbx
  KSPIN_LOCK *v3; // rcx
  __int64 **v4; // rbx
  __int64 *i; // rax
  unsigned int j; // ecx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v3 = (KSPIN_LOCK *)(*(_QWORD *)(v1 + 40) + 2016LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  v4 = (__int64 **)(v1 + 1872);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    for ( j = 0; j < *((_DWORD *)i + 16); ++j )
    {
      v7 = i[3];
      if ( *(struct _VIDSCH_CONTEXT **)(v7 + 16LL * j) == a1 )
      {
        *(_QWORD *)(v7 + 16LL * j) = 0LL;
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
