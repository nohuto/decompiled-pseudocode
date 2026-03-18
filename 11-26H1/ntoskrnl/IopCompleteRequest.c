/*
 * XREFs of IopCompleteRequest @ 0x14045B5C0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     IopAbortRequest @ 0x1407940C0 (IopAbortRequest.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueEx @ 0x1402668A0 (KeInsertQueueEx.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1404111D0 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x140411290 (IopUpdateIrpTransferCount.c)
 *     IopIoRingCompleteIrp @ 0x1404113E8 (IopIoRingCompleteIrp.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14046A690 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14047D0F8 (IopDecrementCompletionContextUsageCount.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  unsigned int v6; // r14d
  void *v7; // r12
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v10; // rsi
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdx
  struct _MDL *v14; // rcx
  struct _MDL *Next; // rbx
  __int64 v16; // rax
  void *v17; // rcx
  _DWORD *v18; // rbx
  unsigned int v19; // eax
  unsigned int *v20; // rcx
  _QWORD *v21; // rcx
  struct _KEVENT *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  char v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  char v32; // r8
  int v33; // ecx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+50h] [rbp-58h]
  volatile signed __int64 *v38; // [rsp+68h] [rbp-40h]
  char v39; // [rsp+C0h] [rbp+18h]

  v6 = 0;
  v7 = 0LL;
  v37 = 0LL;
  v8 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v10 = *a4;
  if ( !a3 || (v39 = 1, *a3 != 1LL) )
    v39 = 0;
  v11 = *(_DWORD *)(v8 + 16);
  if ( (v11 & 0x200000) != 0 )
  {
    *(_QWORD *)(v8 + 152) = CurrentThread;
    if ( v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 72LL);
      if ( v12 == 8 || v12 == 20 )
        v6 = 1;
    }
    IopIoRingCompleteIrp((PIRP)v8, v10, v6);
    return;
  }
  if ( (v11 & 0x80u) != 0 )
  {
    *(_DWORD *)(v10 + 56) = *(_DWORD *)(v8 + 48);
    if ( a5 )
    {
      *(_QWORD *)(v8 + 160) = *a5;
      *a5 = 0LL;
    }
    else
    {
      *(_QWORD *)(v8 + 160) = 0LL;
    }
    KeSetEvent((PRKEVENT)(v10 + 152), 0, 0);
    return;
  }
  if ( (v11 & 0x2000) != 0 )
    v38 = (volatile signed __int64 *)(*(_QWORD *)(v8 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
  else
    v38 = 0LL;
  IopProcessBufferedIoCompletion(v8);
  v14 = *(struct _MDL **)(v8 + 8);
  if ( v14 )
  {
    do
    {
      Next = v14->Next;
      IoFreeMdl(v14);
      v14 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v8 + 8) = 0LL;
  if ( ((*(_DWORD *)(v8 + 48) & 0xC0000000) != 0xC0000000
     || *(_BYTE *)(v8 + 65) && (*(_DWORD *)(v8 + 16) & 4) == 0 && v10 && (*(_DWORD *)(v10 + 80) & 2) == 0)
    && v10
    && *(_QWORD *)(v10 + 176) )
  {
    if ( (*(_DWORD *)(v8 + 16) & 0x2000) != 0 )
    {
      v16 = *(_QWORD *)(v10 + 176);
      v7 = *(void **)v16;
      v37 = *(_QWORD *)(v16 + 8);
    }
    else
    {
      IopIncrementCompletionContextUsageCountAndReadData(v10);
      v7 = 0LL;
    }
    if ( v7 )
      ObfReferenceObjectWithTag(v7, 0x746C6644u);
  }
  if ( (*(_DWORD *)(v8 + 48) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v8 + 65) )
  {
    v17 = *(void **)(v8 + 80);
    if ( v17 && v10 && (*(_DWORD *)(v8 + 16) & 4) == 0 )
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    goto LABEL_61;
  }
  v18 = *(_DWORD **)(v8 + 72);
  if ( (*(_BYTE *)(v8 + 71) & 0x10) != 0 )
  {
    v19 = *(_DWORD *)(v8 + 56);
    v20 = v18 + 1;
    if ( (unsigned __int64)v18 >= 0xFFFF800000000000uLL )
      *v20 = v19;
    else
      RtlWriteULongToUser(v20, v19);
    if ( (unsigned __int64)v18 < 0xFFFF800000000000uLL )
    {
LABEL_43:
      RtlWriteULongToUser(v18, *(unsigned int *)(v8 + 48));
      goto LABEL_50;
    }
    *v18 = *(_DWORD *)(v8 + 48);
  }
  else
  {
    v21 = v18 + 2;
    if ( (unsigned __int64)v18 >= 0xFFFF800000000000uLL )
      *v21 = *(_QWORD *)(v8 + 56);
    else
      RtlWriteULong64ToUser(v21, *(_QWORD *)(v8 + 56));
    if ( (unsigned __int64)v18 < 0xFFFF800000000000uLL )
      goto LABEL_43;
    *v18 = *(_DWORD *)(v8 + 48);
  }
LABEL_50:
  v22 = *(struct _KEVENT **)(v8 + 80);
  if ( v22 )
  {
    KeSetEvent(v22, 0, 0);
    if ( !v10 )
      goto LABEL_61;
    if ( (*(_DWORD *)(v8 + 16) & 4) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v8 + 80), 0x746C6644u);
    if ( (*(_DWORD *)(v10 + 80) & 2) == 0 || (*(_DWORD *)(v8 + 16) & 0x1000) != 0 )
      goto LABEL_61;
    goto LABEL_59;
  }
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 80) & 0x4000000) != 0 )
    {
LABEL_60:
      *(_DWORD *)(v10 + 56) = *(_DWORD *)(v8 + 48);
      goto LABEL_61;
    }
LABEL_59:
    KeSetEvent((PRKEVENT)(v10 + 152), 0, 0);
    goto LABEL_60;
  }
LABEL_61:
  if ( (*(_DWORD *)(v8 + 48) & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(v8 + 65) || (*(_DWORD *)(v8 + 16) & 4) != 0 || v10 && (*(_DWORD *)(v10 + 80) & 2) != 0) )
  {
    if ( (*(_DWORD *)(v8 + 16) & 0x2000) != 0 )
      IopDequeueIrpFromFileObject(v8, v10);
    if ( v10 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v10, 0x746C6644u);
    if ( (*(_DWORD *)(v8 + 16) & 0x8000) != 0 )
    {
      v23 = *(_QWORD *)(v8 + 88);
      do
      {
        v24 = v23;
        v25 = ((v23 >> 1) & 3) - 1;
        v23 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v8 + 88),
                v23 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v25),
                v23);
      }
      while ( v24 != v23 );
      if ( !(_DWORD)v25 )
        IoFreeIrp((PIRP)v8);
    }
    else
    {
      *(_QWORD *)(v8 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v8, v13);
      IoFreeIrp((PIRP)v8);
    }
  }
  else
  {
    IopUpdateIrpTransferCount(v8, v38);
    if ( (*(_DWORD *)(v8 + 16) & 0x2000) != 0 )
    {
      IopDequeueIrpFromFileObject(v8, v10);
    }
    else
    {
      *(_QWORD *)(v8 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v8, v26);
    }
    v28 = *(_DWORD *)(v8 + 16) & 0x8000;
    if ( v28 || (*(_QWORD *)(v8 + 88) &= ~1uLL, (v29 = *(_QWORD *)(v8 + 88)) == 0) )
    {
      if ( v7
        && *(_QWORD *)(v8 + 96)
        && ((*(_DWORD *)(v10 + 80) & 0x2000000) == 0
         || *(_BYTE *)(v8 + 65)
         || (*(_DWORD *)(v8 + 48) & 0xC0000000) == 0x80000000) )
      {
        *(_QWORD *)a1 = v37;
        *(_DWORD *)(v8 + 184) = 0;
        v33 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 72LL);
        if ( v33 == 8 || v33 == 20 )
          v6 = 1;
        KeInsertQueueEx((__int64)v7, (_QWORD *)(v8 + 168), v6, v27);
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 16) & 0x8000) == 0 )
          goto LABEL_100;
        v34 = *(_QWORD *)(v8 + 88);
        do
        {
          v35 = v34;
          v36 = ((v34 >> 1) & 3) - 1;
          v34 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v8 + 88),
                  v34 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v36),
                  v34);
        }
        while ( v35 != v34 );
        if ( !(_DWORD)v36 )
LABEL_100:
          IoFreeIrp((PIRP)v8);
      }
    }
    else
    {
      if ( v39 )
        v30 = *(char *)(v8 + 70);
      else
        v30 = 2;
      v31 = *(_QWORD *)(v8 + 96);
      v32 = *(_BYTE *)(v8 + 64);
      *(_BYTE *)a1 = 18;
      *(_BYTE *)(a1 + 2) = 88;
      if ( v30 == 2 )
        LOBYTE(v30) = CurrentThread->ApcStateIndex;
      *(_BYTE *)(a1 + 80) = v30;
      *(_QWORD *)(a1 + 8) = CurrentThread;
      *(_QWORD *)(a1 + 32) = IopUserRundown;
      *(_QWORD *)(a1 + 40) = IopUserRundown;
      *(_QWORD *)(a1 + 48) = v29;
      *(_BYTE *)(a1 + 81) = v32;
      *(_QWORD *)(a1 + 56) = v31;
      *(_BYTE *)(a1 + 82) = 0;
      *(_BYTE *)(a1 + 1) = 0;
      KeInsertQueueApc(a1, *(_QWORD *)(v8 + 72), 0LL, 2);
    }
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    if ( v10 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v10, 0x746C6644u);
  }
}
