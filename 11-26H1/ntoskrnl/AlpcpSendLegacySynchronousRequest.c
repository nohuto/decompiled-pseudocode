/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x140A52C1C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpLogWaitForReply @ 0x14077D0E0 (AlpcpLogWaitForReply.c)
 *     AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpSetOwnerPortMessage @ 0x1408EEA60 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCaptureMessageData @ 0x14098CCB0 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessage @ 0x14098DB40 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpAvailableBufferSize @ 0x140A53310 (AlpcpAvailableBufferSize.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140A53330 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageMainQueue @ 0x140A83330 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140B155E0 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140B4A26C (AlpcpLogSendMessage.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, AutoBoost *a2, __m256i *a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  __int64 *v6; // r10
  int v8; // ecx
  __int64 result; // rax
  unsigned __int16 v10; // ecx^2
  __int64 v11; // rdx
  __int64 v12; // r14
  char *v13; // r15
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  int v20; // edi
  void *v21; // rdx
  struct _KLOCK_ENTRIES *v22; // r9
  LegacyAutoBoost *v23; // r15
  signed __int64 *v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  signed __int64 *v27; // r15
  AutoBoost *v28; // rcx
  signed __int64 v29; // rdx
  struct _KLOCK_ENTRIES *v30; // r9
  AutoBoost *v31; // rcx
  __int64 v32; // rdx
  AutoBoost *v33; // rcx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  ULONG_PTR v36; // rdx
  _QWORD *v37; // rcx
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // rcx
  AutoBoost *v41; // rax
  AutoBoost *v42; // rax
  AutoBoost *v43; // rdx
  AutoBoost **v44; // rcx
  __int64 *v45; // rbx
  int v46; // edi
  signed __int32 v47; // eax
  signed __int64 v48; // rax
  ULONG_PTR v49; // r15
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v51; // [rsp+28h] [rbp-D0h]
  AutoBoost *v52; // [rsp+30h] [rbp-C8h]
  AutoBoost *CurrentThread; // [rsp+40h] [rbp-B8h]
  __int64 *v54; // [rsp+50h] [rbp-A8h]
  int v55; // [rsp+60h] [rbp-98h]
  __int64 v56; // [rsp+68h] [rbp-90h]
  __int128 v57; // [rsp+70h] [rbp-88h] BYREF
  __int128 v58; // [rsp+80h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-68h]
  __int128 v60; // [rsp+98h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-50h]
  char v62; // [rsp+118h] [rbp+20h]

  v62 = (char)a4;
  v4 = (char)a4;
  v6 = (__int64 *)a2;
  v54 = (__int64 *)a2;
  v51 = (_QWORD *)a1;
  v56 = a1;
  v52 = a2;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (_BYTE)a4 )
  {
    v60 = 0LL;
    v61 = 0LL;
    RtlCopyFromUser(&v57, a3, 0x28uLL);
    v6 = v54;
  }
  else
  {
    v57 = *(_OWORD *)a3->m256i_i8;
    v58 = *(_OWORD *)&a3->m256i_u64[2];
    v59 = a3[1].m256i_i64[0];
  }
  if ( DWORD2(v58) )
    return AlpcpSendMessage(v6, a3, 0LL, v4);
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 0x2000) == 0 )
    return AlpcpSendMessage(v6, a3, 0LL, v4);
  if ( (v8 & 6) != 4 )
    return AlpcpSendMessage(v6, a3, 0LL, v4);
  if ( (v8 & 0x38) != 0 )
    return AlpcpSendMessage(v6, a3, 0LL, v4);
  v10 = WORD1(v57);
  if ( WORD3(v57) )
    return AlpcpSendMessage(v6, a3, 0LL, v4);
  if ( (unsigned __int64)WORD1(v57) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  v11 = (unsigned __int16)(v57 + 40);
  if ( (unsigned __int16)v57 >= (unsigned __int16)(v57 + 40)
    || (unsigned __int64)(unsigned __int16)v57 + 40 > WORD1(v57) )
  {
    return 3221225485LL;
  }
  WORD1(v57) = v57 + 40;
  v12 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  BugCheckParameter2 = v12;
  if ( v12 )
  {
    AlpcpLockForCachedReferenceBlob(v12, v11, v10, a4);
    --*(_WORD *)(v12 - 30);
    v46 = *(_DWORD *)(v12 + 264) & 0x7FFFFFFF;
    memset_0((void *)v12, 0, 0x118uLL);
    *(_DWORD *)(v12 + 264) = v46;
    do
      v47 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v47 );
    *(_DWORD *)(v12 + 272) = v47;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v12);
    v4 = v62;
  }
  else
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0);
    if ( (int)result < 0 )
      return result;
    v12 = BugCheckParameter2;
  }
  CurrentThread = (AutoBoost *)KeGetCurrentThread();
  *(_OWORD *)(v12 + 248) = *(_OWORD *)((char *)CurrentThread + 1288);
  *(_DWORD *)(v12 + 240) = v57;
  *(_WORD *)(v12 + 244) = 8193;
  v13 = &a3[1].m256i_i8[8];
  v14 = AlpcpAvailableBufferSize(v12);
  if ( v15 > v14 )
  {
    v20 = AlpcpCaptureMessageData(v12, v15, v13, v4);
  }
  else
  {
    v16 = (void *)(v12 + 280);
    if ( v4 )
      RtlCopyFromUser(v16, v13, v15);
    else
      RtlCopyVolatileMemory(v16, v13, v15);
    v20 = 0;
  }
  v55 = v20;
  if ( v20 < 0 )
    goto LABEL_88;
  BugCheckParameter2 = *(_QWORD *)(a1 + 16);
  v23 = (LegacyAutoBoost *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0LL, v19);
  v24 = (signed __int64 *)(BugCheckParameter2 - 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 16), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v24, 0, v23, (struct _KTHREAD *)v24);
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v21);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  v25 = *(_QWORD *)(a1 + 424);
  v26 = v51[54];
  v56 = v26;
  if ( v25 && v26 )
  {
    v27 = (signed __int64 *)(v26 + 352);
    v28 = (AutoBoost *)KeAbPreAcquire(v26 + 352, 0LL, 0LL, v22);
    v52 = v28;
    v29 = 17LL;
    if ( _InterlockedCompareExchange64(v27, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v27, 0, v28, (struct _KTHREAD *)v27);
      v28 = v52;
      v29 = 17LL;
    }
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, (void *)0x11);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    if ( (*(_DWORD *)(v56 + 416) & 0x20) != 0 )
    {
      v20 = -1073741769;
      v48 = v29;
    }
    else
    {
      *(_QWORD *)(v12 + 120) = *(_QWORD *)(v56 + 56);
      if ( v29 != _InterlockedCompareExchange64(v27, 0LL, v29) )
        ExfReleasePushLockShared(v27);
      KeAbPostRelease((unsigned __int64)v27);
      v27 = (signed __int64 *)(v25 + 352);
      v31 = (AutoBoost *)KeAbPreAcquire(v25 + 352, 0LL, 0LL, v30);
      v52 = v31;
      v32 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 352), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)(v25 + 352), 0, v31, (struct _KTHREAD *)(v25 + 352));
        v31 = v52;
      }
      if ( v31 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v31, (void *)v32);
        else
          *((_BYTE *)v31 + 10) = 1;
      }
      if ( (*(_DWORD *)(v25 + 416) & 0x20) != 0 )
      {
        v20 = -1073741769;
      }
      else
      {
        *(_WORD *)(v12 - 30) += 3;
        v33 = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)CurrentThread + 183, v12);
        *(_QWORD *)(v12 + 32) = v33;
        AlpcpSetOwnerPortMessage(v12, v51);
        AlpcpSetMessageCommunicationInfo(v12, BugCheckParameter2);
        v36 = BugCheckParameter2;
        *(_QWORD *)(v12 + 192) = *(_QWORD *)BugCheckParameter2;
        v54[1] = v12;
        if ( LOBYTE(stru_140E66D40.CycleTime) )
        {
          AlpcpLogSendMessage(v12);
          if ( LOBYTE(stru_140E66D40.CycleTime) )
            AlpcpLogWaitForReply(v12);
        }
        v37 = 0LL;
        v51 = 0LL;
        if ( *(_QWORD *)(v25 + 232) != v25 + 232 )
        {
          v38 = (AutoBoost *)KeAbPreAcquire(v25 + 224, 0LL, 0LL, v35);
          v40 = v38;
          CurrentThread = v38;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 224), 0LL) )
          {
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 224), v38, v25 + 224);
            v40 = CurrentThread;
          }
          if ( v40 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v40, v39);
            else
              *((_BYTE *)v40 + 10) = 1;
          }
          v41 = *(AutoBoost **)(v25 + 232);
          CurrentThread = v41;
          if ( v41 != (AutoBoost *)(v25 + 232) )
          {
            v51 = (_QWORD *)((char *)v41 - 1480);
            AlpcpInsertMessagePendingQueue(v25, v12);
            ++*(_WORD *)(v12 - 30);
            *(_DWORD *)(v12 + 40) |= 0x2000u;
            v51[184] = v12;
            v42 = CurrentThread;
            v43 = *(AutoBoost **)CurrentThread;
            v44 = (AutoBoost **)*((_QWORD *)CurrentThread + 1);
            if ( *(AutoBoost **)(*(_QWORD *)CurrentThread + 8LL) != CurrentThread || *v44 != CurrentThread )
              __fastfail(3u);
            *v44 = v43;
            *((_QWORD *)v43 + 1) = v44;
            *(_QWORD *)v42 = 0LL;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 224));
          KeAbPostRelease(v25 + 224);
          v27 = (signed __int64 *)(v25 + 352);
          v37 = v51;
        }
        v45 = v54;
        v54[4] = 0LL;
        v45[3] = 0LL;
        v45[5] = 0LL;
        if ( v37 )
        {
          v45[3] = (__int64)v37;
        }
        else
        {
          AlpcpInsertMessageMainQueue(v25, v12);
          if ( (*(_DWORD *)(v25 + 416) & 0x200) != 0 )
          {
            PsReferenceSiloContext((void *)v25);
            v45[4] = v25;
            *((_BYTE *)v45 + 56) = 0;
          }
        }
        AlpcpUnlockMessage(v12, v36, v34, v35);
      }
      v48 = 17LL;
    }
    if ( v48 != _InterlockedCompareExchange64(v27, 0LL, v48) )
      ExfReleasePushLockShared(v27);
    KeAbPostRelease((unsigned __int64)v27);
  }
  else
  {
    v20 = -1073741769;
  }
  v49 = BugCheckParameter2;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v49 - 16));
  KeAbPostRelease(v49 - 16);
  if ( v20 < 0 )
  {
LABEL_88:
    if ( v12 )
      AlpcpUnlockMessage(v12, v17, v18, v19);
  }
  return (unsigned int)v20;
}
