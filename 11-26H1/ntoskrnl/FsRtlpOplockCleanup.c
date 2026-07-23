/*
 * XREFs of FsRtlpOplockCleanup @ 0x1403F959C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B9E10 (FsRtlpOplockAckTimeoutWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PsBoostThreadIoEx @ 0x140248200 (PsBoostThreadIoEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     IoGetOplockFullFoExt @ 0x1403F9D84 (IoGetOplockFullFoExt.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403FB0D4 (FsRtlpModifyThreadPriorities.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpFillOutputBuffer @ 0x140ADA4D4 (FsRtlpFillOutputBuffer.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

int __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, char a3)
{
  int v3; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  __int64 OplockFullFoExt; // r13
  __int64 *v10; // rbx
  int v11; // r15d
  __int64 v12; // rbx
  char v13; // r13
  char v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  void *v17; // rcx
  _QWORD *v18; // rcx
  char v19; // si
  __int64 v20; // rcx
  int v21; // edx
  char *v22; // rsi
  char *i; // rbx
  void *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  unsigned int v36; // [rsp+44h] [rbp-194h] BYREF
  int v37; // [rsp+48h] [rbp-190h] BYREF
  __int64 v38; // [rsp+50h] [rbp-188h] BYREF
  int v39; // [rsp+58h] [rbp-180h] BYREF
  __int64 v40; // [rsp+60h] [rbp-178h] BYREF
  __int64 v41; // [rsp+68h] [rbp-170h] BYREF
  __int64 v42; // [rsp+70h] [rbp-168h] BYREF
  __int64 v43; // [rsp+78h] [rbp-160h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-158h] BYREF
  EVENT_DESCRIPTOR v45; // [rsp+90h] [rbp-148h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-128h] BYREF
  void *v48; // [rsp+C0h] [rbp-118h]
  int v49; // [rsp+C8h] [rbp-110h]
  int v50; // [rsp+CCh] [rbp-10Ch]
  __int64 *v51; // [rsp+D0h] [rbp-108h]
  __int64 v52; // [rsp+D8h] [rbp-100h]
  int *v53; // [rsp+E0h] [rbp-F8h]
  __int64 v54; // [rsp+E8h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+F0h] [rbp-E8h] BYREF
  __int16 *v56; // [rsp+100h] [rbp-D8h]
  int v57; // [rsp+108h] [rbp-D0h]
  int v58; // [rsp+10Ch] [rbp-CCh]
  __int64 *v59; // [rsp+110h] [rbp-C8h]
  __int64 v60; // [rsp+118h] [rbp-C0h]
  int *v61; // [rsp+120h] [rbp-B8h]
  __int64 v62; // [rsp+128h] [rbp-B0h]
  __int64 *v63; // [rsp+130h] [rbp-A8h]
  __int64 v64; // [rsp+138h] [rbp-A0h]
  _QWORD *v65; // [rsp+140h] [rbp-98h]
  __int64 v66; // [rsp+148h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+150h] [rbp-88h] BYREF
  __int64 *v68; // [rsp+170h] [rbp-68h]
  __int64 v69; // [rsp+178h] [rbp-60h]
  __int64 *v70; // [rsp+180h] [rbp-58h]
  __int64 v71; // [rsp+188h] [rbp-50h]
  unsigned int *v72; // [rsp+190h] [rbp-48h]
  __int64 v73; // [rsp+198h] [rbp-40h]

  v38 = a2;
  v44[1] = a1;
  LOBYTE(v3) = 0;
  v37 = v3;
  LODWORD(v6) = *(_DWORD *)(a1 + 144);
  if ( (_DWORD)v6 == 1 )
    goto LABEL_79;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v40 = a1;
    v51 = &v40;
    v52 = 8LL;
    v39 = v6;
    v53 = &v39;
    v54 = 4LL;
    *(_DWORD *)&v45.Id = 184549376;
    *(_DWORD *)&v45.Level = 261;
    v45.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E06B38;
    UserData.Size = *(unsigned __int16 *)off_140E06B38;
    UserData.Reserved = 2;
    v48 = &unk_140046CD8;
    v49 = 55;
    v50 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E06B50, &v45, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    a2 = v38;
  }
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48));
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    v22 = (char *)(a1 + 104);
    for ( i = *(char **)(a1 + 104); ; i = *(char **)i )
    {
      if ( i == v22 )
        goto LABEL_58;
      if ( *(_QWORD *)(v7 + 48) == *((_QWORD *)i + 2) )
        break;
    }
    if ( (unsigned int)dword_140E06B30 > 5 )
    {
      v41 = *((_QWORD *)i + 2);
      v68 = &v41;
      v69 = 8LL;
      v42 = a1;
      v70 = &v42;
      v71 = 8LL;
      v36 = *(_DWORD *)(a1 + 144);
      v72 = &v36;
      v73 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06B30,
        (unsigned __int8 *)&byte_140046C57,
        0LL,
        0LL,
        5u,
        &v67);
    }
    while ( 1 )
    {
      v24 = *(void **)(a1 + 88);
      if ( v24 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v24);
    }
    v25 = (_QWORD *)**((_QWORD **)i + 1);
    v26 = *v25;
    v27 = (_QWORD *)v25[1];
    if ( *(_QWORD **)(*v25 + 8LL) != v25 || (_QWORD *)*v27 != v25 )
      goto LABEL_71;
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    FsRtlpOplockPerfSendData(i + 24);
    v28 = i + 40;
    if ( a3 )
      *v28 = 0LL;
    else
      FsRtlpSyncWithAckTimeout(v28);
    ObfDereferenceObjectWithTag(*((PVOID *)i + 2), 0x746C6644u);
    ExFreePoolWithTag(i, 0);
    v7 = v38;
    v8 = 1;
LABEL_58:
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    v3 = 0;
    if ( *(char **)v22 != v22 )
      v3 = v8;
    v37 = v3;
  }
  v10 = *(__int64 **)(a1 + 40);
  v11 = 534;
  if ( v10 != (__int64 *)(a1 + 40) )
  {
    v14 = 0;
    while ( v10 != (__int64 *)(a1 + 40) )
    {
      v20 = v10[2];
      if ( *(_QWORD *)(v7 + 48) == *(_QWORD *)(v20 + 48) )
      {
        v10 = (__int64 *)v10[1];
        if ( *(_DWORD *)(v20 + 24) == 590400 )
          v14 = v8;
        v21 = 534;
        if ( *(_DWORD *)(v20 + 24) != 590400 )
          v21 = 0;
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v10, v21, 0, a1);
        if ( v14 )
          break;
        v7 = v38;
        LOBYTE(v8) = 1;
      }
      v10 = (__int64 *)*v10;
    }
    FsRtlpComputeShareableOplockState(a1);
    LOBYTE(v3) = v37;
  }
  if ( OplockFullFoExt )
  {
    v12 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v12 )
    {
      v19 = 0;
      if ( (*(_DWORD *)(v12 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD **)(OplockFullFoExt + 40));
        FsRtlpModifyThreadPriorities(a1, v12, 0LL);
        FsRtlpClearOwner(a1, v12);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v12 + 24), 0x746C6644u);
        FsRtlpOplockPerfSendData(v12 + 72);
        v33 = (_QWORD *)(v12 + 88);
        v13 = a3;
        if ( a3 )
          *v33 = 0LL;
        else
          FsRtlpSyncWithAckTimeout(v33);
        ExFreePoolWithTag((PVOID)v12, 0);
        goto LABEL_78;
      }
      if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v12 + 56) )
      {
        v13 = a3;
        FsRtlpRemoveAndCompleteRHIrp((_QWORD *)v12, a1, 534, 0, 0, 0, 0, a3);
        goto LABEL_36;
      }
      FsRtlpOplockDequeueRH(*(_QWORD **)(OplockFullFoExt + 40));
      v31 = *v29;
      v32 = (_QWORD *)v29[1];
      if ( *(_QWORD **)(*v29 + 8LL) == v29 && (_QWORD *)*v32 == v29 )
      {
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v12 + 40) != v30 )
          FsRtlpClearOwner(a1, v12);
        FsRtlpFreeRHOpContext((PVOID)v12);
        v13 = a3;
LABEL_78:
        v19 = 1;
LABEL_36:
        FsRtlpComputeShareableOplockState(a1);
        if ( v19 )
          FsRtlpReleaseIrpsWaitingForRH(a1);
        goto LABEL_9;
      }
LABEL_71:
      __fastfail(3u);
    }
  }
  v13 = a3;
LABEL_9:
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v38 + 48) == v6 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v15 = *(_QWORD *)a1;
      v16 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v15 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v15 + 69));
      if ( *(_DWORD *)(v16 + 24) == 590400 )
      {
        FsRtlpFillOutputBuffer(v15, (*(_DWORD *)(a1 + 144) >> 12) & 7, 0, 0, 0, 0);
      }
      else
      {
        *(_QWORD *)(v15 + 56) = 8LL;
        v11 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v11;
      IofCompleteRequest(*(PIRP *)a1, 1);
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
      {
        LOBYTE(v7) = 1;
        PsBoostThreadIoEx(*(LegacyAutoBoost **)(a1 + 24), v7, 1, (struct _SINGLE_LIST_ENTRY *)a1);
        *(_DWORD *)(a1 + 144) &= ~0x20u;
      }
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
    while ( 1 )
    {
      v17 = *(void **)(a1 + 88);
      if ( v17 == (void *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v17);
    }
    v18 = (_QWORD *)(a1 + 176);
    if ( v13 )
      *v18 = 0LL;
    else
      FsRtlpSyncWithAckTimeout(v18);
    LODWORD(v6) = FsRtlpOplockPerfSendData(a1 + 160);
  }
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v38 = a1;
    v59 = &v38;
    v60 = 8LL;
    v37 = *(_DWORD *)(a1 + 144);
    v61 = &v37;
    v62 = 4LL;
    v43 = *(_QWORD *)(a1 + 88);
    v63 = &v43;
    v64 = 8LL;
    v44[0] = *(_QWORD *)(a1 + 96);
    v65 = v44;
    v66 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 517;
    EventDescriptor.Keyword = 0LL;
    v55.Ptr = (ULONGLONG)off_140E06B38;
    v55.Size = *(unsigned __int16 *)off_140E06B38;
    v55.Reserved = 2;
    v56 = word_140046BEA;
    v57 = 108;
    v58 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EtwWriteEx(qword_140E06B50, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &v55);
  }
LABEL_79:
  if ( (_BYTE)v3 )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 144) | 0x1000000;
    *(_DWORD *)(a1 + 144) = v6;
  }
  return v6;
}
