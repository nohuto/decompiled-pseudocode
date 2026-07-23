/*
 * XREFs of FsRtlCancelNotify @ 0x1403FB5E0
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x1403FB9D0 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x1403C71A0 (PsChargePoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  struct _SECURITY_SUBJECT_CONTEXT *v3; // r15
  PVOID *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // r14
  struct _KTHREAD *v7; // rbx
  struct _KTHREAD **v8; // r12
  _DWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  PVOID *v13; // rbx
  PVOID v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rdx
  PVOID Pool2; // rbx
  unsigned int v18; // r14d
  PVOID *v19; // rcx
  _DWORD *v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rax
  _QWORD *v24; // [rsp+58h] [rbp-70h]
  _DWORD *v25; // [rsp+60h] [rbp-68h]
  _DWORD *v26; // [rsp+70h] [rbp-58h]
  struct _KTHREAD **v27; // [rsp+88h] [rbp-40h]
  const void **v28; // [rsp+E0h] [rbp+18h]
  char *v29; // [rsp+E8h] [rbp+20h]

  v3 = 0LL;
  v4 = *(PVOID **)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)*v4;
  v29 = (char *)*v4;
  v7 = KeGetCurrentThread();
  v8 = (struct _KTHREAD **)((char *)*v4 + 56);
  v27 = v8;
  if ( v7 != *v8 )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v6);
    *v8 = v7;
  }
  v9 = v6 + 64;
  ++*((_DWORD *)v6 + 16);
  v10 = a2 + 168;
  v11 = *(_QWORD *)(a2 + 168);
  if ( v11 )
  {
    v12 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(v11 + 8) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v13 = v4 + 11;
  v28 = (const void **)(v4 + 11);
  v14 = v4[11];
  if ( v14 )
  {
    v24 = v4 + 10;
    if ( !v4[10] )
    {
      if ( (v15 = *(_QWORD *)(a2 + 8)) != 0
        && ((*(_BYTE *)(v15 + 10) & 5) == 0
          ? (v16 = MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, 0x40000010u))
          : (v16 = *(PVOID *)(v15 + 24)),
            v14 = *v13,
            v16 == *v13)
        || v14 == *(PVOID *)(a2 + 24) )
      {
        Pool2 = 0LL;
        v18 = 0;
        v19 = (PVOID *)v4[6];
        v20 = v4 + 13;
        v25 = v4 + 13;
        if ( v19 == v4 + 6 )
        {
          if ( *((_DWORD *)v4 + 24) >= *v20 )
            v18 = *((_DWORD *)v4 + 24);
        }
        else
        {
          v26 = v19[2];
          if ( v26[2] >= *v20 )
          {
            v18 = v26[2];
            if ( *(v19 - 18) )
            {
              Pool2 = *(v19 - 18);
            }
            else
            {
              v21 = (__int64)*(v19 - 20);
              if ( v21 )
              {
                if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
                {
                  Pool2 = *(PVOID *)(v21 + 24);
                }
                else
                {
                  Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
                  v18 = v26[2];
                }
              }
            }
            if ( v18 > *((_DWORD *)v4 + 24) )
              v18 = *((_DWORD *)v4 + 24);
          }
        }
        if ( v18 )
        {
          if ( !Pool2 )
          {
            PsChargePoolQuota((PEPROCESS)v4[15], PagedPool, v18);
            Pool2 = (PVOID)ExAllocatePool2(0x122uLL);
            *v24 = Pool2;
          }
          memmove(Pool2, *v28, (unsigned int)*v25);
          *((_DWORD *)v4 + 25) = v18;
          *v28 = Pool2;
          v22 = v4 + 9;
        }
        else
        {
          v22 = v4 + 9;
          *((_WORD *)v4 + 36) |= 2u;
        }
        v6 = v29;
        if ( (*v22 & 2) != 0 )
        {
          *v28 = 0LL;
          *v24 = 0LL;
          *((_DWORD *)v4 + 27) = 0;
          *v25 = 0;
          *((_DWORD *)v4 + 25) = 0;
        }
      }
    }
  }
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement((volatile signed __int32 *)v4 + 28);
  if ( !*((_DWORD *)v4 + 28) )
  {
    if ( v4[10] )
    {
      PsReturnProcessPagedPoolQuota((ULONG_PTR)v4[15], *((unsigned int *)v4 + 25));
      ExFreePoolWithTag(v4[10], 0);
    }
    if ( ((_BYTE)v4[9] & 0x40) != 0 || v4[17] )
      v3 = (struct _SECURITY_SUBJECT_CONTEXT *)v4[3];
    ExFreePoolWithTag(v4, 0);
  }
  if ( (*v9)-- == 1 )
  {
    *v27 = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v6);
  }
  if ( v3 )
  {
    SeReleaseSubjectContext(v3);
    ExFreePoolWithTag(v3, 0);
  }
  KeLeaveCriticalRegion();
}
