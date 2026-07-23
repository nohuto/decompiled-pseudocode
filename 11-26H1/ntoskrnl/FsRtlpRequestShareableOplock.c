/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140514FAC
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x14030C928 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1404581F0 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14049C7EC (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140509BE4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     Feature_3043474747__private_IsEnabledDeviceUsageNoInline @ 0x1405B8698 (Feature_3043474747__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9E410 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140AACC9C (FsRtlpAllocateOplock.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
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
  unsigned int v10; // r13d
  unsigned int v13; // ebx
  char v14; // r15
  IRP *v15; // rcx
  __int64 Oplock; // rdi
  char v18; // r14
  PVOID *v19; // rbx
  PVOID v20; // r10
  _QWORD **v21; // rcx
  PVOID *v22; // rax
  int v23; // r10d
  __int64 *i; // r14
  __int64 *v25; // rcx
  PVOID *v26; // r14
  PVOID v27; // r10
  _QWORD **v28; // rcx
  PVOID *v29; // rax
  __int64 v30; // r9
  SECTION_OBJECT_POINTERS *v31; // rcx
  ULONG HaveUserWritableReferences; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // r14
  char v36; // al
  __int64 *v37; // rbx
  char v38; // al
  _QWORD *v39; // rbx
  char v40; // al
  _QWORD **v41; // r14
  int v42; // eax
  char v43; // r12
  __int64 v44; // r15
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  char v48; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v50; // r14
  _QWORD *v51; // r14
  __int64 *j; // rbx
  __int64 v53; // rax
  __int64 *v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rdx
  char v58; // [rsp+44h] [rbp-154h]
  char v59; // [rsp+45h] [rbp-153h] BYREF
  __int64 v60; // [rsp+48h] [rbp-150h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-148h] BYREF
  int v62; // [rsp+54h] [rbp-144h] BYREF
  _QWORD **v63; // [rsp+58h] [rbp-140h] BYREF
  PVOID P; // [rsp+60h] [rbp-138h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-130h]
  PFAST_MUTEX FastMutex; // [rsp+70h] [rbp-128h]
  __int64 v67; // [rsp+78h] [rbp-120h] BYREF
  __int64 v68; // [rsp+80h] [rbp-118h] BYREF
  __int64 v69; // [rsp+88h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+90h] [rbp-108h] BYREF
  __int64 *v71; // [rsp+B0h] [rbp-E8h]
  __int64 v72; // [rsp+B8h] [rbp-E0h]
  int *v73; // [rsp+C0h] [rbp-D8h]
  __int64 v74; // [rsp+C8h] [rbp-D0h]
  int *v75; // [rsp+D0h] [rbp-C8h]
  __int64 v76; // [rsp+D8h] [rbp-C0h]
  __int64 *v77; // [rsp+E0h] [rbp-B8h]
  __int64 v78; // [rsp+E8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+F0h] [rbp-A8h] BYREF
  _QWORD *v80; // [rsp+110h] [rbp-88h]
  __int64 v81; // [rsp+118h] [rbp-80h]
  char *v82; // [rsp+120h] [rbp-78h]
  __int64 v83; // [rsp+128h] [rbp-70h]
  __int64 *v84; // [rsp+130h] [rbp-68h]
  __int64 v85; // [rsp+138h] [rbp-60h]
  __int64 *v86; // [rsp+140h] [rbp-58h]
  __int64 v87; // [rsp+148h] [rbp-50h]

  v10 = a4;
  v61 = a4;
  v60 = a2;
  v65 = a4;
  v63 = a5;
  v13 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v58 = 0;
  v14 = 0;
  v59 = 0;
  if ( (a8 & 0x38) != 0 && a4 != 12288 )
  {
    v13 = -1073740519;
    *(_DWORD *)(a3 + 48) = -1073740519;
    v15 = (IRP *)a3;
LABEL_4:
    IofCompleteRequest(v15, 1);
    return v13;
  }
  v62 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 && (a10 & 4) != 0 )
  {
    FsRtlpFillOutputBuffer(a3, 3, 0, 8, 0, 0);
    v13 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    goto LABEL_4;
  }
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v18 = a7;
  if ( !a7 && v10 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v58 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v60 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v60 + 48), &P) )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x20000) != 0 )
    {
      v19 = (PVOID *)P;
      FsRtlpOplockDequeueRH(P);
      v21 = (_QWORD **)v19[7];
      v22 = (PVOID *)v19[8];
      if ( v21[1] != v19 + 7 || *v22 != v19 + 7 )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = v22;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v19[5] != v20 )
        FsRtlpClearOwner(Oplock, (__int64)v19);
      FsRtlpFreeRHOpContext(v19, 1);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_25;
    }
    for ( i = *(__int64 **)(Oplock + 88); i != (__int64 *)(Oplock + 88); i = (__int64 *)*i )
    {
      v25 = i;
      if ( !*((_BYTE *)i + 53) || v10 != 12288 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v25);
      }
    }
    v26 = (PVOID *)P;
    FsRtlpOplockDequeueRH(P);
    v28 = (_QWORD **)v26[7];
    v29 = (PVOID *)v26[8];
    if ( v28[1] != v26 + 7 || *v29 != v26 + 7 )
      __fastfail(3u);
    *v29 = v28;
    v28[1] = v29;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v26[5] != v27 )
      FsRtlpClearOwner(Oplock, (__int64)v26);
    FsRtlpFreeRHOpContext(v26, 1);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v14 = v59;
    v18 = a7;
  }
  if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v10, a9) )
  {
    if ( (v10 & 0x1000) != 0 || v10 == 0x10000 )
    {
      v30 = v60;
      v31 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v60 + 48) + 40LL);
      if ( v31 )
      {
        HaveUserWritableReferences = MmDoesFileHaveUserWritableReferences(v31);
        v23 = 0;
        if ( HaveUserWritableReferences )
        {
          if ( v10 == 0x10000 )
          {
            v13 = -1073741598;
            goto LABEL_180;
          }
          FsRtlpFillOutputBuffer(a3, 0, 0, 4, 0, 0);
          if ( (unsigned int)dword_140E06B30 > 5 && tlgKeywordOn((__int64)&dword_140E06B30, 0x400000000000LL) )
          {
            v67 = 1LL;
            v71 = &v67;
            v72 = 8LL;
            v61 = v10;
            v73 = (int *)&v61;
            v74 = v34;
            v62 = *(_DWORD *)(Oplock + 144);
            v75 = &v62;
            v76 = v34;
            v68 = 0x1000000LL;
            v77 = &v68;
            v78 = 8LL;
            tlgWriteAgg((__int64)&dword_140E06B30, (unsigned __int8 *)&byte_140046EDD, v33, v33 + 6, &v70);
          }
          v13 = -2147483602;
          goto LABEL_26;
        }
        v30 = v60;
      }
    }
    else
    {
      v30 = v60;
    }
    if ( !v18 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
      goto LABEL_57;
    switch ( v10 )
    {
      case 0x10u:
        if ( (*(_DWORD *)(Oplock + 144) & 1) == 0
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x10
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1010 )
        {
          goto LABEL_25;
        }
        break;
      case 0x1000u:
        break;
      case 0x3000u:
      case 0x10000u:
        if ( !v18
          && (*(_DWORD *)(Oplock + 144) & 1) == 0
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x1000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x3000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0xB000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x103000
          && (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) != 0x803000
          && (*(_DWORD *)(Oplock + 144) & 0x10000) == 0
          || *(_BYTE *)(*(_QWORD *)(v30 + 48) + 73LL) != (_BYTE)v23 )
        {
LABEL_57:
          if ( v10 == 0x10000 )
          {
            v13 = -1073739511;
            goto LABEL_180;
          }
          goto LABEL_25;
        }
        if ( !v18 )
        {
          if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000 || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000 )
          {
            v35 = *(__int64 **)(Oplock + 40);
            while ( v35 != (__int64 *)(Oplock + 40) )
            {
              v36 = FsRtlpOplockKeysEqual(*(_QWORD *)(v30 + 48), *(_QWORD *)(v35[2] + 48), 0);
              LOBYTE(v23) = 0;
              if ( v36 )
              {
                if ( v10 == 0x10000 )
                {
LABEL_80:
                  v13 = -1073741597;
                  goto LABEL_180;
                }
                FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)v35[1], 533, 0x3000u, Oplock);
                v30 = v60;
                break;
              }
              v35 = (__int64 *)*v35;
              v30 = v60;
            }
          }
          if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x3000 || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000 )
          {
            v37 = *(__int64 **)(Oplock + 56);
            while ( v37 != (__int64 *)(Oplock + 56) )
            {
              v38 = FsRtlpOplockKeysEqual(*(_QWORD *)(v30 + 48), v37[3], 0);
              LOBYTE(v23) = 0;
              if ( v38 && !v37[7] )
              {
                if ( v10 == 0x10000 )
                  goto LABEL_80;
                FsRtlpRemoveAndCompleteRHIrp(*(_QWORD **)v37[1], Oplock, 533, 0x3000u, 0, 0, 0, 0);
                break;
              }
              v37 = (__int64 *)*v37;
              v30 = v60;
            }
          }
          v39 = *(_QWORD **)(Oplock + 72);
          if ( v39 != (_QWORD *)(Oplock + 72) )
          {
            while ( 1 )
            {
              if ( v39 == (_QWORD *)(Oplock + 72) )
              {
                v30 = v60;
                goto LABEL_100;
              }
              v40 = FsRtlpOplockKeysEqual(*(_QWORD *)(v60 + 48), v39[3], 0);
              LOBYTE(v23) = 0;
              if ( v40 )
                break;
              v39 = (_QWORD *)*v39;
            }
            v13 = -1073741598;
            if ( v10 != 0x10000 )
              goto LABEL_26;
            goto LABEL_180;
          }
          v30 = v60;
        }
LABEL_100:
        v41 = v63;
        (*v63)[4] = KeGetCurrentThread()->ApcState.Process;
        (*v41)[3] = *(_QWORD *)(v30 + 48);
        v42 = FsRtlpOplockEnqueueRH((__int64 *)(Oplock + 56), *v41);
        v13 = v42;
        LOBYTE(v23) = 0;
        if ( v42 < 0 )
        {
          if ( v10 == 0x10000 )
            goto LABEL_180;
          *(_DWORD *)(a3 + 48) = v42;
          IofCompleteRequest((PIRP)a3, 1);
          goto LABEL_27;
        }
        v43 = 0;
        v44 = 0LL;
        if ( v10 == 0x10000 )
        {
          v45 = *v41 + 7;
          v46 = (_QWORD *)(Oplock + 120);
          v47 = *(_QWORD *)(Oplock + 120);
          if ( *(_QWORD *)(v47 + 8) != Oplock + 120 )
            __fastfail(3u);
          *v45 = v47;
          v45[1] = v46;
          *(_QWORD *)(v47 + 8) = v45;
          *v46 = v45;
          v13 = 0;
        }
        else
        {
          if ( (a8 & 8) != 0 )
            *((_DWORD *)*v41 + 12) |= 0x2000000u;
          if ( (a8 & 0x10) != 0 )
            *((_DWORD *)*v41 + 12) |= 0x4000000u;
          if ( v62 )
            *((_DWORD *)*v41 + 12) |= 0x8000000u;
          (*v41)[5] = KeGetCurrentThread();
          ObfReferenceObjectWithTag((PVOID)(*v41)[5], 0x746C6644u);
          (*v41)[2] = a3;
          *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
          v13 = 259;
          *(_DWORD *)(a3 + 48) = 0;
          *(_QWORD *)(a3 + 56) = Oplock;
          if ( a6 )
            ObfReferenceObjectWithTag((PVOID)(*v41)[3], 0x746C6644u);
          *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
          if ( *(_BYTE *)(a3 + 68) )
          {
            if ( !a6 || (v48 = 0, !a7) )
              v48 = 1;
            FsRtlpCancelOplockRHIrp(a3, 1, v48);
            v10 = v61;
            v41 = v63;
            goto LABEL_122;
          }
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
          v10 = v61;
          v41 = v63;
        }
        v43 = 1;
LABEL_122:
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          LODWORD(v63) = v10;
          v80 = &v63;
          v81 = 4LL;
          v59 = a7;
          v82 = &v59;
          v83 = 1LL;
          v69 = Oplock;
          v84 = &v69;
          v85 = 8LL;
          LODWORD(v60) = *(_DWORD *)(Oplock + 144);
          v86 = &v60;
          v87 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)byte_140046E75,
            0LL,
            0LL,
            6u,
            &v79);
        }
        FsRtlpComputeShareableOplockState(Oplock);
        if ( !(unsigned int)((__int64 (*)(void))Feature_3043474747__private_IsEnabledDeviceUsageNoInline)() && v43 )
          FsRtlpOplockTryPrepForAckTimeout(Oplock, (*v41)[3], a3, *v41 + 9, *v41 + 11);
        if ( (unsigned int)((__int64 (*)(void))Feature_3043474747__private_IsEnabledDeviceUsageNoInline)() )
          v44 = (__int64)*v41;
        *v41 = 0LL;
        if ( v10 == 0x10000 )
          *(_DWORD *)(Oplock + 144) |= 0x10000u;
        IsEnabledDeviceUsageNoInline = Feature_3043474747__private_IsEnabledDeviceUsageNoInline(0LL);
        LOBYTE(v23) = 0;
        if ( IsEnabledDeviceUsageNoInline && v43 )
        {
          FsRtlpOplockTryPrepForAckTimeout(Oplock, *(_QWORD *)(v44 + 24), a3, v44 + 72, v44 + 88);
          LOBYTE(v23) = 0;
        }
        goto LABEL_180;
      default:
LABEL_179:
        if ( v14 )
          goto LABEL_180;
        goto LABEL_25;
    }
    if ( v18 )
    {
LABEL_169:
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      *(_DWORD *)(a3 + 48) = v23;
      v55 = (_QWORD *)(a3 + 168);
      v56 = (_QWORD *)(Oplock + 40);
      v57 = *(_QWORD *)(Oplock + 40);
      if ( *(_QWORD *)(v57 + 8) != Oplock + 40 )
        __fastfail(3u);
      *v55 = v57;
      *(_QWORD *)(a3 + 176) = v56;
      *(_QWORD *)(v57 + 8) = v55;
      *v56 = v55;
      *(_QWORD *)(a3 + 56) = Oplock;
      FsRtlpComputeShareableOplockState(Oplock);
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(v60 + 48), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelReadOnlyOplockIrp(a3, 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v14 = 1;
      v13 = 259;
      LOBYTE(v23) = 0;
      goto LABEL_179;
    }
    if ( (*(_DWORD *)(Oplock + 144) & 1) != 0
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x10
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1010
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x3000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x103000
      || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x803000
      || (*(_DWORD *)(Oplock + 144) & 0x10000) != 0 )
    {
      v50 = *(_QWORD **)(Oplock + 56);
      if ( v50 != (_QWORD *)(Oplock + 56) )
        goto LABEL_151;
      if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v50 != (_QWORD *)(Oplock + 56) )
        {
LABEL_151:
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v30 + 48), v50[3], 0) )
            goto LABEL_25;
          v50 = (_QWORD *)*v50;
          v30 = v60;
        }
        v51 = *(_QWORD **)(Oplock + 72);
        while ( v51 != (_QWORD *)(Oplock + 72) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v30 + 48), v51[3], 0) )
            goto LABEL_25;
          v51 = (_QWORD *)*v51;
          v30 = v60;
        }
        v23 = 0;
      }
      if ( (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x10
        || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1000
        || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0x1010
        || (*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) == 0xB000 )
      {
        for ( j = *(__int64 **)(Oplock + 40); j != (__int64 *)(Oplock + 40); j = (__int64 *)*j )
        {
          v53 = j[2];
          v54 = (__int64 *)(v53 + 48);
          if ( *(_DWORD *)(v53 + 24) == 590400 || *v54 != *(_QWORD *)(v30 + 48) )
          {
            if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v30 + 48), *v54, 0) )
            {
              FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)j[1], 533, v10 & 0x7000, Oplock);
              break;
            }
            v30 = v60;
          }
        }
        v23 = 0;
      }
      goto LABEL_169;
    }
  }
LABEL_25:
  v13 = -1073741598;
LABEL_26:
  *(_DWORD *)(a3 + 48) = v13;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_27:
  LOBYTE(v23) = 0;
LABEL_180:
  if ( v58 != (_BYTE)v23 && v10 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v13;
}
