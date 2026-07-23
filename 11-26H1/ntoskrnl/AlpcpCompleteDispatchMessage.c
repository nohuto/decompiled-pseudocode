/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x140990918
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1408EF2B0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     KeGetProcessPpmPolicy @ 0x140467410 (KeGetProcessPpmPolicy.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     AlpcpReleaseDirectAttribute @ 0x140602558 (AlpcpReleaseDirectAttribute.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     AlpcpLogWaitForReply @ 0x14077D0E0 (AlpcpLogWaitForReply.c)
 *     AlpcpInsertMessageDirectQueue @ 0x1407C3808 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     PsChargeProcessWakeCounter @ 0x14098F230 (PsChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409919C8 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeAttributesInSenderContext @ 0x140991C40 (AlpcpExposeAttributesInSenderContext.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpAllocateCompletionBuffer @ 0x140A50990 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpFreeBitmap @ 0x140A50D8C (AlpcpFreeBitmap.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140A53330 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertCompletionListEntry @ 0x140A71B70 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpInsertMessageMainQueue @ 0x140A83330 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpLogSendMessage @ 0x140B4A26C (AlpcpLogSendMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140B4A2DC (AlpcpLogReceiveMessage.c)
 */

void __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  int v1; // edx
  struct _KLOCK_ENTRIES *v2; // r9
  __int64 v3; // r13
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  int v6; // r12d
  int v7; // r15d
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // esi
  void *v13; // r15
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  signed __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  _QWORD **v18; // r13
  volatile signed __int64 *v19; // rsi
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // r15
  _QWORD *v23; // r12
  unsigned int v24; // edx
  int v25; // ecx
  _WORD *v26; // r13
  _QWORD *v27; // r13
  bool v28; // zf
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r9
  int v32; // r13d
  __int64 v33; // r15
  unsigned int v34; // esi
  bool v35; // cf
  unsigned int v36; // edx
  int v37; // r12d
  int v38; // ecx
  __int64 v39; // r8
  int v40; // esi
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int CompletionBuffer; // r12d
  char *v44; // rsi
  __int16 v45; // dx
  char *v46; // rdx
  int v47; // r8d
  char *v48; // rdx
  int inserted; // eax
  char v50; // r12
  __int16 v51; // r8
  unsigned int v52; // edx
  int v53; // ecx
  __int64 v54; // r9
  void *v55; // r15
  char v56; // [rsp+38h] [rbp-29h]
  int v57; // [rsp+3Ch] [rbp-25h]
  __int64 v58; // [rsp+40h] [rbp-21h]
  int v59; // [rsp+48h] [rbp-19h]
  unsigned int v60; // [rsp+4Ch] [rbp-15h]
  int v61; // [rsp+50h] [rbp-11h]
  int v62; // [rsp+54h] [rbp-Dh]
  int v63; // [rsp+58h] [rbp-9h]
  __int64 Buf2; // [rsp+60h] [rbp-1h] BYREF
  BOOL v65; // [rsp+68h] [rbp+7h]
  _WORD Src[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v67; // [rsp+74h] [rbp+13h]
  __int16 v68; // [rsp+76h] [rbp+15h]
  int v69; // [rsp+78h] [rbp+17h]
  int v70; // [rsp+7Ch] [rbp+1Bh]
  int v71; // [rsp+80h] [rbp+1Fh]
  int v72; // [rsp+84h] [rbp+23h]

  v1 = *(_DWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v1 & 4;
  v7 = v1 & 0x20000;
  v58 = v3;
  v59 = v6;
  v57 = v1 & 0x20000;
  v63 = v1 & 0x400000;
  v65 = (v1 & 0x400000) != 0;
  v9 = v1 & 0x800000;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v10 >> 21) & 1;
  if ( v7 || (v12 = 0, v9) )
    v12 = 1;
  if ( (*(_DWORD *)(v5 + 40) & 0x200) == 0 )
  {
    v13 = 0LL;
    if ( (*(_QWORD *)(v4 + 24) & 1) == 0 )
      v13 = *(void **)(v4 + 24);
    if ( v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
      {
        *(_QWORD *)(v5 + 208) = PsChargeProcessWakeCounter(v13);
        v2 = 0LL;
      }
      if ( KeHeteroSystem
        && v12
        && (!KeGetCurrentThread()->BamQosLevel
         || (unsigned int)KeGetProcessPpmPolicy((__int64)KeGetCurrentThread()->Process) == 3
         || KeGetCurrentThread()->PpmPolicy == 3) )
      {
        *(_QWORD *)(v5 + 216) = PsChargeProcessWakeCounter(v13);
        v2 = 0LL;
      }
    }
    v7 = v57;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(struct _KLOCK_ENTRIES **)(v5 + 176) != v2 )
    {
      AlpcpCaptureMessageDataSafe(v5);
      *(_QWORD *)(v5 + 176) = 0LL;
    }
    AlpcpExposeAttributesInSenderContext(v4, v5);
    ++*(_WORD *)(v5 - 30);
    AlpcpInsertMessageDirectQueue(v4, v5, v14, v15);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v5 + 160);
    *(_DWORD *)(v5 + 40) &= ~0x10000u;
    *(_QWORD *)(v5 + 160) = 0LL;
    AlpcpUnlockMessage(v5);
    v16 = (signed __int64 *)(v3 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((unsigned __int64)v16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 352));
    KeAbPostRelease(v4 + 352);
    ObfDereferenceObject((PVOID)v4);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v6 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      if ( v17 >= 4 )
      {
        KeSetEvent((PRKEVENT)(v17 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    return;
  }
  v18 = (_QWORD **)(v4 + 232);
  if ( *v18 != v18 )
  {
    v19 = (volatile signed __int64 *)(v4 + 224);
    v20 = (AutoBoost *)KeAbPreAcquire(v4 + 224, 0LL, 0LL, v2);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 224), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 224), v20, v4 + 224);
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, v21);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
    v23 = *v18;
    if ( *v18 != v18 )
    {
      if ( *(_QWORD *)(v5 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v5);
        *(_QWORD *)(v5 + 176) = 0LL;
      }
      AlpcpExposeAttributesInSenderContext(v4, v5);
      if ( (*(_DWORD *)(v5 + 40) & 0x200) == 0 )
        goto LABEL_51;
      v24 = (*(_QWORD *)(v5 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
      if ( !*(_QWORD *)(v5 + 144) )
        v24 = *(_QWORD *)(v5 + 136) != 0LL ? 0x80000000 : 0;
      v25 = v24 | 0x10000000;
      if ( !*(_QWORD *)(v5 + 152) )
        v25 = v24;
      if ( (v25 & *(_DWORD *)(v23 - 1)) != 0 )
      {
LABEL_51:
        *(_WORD *)(v5 + 244) |= 0x2000u;
        v26 = (_WORD *)(v5 - 30);
        ++*(_WORD *)(v5 - 30);
        AlpcpInsertMessagePendingQueue(v4, v5);
      }
      else
      {
        v26 = (_WORD *)(v5 - 30);
        *(_WORD *)(v5 + 244) &= ~0x2000u;
      }
      ++*v26;
      v27 = v23 - 185;
      *(_DWORD *)(v5 + 40) |= 0x2000u;
      v28 = LOBYTE(stru_140E66D40.CycleTime) == 0;
      *(v23 - 1) = v5;
      if ( !v28 )
        AlpcpLogSendMessage(v5);
      v29 = *v23;
      if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v30 = (_QWORD *)v23[1], (_QWORD *)*v30 != v23) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      *v23 = 0LL;
      *(_DWORD *)(v5 + 40) &= ~0x10000u;
      AlpcpUnlockMessage(v5);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
      KeAbPostRelease(v58 - 16);
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 224));
      KeAbPostRelease(v4 + 224);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v4 + 352));
      KeAbPostRelease(v4 + 352);
      ObfDereferenceObject((PVOID)v4);
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( v57 || v59 )
        *(_QWORD *)(a1 + 24) = v27;
      else
        KeReleaseSemaphoreEx((__int64)(v27 + 163), 1LL, 1LL, v31, v63 != 0 ? 2 : 0, 0LL);
      return;
    }
    if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 224));
    KeAbPostRelease(v4 + 224);
  }
  v32 = 0;
  if ( *(_QWORD *)(v4 + 32) )
  {
    v56 = 1;
    v62 = 0;
  }
  else
  {
    v56 = 0;
    v62 = (*(_DWORD *)(v4 + 416) >> 9) & 1;
  }
  v33 = *(_QWORD *)(v4 + 360);
  if ( !v33 )
    goto LABEL_116;
  v34 = *(_DWORD *)(v4 + 416);
  if ( (v34 & 0x10000) == 0 )
    goto LABEL_116;
  v35 = *(_QWORD *)(v5 + 136) != 0LL;
  Buf2 = 0LL;
  v36 = (v35 ? 0x80000000 : 0) | 0x40000000;
  if ( !*(_QWORD *)(v5 + 144) )
    v36 = v35 ? 0x80000000 : 0;
  v37 = v36 | 0x10000000;
  if ( !*(_QWORD *)(v5 + 152) )
    v37 = v36;
  if ( memcmp((const void *)(v5 + 168), &Buf2, 8uLL) )
    v37 |= 0x2000000u;
  v38 = *(_DWORD *)(v33 + 148);
  if ( (~v38 & v37) != 0 || (*(unsigned __int16 *)(v5 + 244) & 0xFFFF00FF) == 5 && (v38 & 0x20000000) == 0 )
    goto LABEL_116;
  v39 = *(unsigned __int16 *)(v5 + 242);
  v40 = (v34 >> 11) & 1;
  if ( v38 )
  {
    v41 = (4 * (v40 ^ 1u) + 3) & (v5 + 240 + *(unsigned __int16 *)(v5 + 242));
    if ( v41 )
      v32 = 4 * (v40 ^ 1) + 4 - v41;
    else
      v32 = 0;
    v39 = (unsigned int)(v32 + *(_DWORD *)(v33 + 152) + v39);
  }
  v61 = v40 << 31;
  v42 = v39 - 16;
  if ( !v40 )
    v42 = v39;
  LODWORD(Buf2) = v42;
  CompletionBuffer = AlpcpAllocateCompletionBuffer(v4, v42, v39, v5 + 240);
  if ( CompletionBuffer == -1 )
    goto LABEL_116;
  v44 = (char *)(*(_QWORD *)(v33 + 120) + CompletionBuffer);
  if ( v61 )
  {
    Src[0] = *(_WORD *)(v5 + 240);
    v68 = 0;
    v60 = Src[0] + 24;
    v45 = *(_WORD *)(v5 + 244) | 0x1000;
    Src[1] = Src[0] + 24;
    v69 = *(_DWORD *)(v5 + 248);
    v70 = *(_DWORD *)(v5 + 256);
    v71 = *(_DWORD *)(v5 + 264);
    v72 = *(_DWORD *)(v5 + 272);
    v67 = v45;
    if ( (*(_DWORD *)(v4 + 256) & 0x1000) != 0 )
      v67 = v45 & 0xC00F;
    RtlCopyVolatileMemory(v44, Src, 0x18uLL);
    v46 = v44 + 24;
  }
  else
  {
    RtlCopyVolatileMemory(v44, (const void *)(v5 + 240), 0x28uLL);
    if ( _bittest((const signed __int32 *)(v4 + 256), 0xCu) )
      *((_WORD *)v44 + 2) = *(_WORD *)(v5 + 244) & 0xC00F;
    v46 = v44 + 40;
    v60 = *(unsigned __int16 *)(v5 + 242);
  }
  AlpcpGetDataFromMessage(v5, v46, 0);
  v47 = *(_DWORD *)(v33 + 148);
  if ( v47 )
  {
    v48 = &v44[v60 + v32];
    *(_DWORD *)v48 = v47;
    *((_DWORD *)v48 + 1) = 0;
    AlpcpExposeAttributes(v4, v61, v5, *(_DWORD *)(v33 + 148), (__int64)v48, 0);
  }
  inserted = AlpcpInsertCompletionListEntry(v4, CompletionBuffer);
  if ( !inserted )
  {
    AlpcpFreeBitmap(
      *(_QWORD *)(*(_QWORD *)(v4 + 360) + 104LL),
      0LL,
      CompletionBuffer >> 6,
      (unsigned int)(Buf2 + 63) >> 6);
LABEL_116:
    if ( *(_QWORD *)(v5 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v5);
      *(_QWORD *)(v5 + 176) = 0LL;
    }
    AlpcpExposeAttributesInSenderContext(v4, v5);
    ++*(_WORD *)(v5 - 30);
    AlpcpInsertMessageMainQueue(v4, v5);
    v50 = 0;
    goto LABEL_119;
  }
  v50 = 1;
  *(_DWORD *)(*(_QWORD *)(v33 + 80) + 72LL) = *(_DWORD *)(v5 + 264);
  *(_DWORD *)(*(_QWORD *)(v33 + 80) + 76LL) = *(_DWORD *)(v5 + 272);
  if ( v56 && (inserted & 2) == 0 )
    v56 &= -(*(unsigned __int16 *)(*(_QWORD *)(v33 + 80) + 70LL)
           + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v4 + 48) + 12LL) < *(unsigned int *)(v33 + 144));
  if ( (*(_DWORD *)(v5 + 40) & 0x200) == 0 )
  {
    *(_WORD *)(v5 + 244) |= 0x2000u;
    goto LABEL_115;
  }
  v51 = *(_WORD *)(v5 + 244);
  v52 = (*(_QWORD *)(v5 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
  if ( !*(_QWORD *)(v5 + 144) )
    v52 = *(_QWORD *)(v5 + 136) != 0LL ? 0x80000000 : 0;
  v53 = v52 | 0x10000000;
  if ( !*(_QWORD *)(v5 + 152) )
    v53 = v52;
  if ( v53 )
  {
    *(_WORD *)(v5 + 244) = v51 | 0x2000;
LABEL_115:
    ++*(_WORD *)(v5 - 30);
    AlpcpInsertMessagePendingQueue(v4, v5);
    goto LABEL_119;
  }
  *(_WORD *)(v5 + 244) = v51 & 0xDFFF;
LABEL_119:
  if ( LOBYTE(stru_140E66D40.CycleTime) )
    AlpcpLogSendMessage(v5);
  if ( v50 && LOBYTE(stru_140E66D40.CycleTime) )
    AlpcpLogReceiveMessage(v5);
  if ( v57 && LOBYTE(stru_140E66D40.CycleTime) )
    AlpcpLogWaitForReply(v5);
  *(_DWORD *)(v5 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
  KeAbPostRelease(v58 - 16);
  if ( v62 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 352));
    KeAbPostRelease(v4 + 352);
    if ( v57 || v59 )
    {
      *(_BYTE *)(a1 + 56) = 0;
      return;
    }
    KeReleaseSemaphoreEx(*(_QWORD *)(v4 + 248), 1LL, 1LL, v54, v63 != 0 ? 2 : 0, 0LL);
  }
  else if ( v56 )
  {
    if ( v57 || v59 )
    {
      *(_BYTE *)(a1 + 56) = 1;
      *(_BYTE *)(a1 + 57) = v50;
      return;
    }
    AlpcpQueueIoCompletionPort(v4, v50, 1LL, 0, v65);
  }
  else
  {
    v55 = *(void **)(v4 + 368);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 352));
    KeAbPostRelease(v4 + 352);
    if ( v55 )
      ExNotifyCallback(v55, *(PVOID *)(v4 + 376), (PVOID)*(unsigned int *)(a1 + 48));
  }
  ObfDereferenceObject((PVOID)v4);
  *(_QWORD *)(a1 + 32) = 0LL;
}
