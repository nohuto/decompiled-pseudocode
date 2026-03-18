/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1403FEDE8
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402C1C68 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockDequeueRH @ 0x1402C1DF8 (FsRtlpOplockDequeueRH.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F7FB8 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F8764 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1403FB470 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403FCCBC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FE3D0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FE8B4 (FsRtlpFreeRHOpContext.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1403FFAC0 (MmDoesFileHaveUserWritableReferences.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D7DB0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140510174 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9B81C (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140AAF04C (FsRtlpAllocateOplock.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADD764 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD **a5,
        char a6,
        char a7,
        char a8,
        unsigned int a9,
        char a10)
{
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 Oplock; // rdi
  char v16; // dl
  _QWORD *v17; // r13
  _QWORD *i; // rax
  __int64 v19; // rax
  __int64 *j; // r15
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r9
  _QWORD **v25; // r14
  int v26; // eax
  char v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  SECTION_OBJECT_POINTERS *v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 *v38; // rcx
  int v39; // r8d
  __int64 v40; // r9
  char v41; // al
  __int64 *v42; // r14
  __int64 *v43; // rbx
  _QWORD *v44; // r14
  _QWORD *v45; // r14
  __int64 *k; // rbx
  __int64 v47; // rax
  __int64 *v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  IRP *v54; // rcx
  char v55; // [rsp+44h] [rbp-164h]
  char v56; // [rsp+45h] [rbp-163h] BYREF
  __int64 v57; // [rsp+48h] [rbp-160h] BYREF
  int v58; // [rsp+50h] [rbp-158h] BYREF
  _QWORD **v59; // [rsp+58h] [rbp-150h] BYREF
  _QWORD *v60; // [rsp+60h] [rbp-148h]
  _DWORD v61[4]; // [rsp+68h] [rbp-140h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+78h] [rbp-130h]
  __int64 v63; // [rsp+80h] [rbp-128h] BYREF
  __int64 v64; // [rsp+88h] [rbp-120h] BYREF
  __int64 v65; // [rsp+90h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+A0h] [rbp-108h] BYREF
  __int64 *v67; // [rsp+C0h] [rbp-E8h]
  __int64 v68; // [rsp+C8h] [rbp-E0h]
  _DWORD *v69; // [rsp+D0h] [rbp-D8h]
  __int64 v70; // [rsp+D8h] [rbp-D0h]
  int *v71; // [rsp+E0h] [rbp-C8h]
  __int64 v72; // [rsp+E8h] [rbp-C0h]
  __int64 *v73; // [rsp+F0h] [rbp-B8h]
  __int64 v74; // [rsp+F8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+100h] [rbp-A8h] BYREF
  _QWORD *v76; // [rsp+120h] [rbp-88h]
  __int64 v77; // [rsp+128h] [rbp-80h]
  char *v78; // [rsp+130h] [rbp-78h]
  __int64 v79; // [rsp+138h] [rbp-70h]
  __int64 *v80; // [rsp+140h] [rbp-68h]
  __int64 v81; // [rsp+148h] [rbp-60h]
  __int64 *v82; // [rsp+150h] [rbp-58h]
  __int64 v83; // [rsp+158h] [rbp-50h]

  v57 = a2;
  v61[2] = a4;
  v59 = a5;
  v13 = 0;
  v14 = 0LL;
  v60 = 0LL;
  FastMutex = 0LL;
  v55 = 0;
  v56 = 0;
  if ( (a8 & 0x38) != 0 && a4 != 12288 )
  {
    v13 = -1073740519;
    *(_DWORD *)(a3 + 48) = -1073740519;
    v54 = (IRP *)a3;
LABEL_175:
    IofCompleteRequest(v54, 1);
    return v13;
  }
  v58 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 && (a10 & 4) != 0 )
  {
    FsRtlpFillOutputBuffer(a3, 3, 0, 8, 0, 0);
    v13 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    goto LABEL_175;
  }
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v55 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0 && *(_BYTE *)v57 == 13 )
  {
    v16 = 0;
    v17 = (_QWORD *)(Oplock + 120);
    for ( i = *(_QWORD **)(Oplock + 120); i != v17; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v57 + 48) == *(i - 4) )
      {
        v16 = 1;
        v60 = i - 7;
        v14 = (__int64)(i - 7);
        break;
      }
    }
    if ( v16 )
    {
      if ( (*(_DWORD *)(Oplock + 144) & 0x20000) != 0 )
      {
        FsRtlpOplockDequeueRH((_QWORD *)v14);
        v36 = *(_QWORD *)(v14 + 56);
        v37 = *(_QWORD **)(v14 + 64);
        if ( *(_QWORD *)(v36 + 8) == v14 + 56 && *v37 == v14 + 56 )
        {
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
          if ( (_QWORD *)*v17 == v17 )
            *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
          if ( *(_QWORD *)(v14 + 40) != v35 )
            FsRtlpClearOwner(Oplock, v14);
          FsRtlpFreeRHOpContext((PVOID *)v14, 1);
          v60 = 0LL;
          FsRtlpComputeShareableOplockState(Oplock);
          goto LABEL_80;
        }
        goto LABEL_37;
      }
      v19 = Oplock + 88;
      for ( j = *(__int64 **)(Oplock + 88); j != (__int64 *)v19; j = (__int64 *)*j )
      {
        v38 = j;
        if ( !*((_BYTE *)j + 53) || a4 != 12288 )
        {
          j = (__int64 *)j[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v38);
          v19 = Oplock + 88;
        }
      }
      FsRtlpOplockDequeueRH((_QWORD *)v14);
      v22 = *(_QWORD *)(v14 + 56);
      v23 = *(_QWORD **)(v14 + 64);
      if ( *(_QWORD *)(v22 + 8) != v14 + 56 || *v23 != v14 + 56 )
        goto LABEL_37;
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( (_QWORD *)*v17 == v17 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( *(_QWORD *)(v14 + 40) != v21 )
        FsRtlpClearOwner(Oplock, v14);
      FsRtlpSyncWithAckTimeout((PVOID *)(v14 + 88));
      ExFreePoolWithTag((PVOID)v14, 0);
      v60 = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
    }
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a9) )
    goto LABEL_80;
  if ( (a4 & 0x1000) == 0 && a4 != 0x10000 )
    goto LABEL_26;
  v24 = v57;
  v31 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v57 + 48) + 40LL);
  if ( !v31 )
  {
LABEL_27:
    if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
      goto LABEL_57;
    switch ( a4 )
    {
      case 0x10u:
        if ( (*(_DWORD *)(Oplock + 144) & 1) == 0
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x10
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1010 )
        {
          goto LABEL_80;
        }
        break;
      case 0x1000u:
        break;
      case 0x10000u:
      case 0x3000u:
        if ( !a7
          && (*(_DWORD *)(Oplock + 144) & 1) == 0
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x3000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0xB000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x103000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x803000
          && (*(_DWORD *)(Oplock + 144) & 0x10000) == 0
          || *(_BYTE *)(*(_QWORD *)(v24 + 48) + 73LL) )
        {
LABEL_57:
          if ( a4 == 0x10000 )
          {
            v13 = -1073739511;
            goto LABEL_169;
          }
          goto LABEL_80;
        }
        if ( a7 )
        {
LABEL_34:
          v25 = v59;
          (*v59)[4] = KeGetCurrentThread()->ApcState.Process;
          (*v25)[3] = *(_QWORD *)(v24 + 48);
          v26 = FsRtlpOplockEnqueueRH((__int64 *)(Oplock + 56), *v25);
          v13 = v26;
          if ( v26 < 0 )
          {
            if ( a4 != 0x10000 )
            {
              *(_DWORD *)(a3 + 48) = v26;
              IofCompleteRequest((PIRP)a3, 1);
            }
            goto LABEL_169;
          }
          v27 = 0;
          if ( a4 == 0x10000 )
          {
            v28 = *v25 + 7;
            v29 = (_QWORD *)(Oplock + 120);
            v30 = *(_QWORD *)(Oplock + 120);
            if ( *(_QWORD *)(v30 + 8) != Oplock + 120 )
              goto LABEL_37;
            *v28 = v30;
            v28[1] = v29;
            *(_QWORD *)(v30 + 8) = v28;
            *v29 = v28;
            v13 = 0;
          }
          else
          {
            if ( (a8 & 8) != 0 )
              *((_DWORD *)*v25 + 12) |= 0x2000000u;
            if ( (a8 & 0x10) != 0 )
              *((_DWORD *)*v25 + 12) |= 0x4000000u;
            if ( v58 )
              *((_DWORD *)*v25 + 12) |= 0x8000000u;
            (*v25)[5] = KeGetCurrentThread();
            ObfReferenceObjectWithTag((PVOID)(*v25)[5], 0x746C6644u);
            (*v25)[2] = a3;
            *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
            v13 = 259;
            *(_DWORD *)(a3 + 48) = 0;
            *(_QWORD *)(a3 + 56) = Oplock;
            if ( a6 )
              ObfReferenceObjectWithTag((PVOID)(*v25)[3], 0x746C6644u);
            *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
            if ( *(_BYTE *)(a3 + 68) )
            {
              if ( !a6 || (LOBYTE(v34) = 0, !a7) )
                LOBYTE(v34) = 1;
              LOBYTE(v33) = 1;
              FsRtlpCancelOplockRHIrp(a3, v33, v34);
              v25 = v59;
              goto LABEL_70;
            }
            _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
            v25 = v59;
          }
          v27 = 1;
LABEL_70:
          if ( (unsigned int)dword_140E06B30 > 5 )
          {
            LODWORD(v59) = a4;
            v76 = &v59;
            v77 = 4LL;
            v56 = a7;
            v78 = &v56;
            v79 = 1LL;
            v65 = Oplock;
            v80 = &v65;
            v81 = 8LL;
            LODWORD(v57) = *(_DWORD *)(Oplock + 144);
            v82 = &v57;
            v83 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06B30,
              (unsigned __int8 *)byte_140046768,
              0LL,
              0LL,
              6u,
              &v75);
          }
          FsRtlpComputeShareableOplockState(Oplock);
          if ( v27 )
            FsRtlpOplockTryPrepForAckTimeout(Oplock, (*v25)[3], a3, *v25 + 9, *v25 + 11);
          *v25 = 0LL;
          if ( a4 == 0x10000 )
            *(_DWORD *)(Oplock + 144) |= 0x10000u;
          goto LABEL_169;
        }
        if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000 || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000 )
        {
          v42 = *(__int64 **)(Oplock + 40);
          while ( 1 )
          {
            if ( v42 == (__int64 *)(Oplock + 40) )
              goto LABEL_43;
            if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v24 + 48), *(_QWORD *)(v42[2] + 48), 0) )
              break;
            v42 = (__int64 *)*v42;
            v24 = v57;
          }
          if ( a4 == 0x10000 )
            goto LABEL_111;
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)v42[1], 533, 0x3000u, Oplock);
          v24 = v57;
        }
LABEL_43:
        if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x3000 && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0xB000 )
        {
LABEL_45:
          v32 = *(_QWORD **)(Oplock + 72);
          if ( v32 == (_QWORD *)(Oplock + 72) )
          {
            v24 = v57;
          }
          else
          {
            while ( v32 != (_QWORD *)(Oplock + 72) )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v57 + 48), v32[3], 0) )
              {
                v13 = -1073741598;
                if ( a4 != 0x10000 )
                  goto LABEL_81;
                goto LABEL_169;
              }
              v32 = (_QWORD *)*v32;
            }
            v24 = v57;
          }
          goto LABEL_34;
        }
        v43 = *(__int64 **)(Oplock + 56);
        while ( 1 )
        {
          if ( v43 == (__int64 *)(Oplock + 56) )
            goto LABEL_45;
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v24 + 48), v43[3], 0) && !v43[7] )
            break;
          v43 = (__int64 *)*v43;
          v24 = v57;
        }
        if ( a4 != 0x10000 )
        {
          FsRtlpRemoveAndCompleteRHIrp(*(_QWORD **)v43[1], Oplock, 533, 0x3000u, 0, 0, 0, 0);
          goto LABEL_45;
        }
LABEL_111:
        v13 = -1073741597;
        goto LABEL_169;
      default:
        v41 = v56;
        goto LABEL_79;
    }
    if ( a7 )
      goto LABEL_160;
    if ( (*(_DWORD *)(Oplock + 144) & 1) == 0
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x10
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1000
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1010
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x3000
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0xB000
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x103000
      && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x803000
      && (*(_DWORD *)(Oplock + 144) & 0x10000) == 0 )
    {
LABEL_80:
      v13 = -1073741598;
      goto LABEL_81;
    }
    v44 = *(_QWORD **)(Oplock + 56);
    if ( v44 != (_QWORD *)(Oplock + 56) )
      goto LABEL_148;
    if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      while ( v44 != (_QWORD *)(Oplock + 56) )
      {
LABEL_148:
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v24 + 48), v44[3], 0) )
          goto LABEL_80;
        v44 = (_QWORD *)*v44;
        v24 = v57;
      }
      v45 = *(_QWORD **)(Oplock + 72);
      while ( v45 != (_QWORD *)(Oplock + 72) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v24 + 48), v45[3], 0) )
          goto LABEL_80;
        v45 = (_QWORD *)*v45;
        v24 = v57;
      }
    }
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x10
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1010
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000 )
    {
      for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
      {
        v47 = k[2];
        v48 = (__int64 *)(v47 + 48);
        if ( *(_DWORD *)(v47 + 24) == 590400 || *v48 != *(_QWORD *)(v24 + 48) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v24 + 48), *v48, 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)k[1], 533, a4 & 0x7000, Oplock);
            break;
          }
          v24 = v57;
        }
      }
    }
LABEL_160:
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v49 = (_QWORD *)(a3 + 168);
    v50 = (_QWORD *)(Oplock + 40);
    v51 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v51 + 8) == Oplock + 40 )
    {
      *v49 = v51;
      *(_QWORD *)(a3 + 176) = v50;
      *(_QWORD *)(v51 + 8) = v49;
      *v50 = v49;
      *(_QWORD *)(a3 + 56) = Oplock;
      FsRtlpComputeShareableOplockState(Oplock);
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(v57 + 48), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v52) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v52);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v41 = 1;
      v13 = 259;
LABEL_79:
      if ( v41 )
        goto LABEL_169;
      goto LABEL_80;
    }
LABEL_37:
    __fastfail(3u);
  }
  if ( !MmDoesFileHaveUserWritableReferences(v31) )
  {
LABEL_26:
    v24 = v57;
    goto LABEL_27;
  }
  if ( a4 == 0x10000 )
  {
    v13 = -1073741598;
  }
  else
  {
    FsRtlpFillOutputBuffer(a3, 0, 0, 4, 0, 0);
    if ( (unsigned int)dword_140E06B30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140E06B30, 0x400000000000LL) )
    {
      v63 = 1LL;
      v67 = &v63;
      v68 = 8LL;
      v61[0] = a4;
      v69 = v61;
      v70 = v40;
      v58 = *(_DWORD *)(Oplock + 144);
      v71 = &v58;
      v72 = v40;
      v64 = 0x1000000LL;
      v73 = &v64;
      v74 = 8LL;
      tlgWriteAgg((int)&dword_140E06B30, (int)&byte_140046511, v39, 6, &v66);
    }
    v13 = -2147483602;
LABEL_81:
    *(_DWORD *)(a3 + 48) = v13;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_169:
  if ( v55 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v13;
}
