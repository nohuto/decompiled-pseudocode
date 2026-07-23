/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x140791C0C (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x140791E08 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9E410 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v9; // r14d
  _QWORD *Pool2; // r15
  unsigned int v11; // edi
  __int64 v13; // rax
  int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 i; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r14d
  __int64 v26; // r11
  bool v27; // zf
  __int64 v28; // r10
  __int64 v29; // r11
  PIRP v30; // rcx
  char v31; // di
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // r13d
  _QWORD *v35; // r10
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD **v38; // r9
  _QWORD *v39; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  char v43; // cl
  PIRP v44; // rcx
  _QWORD *v45; // rcx
  int v46; // [rsp+70h] [rbp-240h]
  __int64 v47; // [rsp+A8h] [rbp-208h] BYREF
  char v48; // [rsp+B0h] [rbp-200h]
  int v49; // [rsp+B4h] [rbp-1FCh]
  char v50; // [rsp+B8h] [rbp-1F8h]
  char v51; // [rsp+B9h] [rbp-1F7h]
  char v52; // [rsp+BAh] [rbp-1F6h] BYREF
  char v53; // [rsp+BBh] [rbp-1F5h] BYREF
  char v54; // [rsp+BCh] [rbp-1F4h]
  int v55; // [rsp+C0h] [rbp-1F0h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-1E8h] BYREF
  char v57; // [rsp+D0h] [rbp-1E0h]
  char v58; // [rsp+D1h] [rbp-1DFh]
  unsigned int v59; // [rsp+D4h] [rbp-1DCh] BYREF
  int v60; // [rsp+D8h] [rbp-1D8h] BYREF
  unsigned int v61; // [rsp+DCh] [rbp-1D4h] BYREF
  int v62; // [rsp+E0h] [rbp-1D0h] BYREF
  _QWORD *v63; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-1C0h] BYREF
  _QWORD *v65; // [rsp+F8h] [rbp-1B8h] BYREF
  __int64 v66; // [rsp+108h] [rbp-1A8h] BYREF
  _QWORD v67[3]; // [rsp+110h] [rbp-1A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+128h] [rbp-188h] BYREF
  unsigned int *v69; // [rsp+148h] [rbp-168h]
  __int64 v70; // [rsp+150h] [rbp-160h]
  __int64 *v71; // [rsp+158h] [rbp-158h]
  __int64 v72; // [rsp+160h] [rbp-150h]
  int *v73; // [rsp+168h] [rbp-148h]
  __int64 v74; // [rsp+170h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v75[2]; // [rsp+178h] [rbp-138h] BYREF
  int *v76; // [rsp+198h] [rbp-118h]
  __int64 v77; // [rsp+1A0h] [rbp-110h]
  __int64 *v78; // [rsp+1A8h] [rbp-108h]
  __int64 v79; // [rsp+1B0h] [rbp-100h]
  unsigned int *v80; // [rsp+1B8h] [rbp-F8h]
  __int64 v81; // [rsp+1C0h] [rbp-F0h]
  int *v82; // [rsp+1C8h] [rbp-E8h]
  __int64 v83; // [rsp+1D0h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1D8h] [rbp-D8h] BYREF
  _QWORD *v85; // [rsp+1F8h] [rbp-B8h]
  __int64 v86; // [rsp+200h] [rbp-B0h]
  __int64 *v87; // [rsp+208h] [rbp-A8h]
  __int64 v88; // [rsp+210h] [rbp-A0h]
  int *v89; // [rsp+218h] [rbp-98h]
  __int64 v90; // [rsp+220h] [rbp-90h]

  v56 = a2;
  v47 = a1;
  v65 = a5;
  v9 = 0;
  v49 = 0;
  Pool2 = 0LL;
  v63 = 0LL;
  v50 = 0;
  v54 = 0;
  v51 = 0;
  LOBYTE(v64) = 0;
  v53 = 0;
  v52 = 0;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v55 = a4;
    v76 = &v55;
    v77 = 4LL;
    v61 = a7;
    v78 = (__int64 *)&v61;
    v79 = 4LL;
    v67[0] = a1;
    v80 = (unsigned int *)v67;
    v81 = 8LL;
    v62 = *(_DWORD *)(a1 + 144);
    v82 = &v62;
    v83 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)&word_140046D86, 0LL, 0LL, 6u, v75);
    a1 = v47;
  }
  if ( !a1 )
  {
    v11 = -1073741597;
LABEL_5:
    *(_DWORD *)(a3 + 48) = v11;
    IofCompleteRequest((PIRP)a3, 1);
    return v11;
  }
  if ( (a6 & 0x38) != 0 && a4 != 12288 )
  {
    v11 = -1073740519;
    goto LABEL_5;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  if ( (*(_DWORD *)(v47 + 144) & 0xF00000) == 0
    && (*(_DWORD *)(v47 + 144) & 0x1F0FFDF) != 0xB000
    && (*(_DWORD *)(v47 + 144) & 0x1F0FFDF) != 0x3000
    || ((*(_DWORD *)(v47 + 144) & 0x1F0FFDF) == 0xB000 || (*(_DWORD *)(v47 + 144) & 0x1F0FFDF) == 0x3000)
    && *(_QWORD *)(v47 + 72) == v47 + 72 )
  {
LABEL_15:
    v9 = -1073741597;
    v49 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_115;
  }
  v13 = *(_QWORD *)(a3 + 24);
  v27 = (*(_DWORD *)(v13 + 8) & 4) == 0;
  v14 = *(_DWORD *)(v13 + 8) & 4;
  v55 = v14;
  v48 = !v27;
  if ( v14 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x120uLL);
    v63 = Pool2;
    v14 = v55;
  }
  v15 = *(_DWORD *)(v47 + 144) & 0x1F0FFDF;
  if ( v15 > 0x307040 )
  {
    if ( v15 == 5271616 )
      goto LABEL_25;
    if ( v15 != 8400896 )
    {
      if ( v15 != 8409152 && v15 != 8417344 )
        goto LABEL_15;
      goto LABEL_25;
    }
  }
  else
  {
    if ( v15 == 3174464 )
      goto LABEL_25;
    if ( v15 != 12288 && v15 != 45056 && v15 != 1060864 )
    {
      if ( v15 != 1069120 && v15 != 1077312 )
        goto LABEL_15;
LABEL_25:
      v16 = v56;
      if ( !v14 )
        goto LABEL_30;
      v17 = *(_QWORD *)(v56 + 48);
      v18 = *(_QWORD *)(v47 + 8);
      if ( v18 == v17 || !FsRtlpOplockKeysEqual(v17, v18, 0) )
        goto LABEL_15;
      v14 = v55;
      if ( !v55 )
      {
LABEL_30:
        if ( *(_QWORD *)(v47 + 8) != *(_QWORD *)(v16 + 48) )
          goto LABEL_15;
        if ( !v14 )
          goto LABEL_96;
      }
      if ( a4 )
      {
LABEL_96:
        v42 = *(_DWORD *)(v47 + 144) & 0x1F0FFDF;
        if ( (v42 == 1069120 || v42 == 1077312 || v42 == 3174464 || v42 == 5271616 || v42 == 8409152 || v42 == 8417344)
          && (a4 & 0x7000) > (*(_DWORD *)(v47 + 144) & 0x200000 | ((*(_DWORD *)(v47 + 144) & 0x100000 | (*(_DWORD *)(v47 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
        {
          v43 = v64;
          if ( *(_QWORD *)(v47 + 88) != v47 + 88 )
            v43 = 1;
        }
        else
        {
          v43 = v64;
        }
        if ( !v43 )
        {
          FsRtlpModifyThreadPriorities(v47, 0LL, 0);
          FsRtlpClearOwner(v47, 0LL);
          *(_BYTE *)(v47 + 32) = 0;
          LOBYTE(v46) = v48;
          v9 = FsRtlpGrantAnyOplockFromExclusive(v47, a3, v16, a4, v65, v46, &v63, &v52, &v53, a6, a7);
          v49 = v9;
          Pool2 = v63;
          goto LABEL_110;
        }
        FsRtlpFillOutputBuffer(
          a3,
          (*(_DWORD *)(v47 + 144) >> 12) & 7,
          (*(_DWORD *)(v47 + 144) & 0x200000 | ((*(_DWORD *)(v47 + 144) & 0x100000 | (*(_DWORD *)(v47 + 144) >> 1) & 0x200000u) >> 1)) >> 19,
          1,
          0,
          0);
        v9 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest(v44, 1);
        v49 = -2147483602;
        goto LABEL_115;
      }
      FsRtlpModifyThreadPriorities(v47, 0LL, 0);
      FsRtlpClearOwner(v47, 0LL);
      *(_BYTE *)(v47 + 32) = 0;
      *(_DWORD *)(v47 + 144) = *(_DWORD *)(v47 + 144) & 0x8000020 | 1;
      Pool2[2] = *(_QWORD *)(v47 + 8);
      FsRtlpOplockPerfMoveData(v47 + 160, Pool2 + 3);
      FsRtlpOplockMoveAckTimeout(v47 + 176, Pool2 + 5);
      v19 = (_QWORD *)(v47 + 104);
      v20 = *(_QWORD *)(v47 + 104);
      if ( *(_QWORD *)(v20 + 8) == v47 + 104 )
      {
        *Pool2 = v20;
        Pool2[1] = v19;
        *(_QWORD *)(v20 + 8) = Pool2;
        *v19 = Pool2;
        if ( (unsigned int)dword_140E06B30 > 5 )
        {
          v65 = (_QWORD *)Pool2[2];
          v76 = (int *)&v65;
          v77 = 8LL;
          v56 = v47;
          v78 = &v56;
          v79 = 8LL;
          v61 = *(_DWORD *)(v47 + 144);
          v80 = &v61;
          v81 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06B30,
            (unsigned __int8 *)word_140046ADA,
            0LL,
            0LL,
            5u,
            v75);
        }
        Pool2 = 0LL;
        v63 = 0LL;
        *(_QWORD *)(v47 + 8) = 0LL;
        *(_DWORD *)(v47 + 144) |= 0x1000000u;
        *(_DWORD *)(a3 + 48) = 0;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_110;
      }
LABEL_33:
      __fastfail(3u);
    }
  }
  for ( i = *(_QWORD *)(v47 + 72); ; i = *(_QWORD *)i )
  {
    if ( i == v47 + 72 )
    {
      v31 = v54;
      goto LABEL_88;
    }
    if ( v14 )
      break;
    if ( *(_QWORD *)(i + 24) == *(_QWORD *)(v56 + 48) )
      goto LABEL_46;
LABEL_86:
    ;
  }
  v22 = *(_QWORD *)(v56 + 48);
  v23 = *(_QWORD *)(i + 24);
  if ( v23 == v22 )
    goto LABEL_86;
  if ( !FsRtlpOplockKeysEqual(v22, v23, 0) )
  {
    v14 = v55;
    goto LABEL_86;
  }
LABEL_46:
  v50 = 1;
  v57 = 1;
  v24 = *(_DWORD *)(i + 48) & 0xF00000;
  v25 = a7;
  if ( v24 != 0x800000 )
  {
    if ( v24 != 0x100000 )
      goto LABEL_58;
    if ( (a4 & 0x7000) <= 0x3000 )
      goto LABEL_58;
    v32 = v47 + 88;
    v33 = *(_QWORD *)(v47 + 88);
    if ( v33 == v47 + 88 )
    {
      if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a7) )
        goto LABEL_58;
    }
    if ( v33 != v32 )
      v25 = 1;
    goto LABEL_53;
  }
  if ( !a4 )
    goto LABEL_58;
  v26 = *(_QWORD *)(v47 + 88);
  v27 = v26 == v47 + 88;
  if ( v26 != v47 + 88 )
  {
LABEL_51:
    if ( !v27 )
      v25 = 0;
LABEL_53:
    FsRtlpFillOutputBuffer(a3, 3, v25, 1, 0, 0);
    v9 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    IofCompleteRequest(v30, 1);
    v49 = -2147483602;
    v31 = 1;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a7) )
  {
    v27 = v29 == v28;
    goto LABEL_51;
  }
LABEL_58:
  FsRtlpOplockDequeueRH((_QWORD *)i);
  v34 = v55;
  LOBYTE(v35) = 0;
  if ( !v55 )
  {
    v51 = 1;
    v58 = 1;
    if ( !a4 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(i + 24), 0x746C6644u);
      LOBYTE(v35) = 0;
      goto LABEL_68;
    }
    goto LABEL_70;
  }
  Pool2[2] = *(_QWORD *)(i + 24);
  FsRtlpOplockPerfMoveData(i + 72, Pool2 + 3);
  FsRtlpOplockMoveAckTimeout(i + 88, Pool2 + 5);
  v36 = (_QWORD *)(v47 + 104);
  v37 = *(_QWORD *)(v47 + 104);
  if ( *(_QWORD *)(v37 + 8) != v47 + 104 )
    goto LABEL_33;
  *Pool2 = v37;
  Pool2[1] = v36;
  *(_QWORD *)(v37 + 8) = Pool2;
  *v36 = Pool2;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v67[0] = Pool2[2];
    v85 = v67;
    v86 = 8LL;
    v64 = v47;
    v87 = &v64;
    v88 = 8LL;
    v62 = *(_DWORD *)(v47 + 144);
    v89 = &v62;
    v90 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140046B60, 0LL, 0LL, 5u, &v84);
    v35 = 0LL;
  }
  Pool2 = v35;
  v63 = v35;
LABEL_68:
  if ( !a4 )
  {
    FsRtlpComputeShareableOplockState(v47);
    v9 = 0;
    v49 = 0;
    *(_DWORD *)(a3 + 48) = 0;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_80;
  }
LABEL_70:
  if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
  {
    v38 = (_QWORD **)v65;
    if ( v65 )
    {
      FsRtlpOplockPerfMoveData(i + 72, *v65 + 72LL);
      FsRtlpOplockMoveAckTimeout(i + 88, *v39 + 88LL);
    }
    v9 = FsRtlpRequestShareableOplock(&v47, v56, a3, a4, v38, v48, 1, a6, a7, (char)v35);
    v49 = v9;
  }
  else
  {
    *(_QWORD *)v47 = a3;
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    v9 = 259;
    v49 = 259;
    *(_QWORD *)(a3 + 56) = v47;
    *(_QWORD *)(v47 + 16) = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v47 + 24) = CurrentThread;
    ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
    *(_BYTE *)(v47 + 32) = 0;
    if ( v34 )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v56 + 48), 0x746C6644u);
      v41 = *(_QWORD *)(v56 + 48);
    }
    else
    {
      v41 = *(_QWORD *)(i + 24);
    }
    *(_QWORD *)(v47 + 8) = v41;
    FsRtlpOplockPerfMoveData(i + 72, v47 + 160);
    FsRtlpOplockMoveAckTimeout(i + 88, v47 + 176);
    *(_DWORD *)(v47 + 144) = a4 | *(_DWORD *)(v47 + 144) & 0x8000020 | 0x40;
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      FsRtlpCancelExclusiveIrp(a3, 1, v48 ^ 1);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
  }
LABEL_80:
  FsRtlpModifyThreadPriorities(v47, i, 0);
  FsRtlpClearOwner(v47, i);
  if ( *(_QWORD *)(v47 + 72) == v47 + 72 )
    *(_BYTE *)(v47 + 32) = 0;
  FsRtlpOplockPerfSendData(i + 72);
  FsRtlpFreeRHOpContext((PVOID *)i, 1);
  if ( v34 )
    *(_DWORD *)(v47 + 144) |= 0x1000000u;
  v31 = 1;
LABEL_88:
  if ( !v50 )
    goto LABEL_15;
  if ( v51 )
    FsRtlpReleaseIrpsWaitingForRH(v47);
  if ( !v31 )
  {
LABEL_110:
    if ( v52 )
    {
      while ( 1 )
      {
        v45 = *(_QWORD **)(v47 + 88);
        if ( v45 == (_QWORD *)(v47 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v45);
      }
    }
    if ( v53 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v47 + 8), 0x746C6644u);
      *(_QWORD *)(v47 + 8) = 0LL;
    }
  }
LABEL_115:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v59 = v9;
    v69 = &v59;
    v70 = 4LL;
    v66 = v47;
    v71 = &v66;
    v72 = 8LL;
    v60 = *(_DWORD *)(v47 + 144);
    v73 = &v60;
    v74 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06B30,
      (unsigned __int8 *)&qword_140046A78,
      0LL,
      0LL,
      5u,
      &v68);
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v47 + 152));
  return v9;
}
