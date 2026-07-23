/*
 * XREFs of CcInsertPrivateVolumeCacheMap @ 0x1403E6E08
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E530C (CcFindPrivateVolumeCacheMap.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

char __fastcall CcInsertPrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3, char a4, char a5, _BYTE *a6)
{
  const void *v6; // r15
  struct _KTHREAD *CurrentThread; // rcx
  char v12; // bp
  _QWORD *v13; // rax
  _QWORD *i; // rcx
  _QWORD *v15; // rdx
  _DWORD *v16; // rbx
  struct _KTHREAD *v17; // r10
  const char *v18; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+78h] [rbp-30h] BYREF

  v6 = *(const void **)(a2 + 16);
  *a3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  *a6 = 0;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx)\n",
    LODWORD(CurrentThread[1].CycleTime),
    CurrentThread[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v6,
    (const void *)a2,
    *(_DWORD *)(a2 + 24));
  if ( !a4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v13 = (_QWORD *)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 32); i != v13; i = (_QWORD *)*i )
  {
    v15 = i - 72;
    if ( (const void *)*(i - 70) == v6 )
    {
      ++*((_DWORD *)v15 + 1);
      *a3 = v15;
      v16 = (_DWORD *)(a1 + 48);
      goto LABEL_12;
    }
  }
  v20 = *(_QWORD **)(a1 + 40);
  v21 = (_QWORD *)(a2 + 576);
  if ( (_QWORD *)*v20 != v13 )
    __fastfail(3u);
  v16 = (_DWORD *)(a1 + 48);
  *v21 = v13;
  v12 = 1;
  *(_QWORD *)(a2 + 584) = v20;
  *v20 = v21;
  *(_QWORD *)(a1 + 40) = v21;
  *(_BYTE *)(a2 + 1173) = 1;
  if ( !a5 )
    ++*v16;
  if ( *v16 == 1 )
    KeResetEvent((PRKEVENT)(a1 + 56));
LABEL_12:
  if ( !a4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 )
  {
    if ( a4 )
    {
      *a6 = 1;
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 40);
      if ( v22 )
      {
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v25);
        v23 = *(_QWORD **)(v22 + 224);
        *(_QWORD *)(a2 + 592) = v22 + 216;
        *(_QWORD *)(a2 + 600) = v23;
        *v23 = a2 + 592;
        *(_QWORD *)(v22 + 224) = a2 + 592;
        KeReleaseInStackQueuedSpinLock(&v25);
      }
    }
  }
  v17 = KeGetCurrentThread();
  v18 = "YES";
  if ( !v12 )
    v18 = "NO";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx), PVCMCount:%lu, Inserted:%s\n",
    LODWORD(v17[1].CycleTime),
    v17[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v6,
    (const void *)a2,
    *(_DWORD *)(a2 + 24),
    *v16,
    v18);
  return v12;
}
