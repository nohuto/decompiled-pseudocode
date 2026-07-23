/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1403F8BE4
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1404581F0 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9E410 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140AACC9C (FsRtlpAllocateOplock.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        char a7,
        unsigned int a8)
{
  unsigned int v11; // ebx
  _QWORD *v12; // r14
  __int64 Oplock; // rsi
  char v14; // dl
  _QWORD *v15; // r12
  _QWORD *i; // rax
  __int64 v17; // rax
  _QWORD *j; // r15
  __int64 v19; // rcx
  _QWORD *v20; // rax
  SECTION_OBJECT_POINTERS *v21; // rcx
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rdx
  char v25; // al
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  void *v31; // rcx
  int v32; // eax
  __int64 v33; // rbx
  _QWORD *k; // rbx
  __int64 m; // rcx
  _QWORD **v36; // rbx
  _QWORD *n; // r15
  __int64 ii; // rcx
  _QWORD **v39; // r15
  unsigned int v41; // [rsp+44h] [rbp-D4h] BYREF
  int v42; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-C8h]
  __int64 v44; // [rsp+58h] [rbp-C0h]
  __int64 v45; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v48; // [rsp+90h] [rbp-88h]
  __int64 v49; // [rsp+98h] [rbp-80h]
  unsigned int *v50; // [rsp+A0h] [rbp-78h]
  __int64 v51; // [rsp+A8h] [rbp-70h]
  int *v52; // [rsp+B0h] [rbp-68h]
  __int64 v53; // [rsp+B8h] [rbp-60h]
  __int64 *v54; // [rsp+C0h] [rbp-58h]
  __int64 v55; // [rsp+C8h] [rbp-50h]

  v41 = a4;
  v11 = 0;
  v12 = 0LL;
  v43 = 0LL;
  if ( (a7 & 0x38) != 0 )
  {
    v11 = -1073740519;
    *(_DWORD *)(a3 + 48) = -1073740519;
    IofCompleteRequest((PIRP)a3, 1);
    return v11;
  }
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v44 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0 && *(_BYTE *)a2 == 13 )
  {
    v14 = 0;
    v15 = (_QWORD *)(Oplock + 120);
    for ( i = *(_QWORD **)(Oplock + 120); i != v15; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(a2 + 48) == *(i - 4) )
      {
        v14 = 1;
        v43 = i - 7;
        v12 = i - 7;
        break;
      }
    }
    if ( v14 )
    {
      if ( (*(_DWORD *)(Oplock + 144) & 0x20000) != 0 )
      {
        FsRtlpOplockDequeueRH(v12);
        v29 = v12[7];
        v30 = (_QWORD *)v12[8];
        if ( *(_QWORD **)(v29 + 8) == v12 + 7 && (_QWORD *)*v30 == v12 + 7 )
        {
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          if ( (_QWORD *)*v15 == v15 )
            *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
          if ( v12[5] != v28 )
            FsRtlpClearOwner(Oplock, v12);
          FsRtlpSyncWithAckTimeout(v12 + 11);
          ExFreePoolWithTag(v12, 0);
          v43 = 0LL;
          FsRtlpComputeShareableOplockState(Oplock);
          goto LABEL_50;
        }
      }
      else
      {
        v17 = Oplock + 88;
        for ( j = *(_QWORD **)(Oplock + 88); j != (_QWORD *)v17; j = (_QWORD *)*j )
        {
          v31 = j;
          if ( !*((_BYTE *)j + 53) )
          {
            j = (_QWORD *)j[1];
            FsRtlpRemoveAndCompleteWaitingIrp(v31);
            v17 = Oplock + 88;
          }
        }
        FsRtlpOplockDequeueRH(v12);
        v19 = v12[7];
        v20 = (_QWORD *)v12[8];
        if ( *(_QWORD **)(v19 + 8) == v12 + 7 && (_QWORD *)*v20 == v12 + 7 )
        {
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          if ( (_QWORD *)*v15 == v15 )
            *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
          if ( v12[5] )
            FsRtlpClearOwner(Oplock, v12);
          FsRtlpSyncWithAckTimeout(v12 + 11);
          ExFreePoolWithTag(v12, 0);
          v43 = 0LL;
          FsRtlpComputeShareableOplockState(Oplock);
          goto LABEL_21;
        }
      }
      __fastfail(3u);
    }
  }
LABEL_21:
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a8) )
    goto LABEL_50;
  v42 = a6 & 0x1000;
  if ( (a6 & 0x1000) != 0 )
  {
    v21 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v21 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v21) )
      {
        FsRtlpFillOutputBuffer(a3, 0, 0, 4, 0, 0);
        if ( (unsigned int)dword_140E06B30 > 5
          && (qword_140E06B40 & 0x400000000000LL) != 0
          && (qword_140E06B48 & 0x400000000000LL) == qword_140E06B48 )
        {
          v45 = 1LL;
          v48 = &v45;
          v49 = 8LL;
          v41 = a6;
          v50 = &v41;
          v51 = v27;
          v42 = *(_DWORD *)(Oplock + 144);
          v52 = &v42;
          v53 = v27;
          v46 = 0x1000000LL;
          v54 = &v46;
          v55 = 8LL;
          tlgWriteAgg((int)&dword_140E06B30, (int)&byte_140046D10, v26, v26 + 6, &v47);
        }
        v11 = -2147483602;
        goto LABEL_51;
      }
    }
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x8000020 | 0xC8;
    goto LABEL_38;
  }
  v22 = *(_DWORD *)(Oplock + 144);
  if ( (v22 & 0x91) == 0 )
  {
    if ( (v22 & 0x7000) != 0 && (*(_DWORD *)(Oplock + 144) & 0x1F00F00) == 0 && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_54;
      if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
        goto LABEL_50;
      v32 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v32 != 4096 )
      {
        if ( v32 == 12288 )
        {
          if ( a6 != 28736 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
            goto LABEL_50;
          for ( k = *(_QWORD **)(Oplock + 56); k != (_QWORD *)(Oplock + 56); k = (_QWORD *)*k )
          {
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0) )
              goto LABEL_50;
            if ( k[7] )
            {
              v11 = -1073741597;
              goto LABEL_51;
            }
          }
          if ( v41 > 1 && (a5 & 1) == 0 )
            goto LABEL_50;
          for ( m = *(_QWORD *)(Oplock + 56); m != Oplock + 56; m = (__int64)*v36 )
          {
            v36 = *(_QWORD ***)(m + 8);
            FsRtlpRemoveAndCompleteRHIrp(*v36, Oplock, 533, 0x7000u, 0, 0, 0, 0);
          }
        }
        else
        {
          if ( v32 != 20544 && (v32 != 28736 || a6 != 28736)
            || ((a6 - 20544) & 0xFFFFDFFF) != 0
            || !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
          {
            goto LABEL_50;
          }
          v33 = *(_QWORD *)Oplock;
          *(_BYTE *)(v33 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v33 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v33 + 69));
          if ( *(_BYTE *)(v33 + 68) )
          {
            *(_QWORD *)(v33 + 56) = 0LL;
            *(_DWORD *)(v33 + 48) = -1073741536;
          }
          else
          {
            FsRtlpFillOutputBuffer(v33, (*(_DWORD *)(Oplock + 144) >> 12) & 7, (v42 != 0) | (a6 >> 12) & 6, 0, 0, 0);
            *(_DWORD *)(v33 + 48) = 533;
          }
          IofCompleteRequest((PIRP)v33, 1);
          *(_QWORD *)Oplock = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
          *(_QWORD *)(Oplock + 8) = 0LL;
        }
LABEL_34:
        *(_QWORD *)Oplock = a3;
        *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
        FsRtlpClearOwner(Oplock, 0LL);
        *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(Oplock + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(Oplock + 32) = 0;
        *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x8000020;
        ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
        *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
        *(_QWORD *)(a3 + 56) = Oplock;
        *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
        if ( *(_BYTE *)(a3 + 68) )
        {
          LOBYTE(v24) = 1;
          FsRtlpCancelExclusiveIrp(a3, v24);
        }
        else
        {
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
          FsRtlpOplockTryPrepForAckTimeout(Oplock, *(_QWORD *)(Oplock + 8), a3, Oplock + 160, Oplock + 176);
        }
        v11 = 259;
        goto LABEL_117;
      }
      if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
        goto LABEL_50;
      for ( n = *(_QWORD **)(Oplock + 40); n != (_QWORD *)(Oplock + 40); n = (_QWORD *)*n )
      {
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(n[2] + 48LL), 0) )
          goto LABEL_50;
      }
      if ( v41 > 1 && (a5 & 1) == 0 )
        goto LABEL_50;
      for ( ii = *(_QWORD *)(Oplock + 40); ii != Oplock + 40; ii = (__int64)*v39 )
      {
        v39 = *(_QWORD ***)(ii + 8);
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v39, 533, a6 & 0x7000, Oplock);
      }
      v25 = 1;
LABEL_39:
      if ( !v25 )
        goto LABEL_117;
      goto LABEL_34;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_54;
    v11 = -1073741598;
    if ( a3 )
    {
      *(_DWORD *)(a3 + 48) = -1073741598;
      IofCompleteRequest((PIRP)a3, 1);
    }
LABEL_38:
    v25 = 0;
    goto LABEL_39;
  }
  if ( ((a6 & 0x7000) == 0 || (v22 & 0x10) == 0)
    && ((*(_DWORD *)(Oplock + 144) & 0x80u) == 0
     || FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0)) )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x10
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1010 )
    {
      FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)(Oplock + 40), 0, 0, Oplock);
    }
    if ( v41 > 1 && (*(_DWORD *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
    {
      v11 = -1073741598;
      if ( !a3 )
        goto LABEL_117;
      goto LABEL_51;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) || (a6 & 0x2000) == 0 )
      goto LABEL_34;
  }
  if ( (a6 & 0x10000) != 0 )
  {
LABEL_54:
    v11 = -1073739511;
    goto LABEL_117;
  }
LABEL_50:
  v11 = -1073741598;
LABEL_51:
  *(_DWORD *)(a3 + 48) = v11;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_117:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
