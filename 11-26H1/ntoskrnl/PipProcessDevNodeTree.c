/*
 * XREFs of PipProcessDevNodeTree @ 0x1409AE99C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1405DFC7C (PnpProcessRebalance.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A7BF4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessStartSystemDevices @ 0x1407A7D5C (PiProcessStartSystemDevices.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140AC8764 (PiProcessReenumeration.c)
 *     PiRestartDevice @ 0x140B3D230 (PiRestartDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueIsEmpty @ 0x1404B19E4 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PiCollapseEnumRequests @ 0x1404D8E4C (PiCollapseEnumRequests.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404E929C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PipProcessRestartPhase1 @ 0x1407B7D88 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1407B7E54 (PipProcessRestartPhase2.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409AE908 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 *     PpDevCfgTraceDeviceStart @ 0x1409AF290 (PpDevCfgTraceDeviceStart.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409AF320 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PnpPoFxActivateDevice @ 0x1409B02B0 (PnpPoFxActivateDevice.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1409B0330 (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessStartPhase1 @ 0x1409B29C0 (PipProcessStartPhase1.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1409D92F8 (PiProcessNewDeviceNodeAsync.c)
 *     PipProcessStartPhase2 @ 0x140B0C368 (PipProcessStartPhase2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  int v7; // r15d
  char v8; // r12
  int v9; // esi
  int v10; // edi
  char *v11; // r13
  PVOID *v12; // r14
  bool v13; // al
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int started; // edi
  char v23; // r14
  char v24; // r12
  char v25; // r14
  int v26; // esi
  __int64 v27; // rax
  __int64 v29; // rax
  void *CompletedRequest; // rax
  int v31; // eax
  int v32; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v34; // rbx
  int v35; // esi
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  __int64 v38; // rax
  void *v39; // rax
  int v40; // eax
  int restarted; // eax
  char v42; // r15
  void *v43; // rax
  int v44; // eax
  int v45; // eax
  char v46; // [rsp+48h] [rbp-41h]
  char v47; // [rsp+49h] [rbp-40h] BYREF
  char v48; // [rsp+4Ah] [rbp-3Fh] BYREF
  char v49; // [rsp+4Bh] [rbp-3Eh]
  char v50; // [rsp+4Ch] [rbp-3Dh]
  int v51; // [rsp+50h] [rbp-39h]
  unsigned int v52; // [rsp+54h] [rbp-35h]
  __int64 v53; // [rsp+58h] [rbp-31h]
  PVOID *v54; // [rsp+60h] [rbp-29h]
  unsigned int v55; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  char *v57; // [rsp+D8h] [rbp+4Fh]
  int v58; // [rsp+E0h] [rbp+57h]

  v58 = a2;
  v57 = (char *)a1;
  v8 = a7;
  v48 = 0;
  v9 = a4;
  v54 = (PVOID *)a1;
  v10 = a2;
  v11 = (char *)a1;
  v12 = (PVOID *)a1;
  DestinationString = 0LL;
  if ( a2 && !*(_BYTE *)(a2 + 28) && a4 != 1 && !a7 )
  {
    v13 = PiCollapseEnumRequests(a2);
    a1 = (__int64)IopRootDeviceNode;
    if ( v13 )
      v11 = (char *)IopRootDeviceNode;
    v57 = v11;
  }
  LOBYTE(a1) = 0;
  v55 = 0;
  LOBYTE(v7) = 0;
  v49 = 0;
  v14 = 1;
  v46 = 1;
  v52 = a1;
  v51 = v7;
LABEL_9:
  if ( !v8 )
  {
    LOBYTE(v53) = byte_140EF412B & 0x10;
    if ( (byte_140EF412B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
        1LL,
        *((const wchar_t **)v11 + 6));
    v47 = 0;
    v49 = PnpProcessAssignResources((__int64)v11, a5, (__int64)&v47);
    LOBYTE(v53) = byte_140EF412B & 0x10;
    if ( (byte_140EF412B & 0x10) != 0 )
    {
      LOBYTE(v15) = byte_140EF412B & 0x10;
      McTemplateK0z_EtwWriteTransfer(
        v15,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
        v16,
        *((const wchar_t **)v11 + 6));
    }
    if ( v47 )
    {
      v45 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, v9, 0, 0, 1);
      LODWORD(a1) = (unsigned __int8)v52;
      if ( v45 == -1073741106 )
        LODWORD(a1) = 1;
      v52 = a1;
    }
    else
    {
      LOBYTE(a1) = v52;
    }
    v14 = v46;
  }
  v17 = (__int64)v11;
  v47 = 0;
  v53 = (__int64)v11;
  v50 = 1;
  while ( 1 )
  {
    v18 = 1;
    if ( (_BYTE)a1 )
      goto LABEL_80;
    if ( v14 )
    {
      v19 = *(_DWORD *)(v17 + 704);
      if ( (v19 & 0x10000) != 0 )
        *(_DWORD *)(v17 + 704) = v19 & 0xFFFEFFFF;
    }
    v20 = *(_DWORD *)(v17 + 300);
    if ( v20 != 769
      && v20 != 770
      && (*(_DWORD *)(v17 + 396) & 0x6000) == 0
      && (unsigned __int8)PnpCheckForActiveDependencies(v17, 2LL, 1LL) )
    {
      PipSetDevNodeProblem(v17, 51, 0);
    }
    v21 = *(unsigned int *)(v17 + 396);
    if ( (v21 & 0x6000) != 0 )
      goto LABEL_44;
    if ( *(_DWORD *)(v17 + 300) != 769 )
    {
      if ( *(_DWORD *)(v17 + 300) != 772 )
      {
        switch ( *(_DWORD *)(v17 + 300) )
        {
          case 0x306:
            if ( v8 )
              goto LABEL_37;
            PnpPoFxActivateDevice(v17, 512LL);
            started = PipProcessStartPhase1(v17);
            if ( started == 259 )
            {
LABEL_109:
              v7 = 1;
              v51 = 1;
              goto LABEL_37;
            }
            v18 = 0;
            goto LABEL_77;
          case 0x308:
            restarted = PipProcessStartPhase2(v17, v21, 1LL);
            break;
          case 0x309:
            if ( (int)v21 < 0 )
            {
              v18 = 1;
              goto LABEL_37;
            }
            restarted = PipProcessStartPhase3(v17, a4 != 1, 1LL);
            break;
          case 0x30A:
            if ( a4 == 1 && (char *)v17 != v11 )
              goto LABEL_37;
            v18 = 2;
            if ( v8 || (v21 & 8) == 0 )
              goto LABEL_37;
            v35 = PipEnumerateDevice(v17, a6, (unsigned __int8)v7);
            started = v35;
            if ( v35 == 259 )
            {
              LOBYTE(v7) = 1;
              v18 = 1;
              v51 = v7;
              goto LABEL_37;
            }
            v18 = (v35 >> 31) & 2;
LABEL_77:
            if ( started == -1073741106 )
              goto LABEL_78;
            goto LABEL_37;
          case 0x30C:
            v7 = (unsigned __int8)v7;
            started = PipProcessRestartPhase1(v17, a6, (unsigned __int8)v7);
            if ( started == 259 )
              v7 = 1;
            v51 = v7;
            v18 = started == 259;
            goto LABEL_77;
          case 0x30D:
            restarted = PipProcessRestartPhase2(v17, v21, 1LL);
            break;
          case 0x30F:
            if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v17 + 32));
              *(_DWORD *)(v17 + 704) &= ~0x200u;
            }
            started = PipEnumerateCompleted(v17);
            v18 = 2;
            goto LABEL_77;
          default:
            goto LABEL_37;
        }
        started = restarted;
        if ( restarted < 0 )
          started = -1073741106;
        v18 = (unsigned int)restarted >> 31;
        goto LABEL_77;
      }
      if ( v8 || (*(_DWORD *)(v17 + 704) & 0x10000) != 0 )
        goto LABEL_37;
      started = PipCallDriverAddDevice(v17, a3);
      if ( started >= 0 )
      {
        PoFxPrepareDevice(v17, 0, v36, v37);
        v18 = 0;
        v49 = 1;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(v17 + 300) == 772 )
        *(_DWORD *)(v17 + 704) |= 0x10000u;
      goto LABEL_77;
    }
    if ( (a4 != 3 || (v21 & 0x2000000) == 0) && !v8 )
    {
      if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 1LL, 1LL) )
      {
        PipSetDevNodeProblem(v17, 51, 0);
      }
      else
      {
        v40 = PiProcessNewDeviceNodeAsync(v17, a6);
        started = v40;
        if ( v40 == 259 )
          goto LABEL_109;
        if ( v40 < 0 )
          goto LABEL_77;
        v18 = 0;
      }
    }
LABEL_37:
    v48 = 0;
    started = 0;
    v23 = 0;
    if ( !PnpDeviceCompletionQueueIsEmpty() )
    {
      do
      {
        if ( !Semaphore.Header.SignalState )
          break;
        CompletedRequest = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
        v31 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
        v48 = 1;
        v23 = 1;
        if ( v31 == -1073741106 )
          started = -1073741106;
      }
      while ( !PnpDeviceCompletionQueueIsEmpty() );
      v11 = v57;
      v8 = a7;
    }
    if ( started == -1073741106 )
    {
      v12 = v54;
    }
    else
    {
      if ( v23 || !v47 )
      {
        v12 = v54;
LABEL_44:
        if ( !v8 && (*(_DWORD *)(v17 + 704) & 1) != 0 )
          PpDevCfgTraceDeviceStart(v17, 0LL);
        goto LABEL_47;
      }
      v48 = 0;
      started = 0;
      v24 = 0;
      v25 = 0;
      if ( !PnpDeviceCompletionQueueIsEmpty() )
      {
        v42 = 0;
        do
        {
          if ( !Semaphore.Header.SignalState )
          {
            v25 = v42;
            if ( v24 )
              break;
          }
          v43 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
          v44 = PnpDeviceCompletionProcessCompletedRequest(v43);
          v48 = 1;
          v24 = 1;
          v42 = 1;
          if ( v44 == -1073741106 )
            started = -1073741106;
          v25 = 1;
        }
        while ( !PnpDeviceCompletionQueueIsEmpty() );
        v17 = v53;
        v11 = v57;
      }
      v8 = a7;
      v47 = 0;
      LOBYTE(v7) = v25 != 0 ? v51 : 0;
      v12 = v54;
      v51 = v7;
      if ( started != -1073741106 )
        goto LABEL_44;
    }
LABEL_78:
    if ( !v8 )
      break;
    v55 = started;
LABEL_47:
    if ( !(_BYTE)v7 || !v18 || PnpAsyncOptions < 0 )
    {
      v26 = v18 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v27 = *(_QWORD *)(v17 + 8);
          if ( !v27 )
            goto LABEL_61;
LABEL_51:
          v17 = v27;
          v53 = v27;
        }
        goto LABEL_52;
      }
    }
    while ( 1 )
    {
LABEL_61:
      if ( (char *)v17 == v11 )
      {
        if ( (PnpAsyncOptions & 4) != 0 && (*(_DWORD *)(v17 + 396) & 0x6000) != 0 )
        {
          if ( (_BYTE)v7 )
          {
            PnpDeviceCompletionProcessCompletedRequests(1, 1, &v48);
            LOBYTE(v7) = 0;
            v51 = v7;
          }
        }
        else if ( (_BYTE)v7 )
        {
LABEL_99:
          v14 = 0;
          v47 = 1;
          v46 = 0;
          goto LABEL_53;
        }
        v50 = 0;
        goto LABEL_99;
      }
      v27 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
        goto LABEL_51;
      if ( (_BYTE)v7 && PnpAsyncOptions > 0 )
        break;
      v29 = *(_QWORD *)(v17 + 16);
      if ( v29 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        v53 = v29;
      }
    }
    v38 = *(_QWORD *)(v17 + 16);
    if ( v38 )
    {
      v17 = *(_QWORD *)(v38 + 8);
      v53 = v17;
    }
    v47 = 1;
LABEL_52:
    v14 = v46;
LABEL_53:
    v9 = a4;
LABEL_54:
    v10 = v58;
    a1 = v52;
    if ( !v50 )
    {
      v14 = v46;
      if ( !v49 )
      {
        if ( !v8 )
          ObfDereferenceObject(v12[4]);
        return v55;
      }
      goto LABEL_9;
    }
  }
  v10 = v58;
LABEL_80:
  LOBYTE(v52) = 0;
  v48 = 0;
  if ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    v48 = 1;
    do
    {
      v39 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
      PnpDeviceCompletionProcessCompletedRequest(v39);
    }
    while ( !PnpDeviceCompletionQueueIsEmpty() );
  }
  LOBYTE(v7) = 0;
  v9 = a4;
  v51 = v7;
  PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, a4, a5, a6, 1);
  v32 = IopAllocateUnicodeString(&DestinationString);
  if ( v32 < 0 )
  {
    ObfDereferenceObject(v12[4]);
    return (unsigned int)v32;
  }
  else
  {
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 40));
    ObfDereferenceObject(v12[4]);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    ExReleaseResourceLite(&PiEngineLock);
    KeLeaveCriticalRegion();
    PnpSynchronizeDeviceEventQueue();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    v34 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
    if ( DestinationString.Buffer )
    {
      ExFreePool(DestinationString.Buffer);
      DestinationString = 0LL;
    }
    if ( v34 )
    {
      v11 = *(char **)(v34[39] + 40LL);
      v14 = v46;
      v17 = (__int64)v11;
      v53 = (__int64)v11;
      v12 = (PVOID *)v11;
      v57 = v11;
      v54 = (PVOID *)v11;
      goto LABEL_54;
    }
    return 3221225473LL;
  }
}
