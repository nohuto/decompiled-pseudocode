/*
 * XREFs of AlpcpSendMessage @ 0x14098E2D0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReplyPort @ 0x1407C2E40 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1407C2FD0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140929090 (NtAlpcSendWaitReceivePort.c)
 *     LpcRequestPort @ 0x14098DE90 (LpcRequestPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 *     NtRequestPort @ 0x140B2B7F0 (NtRequestPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReplaceAttributes @ 0x14098D9FC (AlpcpReplaceAttributes.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     AlpcpAllocateMessage @ 0x14098DB40 (AlpcpAllocateMessage.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 *a1, __m256i *a2, __int64 a3, char a4)
{
  int v7; // r15d
  ULONG_PTR v8; // rdi
  __int64 v9; // r13
  int v10; // r12d
  int v11; // eax
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  int v16; // r8d
  __int16 v17; // dx
  unsigned __int16 v18; // cx
  __int16 v19; // dx
  struct _KLOCK_ENTRIES *v20; // r9
  struct _KTHREAD *CurrentThread; // r10
  int v22; // esi
  unsigned int *v23; // r13
  char PreviousMode; // dl
  ULONG_PTR v25; // r14
  signed __int64 *v26; // rbx
  signed __int64 v27; // r8
  ULONG_PTR HandlePointer; // r14
  volatile __int64 *v29; // rcx
  int v30; // eax
  __int64 v31; // r14
  unsigned __int64 v32; // rdx
  _QWORD *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r14
  __int64 *v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  void *v44; // rcx
  __int64 *v45; // rcx
  ULONG_PTR v46; // r14
  void *v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 Pool2; // rax
  ULONG_PTR v50; // rcx
  int v51; // ebx
  int v52; // eax
  unsigned int v53; // ebx
  volatile __int64 *v54; // rcx
  unsigned __int16 v55; // dx
  unsigned __int16 v56; // r9
  unsigned __int64 v57; // rcx
  volatile __int64 *v58; // rcx
  __int64 v59; // rcx
  ULONG_PTR v60; // rcx
  ULONG_PTR v61; // r14
  __int64 v62; // rcx
  ULONG_PTR v63; // rcx
  signed __int32 v64; // eax
  _QWORD *v65; // rax
  AutoBoost *v66; // rcx
  signed __int64 v67; // rdx
  signed __int64 *v68; // r10
  ULONG_PTR v69; // r14
  int v70; // ebx
  signed __int32 v71[8]; // [rsp+0h] [rbp-158h] BYREF
  bool v72; // [rsp+40h] [rbp-118h]
  char v73; // [rsp+41h] [rbp-117h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-110h] BYREF
  int v75[2]; // [rsp+50h] [rbp-108h]
  __m256i v76; // [rsp+58h] [rbp-100h] BYREF
  __int64 v77; // [rsp+78h] [rbp-E0h]
  AutoBoost *v78; // [rsp+80h] [rbp-D8h]
  int v79[2]; // [rsp+90h] [rbp-C8h]
  __m256i *v80; // [rsp+98h] [rbp-C0h]
  __int64 *v81; // [rsp+A0h] [rbp-B8h]
  _BYTE v82[80]; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+100h] [rbp-58h] BYREF
  __int64 v84; // [rsp+110h] [rbp-48h]

  v73 = a4;
  *(_QWORD *)v79 = a3;
  v80 = a2;
  v81 = a1;
  memset(&v76, 0, sizeof(v76));
  v77 = 0LL;
  v7 = 0;
  v8 = 0LL;
  BugCheckParameter2 = 0LL;
  memset_0(v82, 0, 0x48uLL);
  v9 = *a1;
  *(_QWORD *)v75 = v9;
  v10 = *((_DWORD *)a1 + 12);
  v11 = *(_DWORD *)(v9 + 416);
  if ( (v11 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v11 & 8) != 0 )
    return 3221227271LL;
  if ( (v11 & 0x20) != 0 && (*(_DWORD *)(v9 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v83 = 0LL;
    v84 = 0LL;
    if ( (v10 & 0xC0000000) == 0x80000000 )
    {
      RtlCopyFromUser(&v83, a2, 0x18uLL);
      v13 = v83;
      v76.m256i_i16[0] = v83;
      v12 = v83 + 40;
      v76.m256i_i16[1] = v83 + 40;
      v76.m256i_i32[1] = DWORD1(v83);
      v76.m256i_i64[1] = DWORD2(v83);
      v76.m256i_i64[2] = HIDWORD(v83);
      v76.m256i_i32[6] = v84;
      v77 = HIDWORD(v84);
    }
    else
    {
      RtlCopyFromUser(&v76, a2, 0x28uLL);
      v12 = v76.m256i_u16[1];
      v13 = v76.m256i_i16[0];
    }
    if ( v13 >= (unsigned __int16)(v13 + 40) )
    {
      v16 = -1073741811;
      result = 3221225485LL;
      goto LABEL_11;
    }
    v14 = v13 + 40LL;
    if ( (*(_DWORD *)(v9 + 256) & 0x1000) != 0 )
    {
      if ( v14 > v12 )
      {
        v16 = -1073741811;
        result = 3221225485LL;
        goto LABEL_11;
      }
      v76.m256i_i16[1] = v13 + 40;
    }
    else if ( v14 != v12 )
    {
      v16 = -1073741811;
      result = 3221225485LL;
      goto LABEL_11;
    }
    result = 0LL;
    v16 = -1073741811;
LABEL_11:
    if ( (int)result < 0 )
      return result;
    v17 = v76.m256i_i16[2] & 0x7FFF;
    v76.m256i_i16[2] &= ~0x8000u;
    if ( v76.m256i_i16[3] )
      return 3221225485LL;
    goto LABEL_21;
  }
  v76 = *a2;
  v77 = a2[1].m256i_i64[0];
  if ( (v10 & 2) == 0 )
  {
    v55 = v76.m256i_i16[0];
LABEL_128:
    v56 = v76.m256i_u16[1];
    goto LABEL_129;
  }
  v55 = v76.m256i_i16[0];
  if ( v76.m256i_u16[1] <= (unsigned __int64)v76.m256i_u16[0] + 40 )
    goto LABEL_128;
  v56 = v76.m256i_i16[0] + 40;
  v76.m256i_i16[1] = v76.m256i_i16[0] + 40;
LABEL_129:
  if ( v55 >= (unsigned __int16)(v55 + 40) )
  {
    v16 = -1073741811;
    result = 3221225485LL;
    goto LABEL_133;
  }
  v57 = v55 + 40LL;
  if ( (*(_DWORD *)(v9 + 256) & 0x1000) != 0 )
  {
    if ( v57 > v56 )
    {
      v16 = -1073741811;
      result = 3221225485LL;
      goto LABEL_133;
    }
    v76.m256i_i16[1] = v55 + 40;
  }
  else if ( v57 != v56 )
  {
    v16 = -1073741811;
    result = 3221225485LL;
    goto LABEL_133;
  }
  result = 0LL;
  v16 = -1073741811;
LABEL_133:
  if ( (int)result < 0 )
    return result;
  v17 = v76.m256i_i16[2];
LABEL_21:
  v18 = (unsigned __int8)v17;
  v19 = v17 & 0xFF00;
  v20 = (struct _KLOCK_ENTRIES *)v76.m256i_u32[6];
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v9 + 256) & 0x1000) == 0 && (v10 & 2) == 0 )
  {
    if ( v18 != 7 || a4 )
    {
      if ( v76.m256i_i32[6] <= 0 )
      {
        if ( (v10 & 0x10000) != 0 )
          v18 = 3;
        else
          v18 = 1;
      }
      else
      {
        v18 = ((v10 & 0x10000) != 0) + 1;
      }
    }
    if ( !v76.m256i_i32[6] && *(_OWORD *)&v76.m256i_u64[1] != 0LL )
    {
      v16 = -1073740030;
      goto LABEL_29;
    }
    *(_OWORD *)&v76.m256i_u64[1] = *(_OWORD *)&CurrentThread[1].CycleTime;
LABEL_28:
    v76.m256i_i16[2] = v18 | v19 & 0xEFFF;
    v16 = 0;
    goto LABEL_29;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( v76.m256i_i32[6] )
    {
      v19 = 0;
      v18 = 2;
LABEL_150:
      v76.m256i_i32[6] = (int)v20;
      if ( !a4 )
        LODWORD(v77) = 0;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  if ( (v10 & 0x10000) != 0 )
  {
    if ( !v18 )
    {
      v18 = 3;
LABEL_148:
      v20 = 0LL;
LABEL_149:
      *(_OWORD *)&v76.m256i_u64[1] = *(_OWORD *)&CurrentThread[1].CycleTime;
      goto LABEL_150;
    }
    if ( (v18 == 13 || v18 == 3 || v18 == 4 || (unsigned int)v18 - 5 <= 1) && (v10 & 2) != 0 )
      goto LABEL_148;
  }
  else
  {
    if ( v18 != 9 )
    {
      if ( !v18 )
      {
        v18 = 1;
        goto LABEL_148;
      }
      if ( v18 == 1 )
      {
        if ( v76.m256i_i32[6] )
          goto LABEL_149;
        goto LABEL_29;
      }
      if ( (unsigned int)v18 - 7 >= 2 )
        goto LABEL_29;
    }
    if ( (v10 & 2) != 0 )
      goto LABEL_148;
  }
LABEL_29:
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( (unsigned __int64)v76.m256i_u16[1] > *(_QWORD *)(v9 + 272) )
    return 3221225519LL;
  if ( (v10 & 0x20000) != 0 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
    return 3221225473LL;
  v22 = v76.m256i_i32[6];
  if ( !v76.m256i_i32[6] )
  {
    v70 = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0);
    v8 = BugCheckParameter2;
    goto LABEL_77;
  }
  v10 |= 0x10u;
  LODWORD(v78) = v77;
  if ( v76.m256i_i32[6] >= 0 )
  {
    if ( (v76.m256i_i32[6] & 0xFC000000) != 0 )
    {
      if ( AlpcpSecondaryMessageTables )
        v23 = *(unsigned int **)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v76.m256i_u32[6] >> 26));
      else
        v23 = 0LL;
    }
    else
    {
      v23 = (unsigned int *)AlpcMessageTable;
    }
    BugCheckParameter2 = (ULONG_PTR)v23;
    if ( !v23 )
    {
      v70 = -1073740030;
      v9 = *(_QWORD *)v75;
      goto LABEL_59;
    }
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v72 = PreviousMode;
    v25 = v76.m256i_i32[6] & 0x3FFFFFF;
    if ( (v76.m256i_i16[12] & 0x3FC) != 0 )
    {
      v26 = (signed __int64 *)ExpLookupHandleTableEntry(v23, (unsigned int)v25);
      PreviousMode = v72;
    }
    else
    {
      v26 = 0LL;
    }
    if ( v26 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          _m_prefetchw(v26);
          v27 = *v26;
          if ( (*v26 & 1) == 0 )
            break;
          if ( v27 == _InterlockedCompareExchange64(v26, v27 - 1, v27) )
          {
            PreviousMode = v72;
            goto LABEL_43;
          }
        }
        if ( !v27 )
          break;
        ExpBlockOnLockedHandleEntry((__int64)v23, v26, v27);
      }
      PreviousMode = v72;
    }
    v26 = 0LL;
LABEL_43:
    if ( !v26 )
    {
      ExHandleLogBadReference((ULONG_PTR)v23, v25, PreviousMode);
      v70 = -1073740030;
      v9 = *(_QWORD *)v75;
      goto LABEL_59;
    }
    HandlePointer = ExGetHandlePointer(v26);
    if ( *(_DWORD *)(HandlePointer + 264) != v22 )
    {
      ExUnlockHandleTableEntry(v23, v26);
      v70 = -1073740030;
      v9 = *(_QWORD *)v75;
      goto LABEL_59;
    }
    if ( (_DWORD)v78 && *(_DWORD *)(HandlePointer + 272) != (_DWORD)v78 )
    {
      _InterlockedIncrement64(v26);
      v54 = (volatile __int64 *)(BugCheckParameter2 + 48);
      _InterlockedOr(v71, 0);
      if ( *v54 )
        ExfUnblockPushLock(v54, 0LL);
    }
    else
    {
      if ( AlpcpReferenceBlob(HandlePointer) )
      {
        AlpcpLockForCachedReferenceBlob(HandlePointer);
        --*(_WORD *)(HandlePointer - 30);
        _InterlockedIncrement64(v26);
        v29 = (volatile __int64 *)(BugCheckParameter2 + 48);
        _InterlockedOr(v71, 0);
        if ( *v29 )
          ExfUnblockPushLock(v29, 0LL);
        if ( *(_DWORD *)(HandlePointer + 264) != v22
          || (_DWORD)v78 && *(_DWORD *)(HandlePointer + 272) != (_DWORD)v78
          || !*(_QWORD *)(HandlePointer + 24) && !*(_QWORD *)(HandlePointer + 16) )
        {
          AlpcpUnlockMessage(HandlePointer);
          v70 = -1073740030;
          v9 = *(_QWORD *)v75;
          goto LABEL_59;
        }
        v9 = *(_QWORD *)v75;
        if ( *(_QWORD *)(HandlePointer + 184) == *(_QWORD *)(*(_QWORD *)v75 + 16LL)
          || *(_QWORD *)(HandlePointer + 192) == *(_QWORD *)v75 )
        {
          v8 = HandlePointer;
          goto LABEL_58;
        }
        AlpcpUnlockMessage(HandlePointer);
        v70 = -1073741790;
        goto LABEL_59;
      }
      _InterlockedIncrement64(v26);
      v58 = (volatile __int64 *)(BugCheckParameter2 + 48);
      _InterlockedOr(v71, 0);
      if ( *v58 )
      {
        ExfUnblockPushLock(v58, 0LL);
        v70 = -1073740030;
        v9 = *(_QWORD *)v75;
        goto LABEL_59;
      }
    }
    v70 = -1073740030;
    v9 = *(_QWORD *)v75;
    goto LABEL_59;
  }
  v61 = 0LL;
  v62 = *(_QWORD *)(v9 + 16);
  if ( v62 )
    v61 = AlpcReferenceBlobByHandle(v62 + 40, v76.m256i_i32[6] & 0x7FFFFFFF, AlpcReserveType);
  if ( v61 )
  {
    BugCheckParameter2 = *(_QWORD *)(v61 + 24);
    AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
    v63 = BugCheckParameter2;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v61 + 40), 1, 0) )
    {
      AlpcpUnlockMessage(BugCheckParameter2);
      AlpcpDereferenceBlobEx(v61);
      v70 = -1073740024;
      goto LABEL_59;
    }
    *(_DWORD *)(BugCheckParameter2 + 264) &= ~0x80000000;
    do
      v64 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v64 );
    *(_DWORD *)(v63 + 272) = v64;
    v8 = v63;
LABEL_58:
    v70 = 0;
    goto LABEL_59;
  }
  v70 = -1073741072;
LABEL_59:
  if ( v70 < 0 )
    return (unsigned int)v70;
  v30 = *(_DWORD *)(v8 + 40);
  if ( (v30 & 0x80u) != 0 )
    goto LABEL_77;
  v31 = *(_QWORD *)(v8 + 24);
  if ( v31 )
  {
    if ( *(_QWORD *)(v8 + 16) )
      v70 = 0;
    else
      v70 = -1073740030;
    if ( v70 < 0 )
      goto LABEL_72;
    v59 = *(_QWORD *)(v8 + 16);
    if ( v59 != v9 )
    {
      if ( (v30 & 7) == 0 )
      {
        BugCheckParameter2 = *(_QWORD *)(v31 + 16);
        *(_QWORD *)v75 = BugCheckParameter2 - 16;
        v66 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0LL, v20);
        v78 = v66;
        v67 = 17LL;
        v68 = *(signed __int64 **)v75;
        if ( _InterlockedCompareExchange64(*(volatile signed __int64 **)v75, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v68, 0, v66, (struct _KTHREAD *)v68);
          v66 = v78;
          v67 = 17LL;
        }
        if ( v66 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v66, (void *)0x11);
          else
            *((_BYTE *)v66 + 10) = 1;
        }
        if ( ((*(_DWORD *)(v31 + 416) >> 1) & 3) == 2 )
        {
          v69 = BugCheckParameter2;
          v72 = *(_QWORD *)BugCheckParameter2 == v9 || *(_QWORD *)(BugCheckParameter2 + 8) == v9;
        }
        else
        {
          v69 = BugCheckParameter2;
          v72 = *(_QWORD *)(BugCheckParameter2 + 16) == v9;
        }
        if ( v67 != _InterlockedCompareExchange64((volatile signed __int64 *)(v69 - 16), 0LL, v67) )
          ExfReleasePushLockShared((signed __int64 *)(v69 - 16));
        KeAbPostRelease(v69 - 16);
        if ( !v72 )
          goto LABEL_143;
        goto LABEL_66;
      }
      if ( (*(_BYTE *)(v9 + 416) & 6) != 6 )
        goto LABEL_143;
      v65 = *(_QWORD **)(v9 + 16);
      if ( !v65 || *v65 != v59 )
        goto LABEL_143;
    }
    if ( (*(_BYTE *)(v8 + 40) & 7) != 3 || (*(_DWORD *)(v8 + 40) & 0x2000) != 0 )
    {
LABEL_143:
      AlpcpUnlockMessage(v8);
      return 3221225506LL;
    }
  }
LABEL_66:
  if ( *(_QWORD *)(v8 + 32) && !*(_QWORD *)(v8 + 48) && (v10 & 0x30000) == 0 )
  {
    v32 = 792LL;
    if ( *(_QWORD *)(v8 + 224) )
      v32 = *(_QWORD *)(v8 + 232) + 792LL;
    v70 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v32);
    if ( v70 < 0 )
      goto LABEL_72;
    *(_QWORD *)(v8 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
  }
LABEL_77:
  if ( v70 < 0 )
    return (unsigned int)v70;
  v33 = 0LL;
  v34 = *(_QWORD *)v79;
  if ( *(_QWORD *)v79 )
  {
    v33 = v82;
    v70 = AlpcpCaptureAttributes(v9, v10, v79[0], v8, v82);
    v34 = *(_QWORD *)v79;
  }
  if ( v22 )
  {
    v52 = *(_DWORD *)(v8 + 40);
    if ( (v52 & 0x280) != 0 )
    {
      v53 = (v52 & 0x80u) != 0 ? 0xC0000703 : 0;
      if ( v34 )
        AlpcpReleaseAttributes(0LL, v33);
      AlpcpCancelMessage(v9, v8, 0x10000LL);
      return v53;
    }
  }
  if ( v70 < 0 )
  {
LABEL_72:
    AlpcpUnlockMessage(v8);
    return (unsigned int)v70;
  }
  if ( v22 )
  {
    v35 = *(_QWORD *)(v8 + 208);
    if ( v35 )
    {
      PspChargeProcessWakeCounter((PVOID)(v35 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
      *(_QWORD *)(v8 + 208) = 0LL;
    }
    v36 = *(_QWORD *)(v8 + 216);
    if ( v36 )
    {
      PspChargeProcessWakeCounter((PVOID)(v36 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
      *(_QWORD *)(v8 + 216) = 0LL;
    }
  }
  AlpcpReplaceAttributes(v8, (__int64)v33, v22);
  v37 = v76.m256i_u16[0];
  if ( (v10 & 0xC0000000) == 0x80000000 )
    v38 = &v80->m256i_i64[3];
  else
    v38 = &v80[1].m256i_i64[1];
  v39 = v73;
  if ( !v73 || MmIsUserAddress((unsigned __int64)v38 + v76.m256i_u16[0]) )
  {
    *(_QWORD *)(v8 + 176) = (unsigned __int64)v38 | v39;
    v40 = *(_QWORD *)(v8 + 96);
    v41 = 512LL;
    if ( v40 )
      v42 = *(_QWORD *)(v40 + 32) - 40LL;
    else
      v42 = 512LL;
    v43 = v37;
    if ( v37 > v42 )
    {
      if ( v40 )
        v41 = *(_QWORD *)(v40 + 32) - 40LL;
      if ( v37 > v41 )
      {
        if ( v37 > 0xFFD7 )
        {
          v7 = -2147483643;
        }
        else
        {
          v46 = *(_QWORD *)(v8 + 232);
          if ( v43 > v41 + v46 )
          {
            v47 = *(void **)(v8 + 224);
            if ( v47 )
            {
              ExFreePoolWithTag(v47, 0x42456C41u);
              *(_QWORD *)(v8 + 232) = 0LL;
            }
            v48 = v43 - v41;
            Pool2 = ExAllocatePool2(0x100uLL);
            *(_QWORD *)(v8 + 224) = Pool2;
            v50 = *(_QWORD *)(v8 + 48);
            if ( Pool2 )
            {
              *(_QWORD *)(v8 + 232) = v48;
              if ( v50 )
              {
                v51 = AlpcpChargePagedPoolQuota(v50, v48 - v46);
                if ( v51 < 0 )
                {
                  ExFreePoolWithTag(*(PVOID *)(v8 + 224), 0x42456C41u);
                  *(_QWORD *)(v8 + 224) = 0LL;
                  *(_QWORD *)(v8 + 232) = 0LL;
                  AlpcpReleasePagedPoolQuota(*(_QWORD *)(v8 + 48), v46);
                  v7 = v51;
                }
              }
            }
            else
            {
              if ( v50 )
                AlpcpReleasePagedPoolQuota(v50, v46);
              v7 = -1073741670;
            }
          }
        }
      }
      else
      {
        v44 = *(void **)(v8 + 224);
        if ( v44 )
        {
          ExFreePoolWithTag(v44, 0x42456C41u);
          *(_QWORD *)(v8 + 224) = 0LL;
          v60 = *(_QWORD *)(v8 + 48);
          if ( v60 )
            AlpcpReleasePagedPoolQuota(v60, *(_QWORD *)(v8 + 232));
          *(_QWORD *)(v8 + 232) = 0LL;
        }
      }
    }
  }
  else
  {
    v7 = -1073741819;
  }
  if ( v7 < 0 )
  {
    AlpcpUnlockMessage(v8);
    return (unsigned int)v7;
  }
  else
  {
    v45 = v81;
    v81[1] = v8;
    *((_DWORD *)v45 + 13) = *(__int32 *)((char *)v76.m256i_i32 + 2);
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( *(_QWORD *)(v8 + 32) )
        return AlpcpDispatchReplyToWaitingThread(v45);
      else
        return AlpcpDispatchReplyToPort(v45);
    }
    else
    {
      return AlpcpDispatchNewMessage(v45);
    }
  }
}
