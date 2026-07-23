/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x1407934F0 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x1403C71A0 (PsChargePoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A8AB54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyInitializeSync @ 0x140A8B040 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x140B12970 (FsRtlNotifyUninitializeSync.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        struct _REAL_NOTIFY_SYNC **a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  struct _REAL_NOTIFY_SYNC **v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  struct _REAL_NOTIFY_SYNC *v13; // rbx
  char *v14; // rdi
  unsigned int v15; // r15d
  char *v16; // rcx
  char *v17; // rdx
  int v18; // eax
  int v19; // edx
  unsigned int v20; // r13d
  unsigned int v21; // eax
  unsigned int v22; // r12d
  unsigned int v23; // edx
  unsigned int v24; // eax
  _DWORD *Pool2; // rbx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  char *v31; // rbx
  unsigned __int16 *v32; // r15
  __int64 v33; // rax
  __int16 v34; // cx
  _QWORD *v35; // rdx
  char *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  PNOTIFY_SYNC NotifySync; // [rsp+40h] [rbp-78h] BYREF
  _DWORD *v40; // [rsp+48h] [rbp-70h]
  unsigned int v41; // [rsp+54h] [rbp-64h]
  char *v42; // [rsp+58h] [rbp-60h]
  struct _REAL_NOTIFY_SYNC *v43; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v44; // [rsp+68h] [rbp-50h]
  const void **v45; // [rsp+70h] [rbp-48h]
  char *v46; // [rsp+78h] [rbp-40h]

  v10 = a2;
  v45 = a4;
  v44 = (unsigned __int16 *)a3;
  if ( *a2 == (struct _REAL_NOTIFY_SYNC *)a2 || a10 && *(_DWORD *)a10 < 0x58u )
    return;
  if ( !*a1 )
  {
    NotifySync = 0LL;
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v13 = *v10;
  while ( 1 )
  {
    v43 = v13;
    NotifySync = v13;
    if ( v13 == (struct _REAL_NOTIFY_SYNC *)v10 )
      break;
    v14 = (char *)v13 - 32;
    v42 = (char *)v13 - 32;
    if ( (*((_DWORD *)v13 + 11) & a5) == 0
      || (a9 & 1) == 0
      && ((v14[72] & 1) == 0
       || *((_QWORD *)v14 + 2) && !(unsigned __int8)guard_dispatch_icall_no_overrides(*((_QWORD *)v14 + 1), a7))
      || *((_QWORD *)v14 + 8) && a8 && !(unsigned __int8)guard_dispatch_icall_no_overrides(*((_QWORD *)v14 + 1), a8) )
    {
      goto LABEL_9;
    }
    if ( (v14[72] & 2) == 0 )
    {
      v15 = *((_DWORD *)v14 + 24);
      if ( v15 )
      {
        v16 = 0LL;
        v46 = 0LL;
        if ( *((_DWORD *)v14 + 25) )
        {
          v15 = *((_DWORD *)v14 + 25);
        }
        else
        {
          v17 = (char *)*((_QWORD *)v14 + 6);
          if ( v17 != v14 + 48 )
          {
            v16 = v17 - 168;
            v46 = v17 - 168;
            v15 = *(_DWORD *)(*((_QWORD *)v17 + 2) + 8LL);
          }
        }
        v18 = *((_DWORD *)v14 + 29);
        if ( v18 == 3 || v18 == 2 )
          v19 = 84;
        else
          v19 = 12;
        v20 = v19 + *v44;
        v21 = v20;
        if ( a4 )
        {
          v21 = v20 + *(unsigned __int16 *)v45 + 2;
          v20 = v21;
        }
        v22 = (*((_DWORD *)v14 + 26) + 3) & 0xFFFFFFFC;
        v41 = v22;
        v23 = v22 + v21;
        v24 = -1;
        if ( v23 >= v22 )
          v24 = v23;
        if ( v20 > v15 || v23 < v22 || v24 > v15 )
        {
          *((_WORD *)v14 + 36) |= 2u;
        }
        else
        {
          Pool2 = 0LL;
          v40 = 0LL;
          v26 = (_DWORD *)*((_QWORD *)v14 + 11);
          if ( v26 )
          {
            v38 = *((unsigned int *)v14 + 27);
            v40 = (_DWORD *)((char *)v26 + v38);
            *v40 = v22 - v38;
            *((_DWORD *)v14 + 27) = v22;
            v26 = (_DWORD *)*((_QWORD *)v14 + 11);
            Pool2 = (_DWORD *)((char *)v26 + v22);
            v40 = Pool2;
          }
          else
          {
            if ( !v16 )
              goto LABEL_34;
            v27 = (_DWORD *)*((_QWORD *)v16 + 3);
            if ( v27 )
            {
              Pool2 = (_DWORD *)*((_QWORD *)v16 + 3);
              v40 = Pool2;
              *((_QWORD *)v14 + 11) = v27;
              v26 = v27;
            }
            else
            {
              v28 = *((_QWORD *)v16 + 1);
              if ( !v28 )
                goto LABEL_34;
              if ( (*(_BYTE *)(v28 + 10) & 5) != 0 )
                Pool2 = *(_DWORD **)(v28 + 24);
              else
                Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v28, 0, MmCached, 0LL, 0, 0x40000010u);
              v40 = Pool2;
              *((_QWORD *)v14 + 11) = Pool2;
              v26 = Pool2;
            }
            *((_DWORD *)v14 + 25) = v15;
          }
LABEL_34:
          if ( !v26 )
          {
            PsChargePoolQuota(*((PEPROCESS *)v14 + 15), PagedPool, v15);
            Pool2 = (_DWORD *)ExAllocatePool2(0x122uLL);
            *((_QWORD *)v14 + 11) = Pool2;
            *((_QWORD *)v14 + 10) = Pool2;
            *((_DWORD *)v14 + 25) = v15;
            v40 = Pool2;
          }
          if ( Pool2 )
          {
            v29 = *((unsigned int *)v14 + 26);
            if ( v22 > (unsigned int)v29 )
              memset_0((void *)(*((_QWORD *)v14 + 11) + v29), 0, v22 - (unsigned int)v29);
            *Pool2 = 0;
            Pool2[1] = a6;
            v30 = *((_DWORD *)v14 + 29);
            if ( v30 == 3 )
            {
              *((_QWORD *)Pool2 + 1) = *(_QWORD *)(a10 + 8);
              *((_QWORD *)Pool2 + 2) = *(_QWORD *)(a10 + 16);
              *((_QWORD *)Pool2 + 3) = *(_QWORD *)(a10 + 24);
              *((_QWORD *)Pool2 + 4) = *(_QWORD *)(a10 + 32);
              *((_QWORD *)Pool2 + 5) = *(_QWORD *)(a10 + 40);
              *((_QWORD *)Pool2 + 6) = *(_QWORD *)(a10 + 48);
              Pool2[14] = *(_DWORD *)(a10 + 56);
              Pool2[15] = *(_DWORD *)(a10 + 60);
              *((_QWORD *)Pool2 + 8) = *(_QWORD *)(a10 + 64);
              *((_QWORD *)Pool2 + 9) = *(_QWORD *)(a10 + 72);
              *((_WORD *)Pool2 + 40) = v20 - 84;
              *((_BYTE *)Pool2 + 82) = *(_BYTE *)(a10 + 80);
              *((_BYTE *)Pool2 + 83) = 0;
            }
            else
            {
              if ( v30 != 2 )
              {
                Pool2[2] = v20 - 12;
                v31 = (char *)(Pool2 + 3);
                goto LABEL_42;
              }
              *((_QWORD *)Pool2 + 1) = *(_QWORD *)(a10 + 8);
              *((_QWORD *)Pool2 + 2) = *(_QWORD *)(a10 + 16);
              *((_QWORD *)Pool2 + 3) = *(_QWORD *)(a10 + 24);
              *((_QWORD *)Pool2 + 4) = *(_QWORD *)(a10 + 32);
              *((_QWORD *)Pool2 + 5) = *(_QWORD *)(a10 + 40);
              *((_QWORD *)Pool2 + 6) = *(_QWORD *)(a10 + 48);
              Pool2[14] = *(_DWORD *)(a10 + 56);
              Pool2[15] = *(_DWORD *)(a10 + 60);
              *((_QWORD *)Pool2 + 8) = *(_QWORD *)(a10 + 64);
              *((_QWORD *)Pool2 + 9) = *(_QWORD *)(a10 + 72);
              Pool2[20] = v20 - 84;
            }
            v31 = (char *)(Pool2 + 21);
LABEL_42:
            v32 = v44;
            memmove(v31, a3[1], *v44);
            if ( a4 )
            {
              v33 = *v32;
              *(_WORD *)&v31[v33] = 58;
              memmove(&v31[v33 + 2], a4[1], *(unsigned __int16 *)v45);
            }
            *((_DWORD *)v14 + 26) = v22 + v20;
          }
          v13 = NotifySync;
        }
        if ( (v14[72] & 2) != 0 && *((_QWORD *)v14 + 11) )
        {
          if ( *((_QWORD *)v14 + 10) )
          {
            PsReturnProcessPagedPoolQuota(*((_QWORD *)v14 + 15), *((unsigned int *)v14 + 25));
            ExFreePoolWithTag(*((PVOID *)v14 + 10), 0);
          }
          *((_QWORD *)v14 + 11) = 0LL;
          *((_QWORD *)v14 + 10) = 0LL;
          *((_QWORD *)v14 + 13) = 0LL;
          *((_DWORD *)v14 + 25) = 0;
        }
      }
    }
    v34 = *((_WORD *)v14 + 36);
    if ( a6 == 4 )
    {
      *((_WORD *)v14 + 36) = v34 | 8;
    }
    else
    {
      *((_WORD *)v14 + 36) = v34 & 0xFFF7;
      v35 = v14 + 48;
      v36 = (char *)*((_QWORD *)v14 + 6);
      if ( v36 != v14 + 48 )
      {
        *((_WORD *)v14 + 36) &= ~2u;
        *((_QWORD *)v14 + 13) = 0LL;
        v37 = *(_QWORD *)v36;
        if ( *((_QWORD **)v36 + 1) != v35 || *(char **)(v37 + 8) != v36 )
          __fastfail(3u);
        *v35 = v37;
        *(_QWORD *)(v37 + 8) = v35;
        *(_QWORD *)v36 = 0LL;
        FsRtlNotifyCompleteIrp((PIRP)(v36 - 168), 1);
      }
    }
LABEL_9:
    v13 = *(struct _REAL_NOTIFY_SYNC **)v13;
    v10 = a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
