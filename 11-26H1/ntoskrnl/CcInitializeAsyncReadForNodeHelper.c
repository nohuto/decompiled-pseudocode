/*
 * XREFs of CcInitializeAsyncReadForNodeHelper @ 0x1404C8460
 * Callers:
 *     <none>
 * Callees:
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcInitializeAsyncReadForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // r9d
  char v6; // di
  __int64 PoolWithTagFromNode; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int OtherOperationCount_high; // edx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // r9d
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned int i; // r14d
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r12
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned int j; // r14d
  unsigned int v47; // r9d
  __int64 v48; // rax
  void *StartContext; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+50h] BYREF
  char *v52; // [rsp+C8h] [rbp+58h]

  v52 = a4;
  v4 = *(_DWORD *)(a3 + 24);
  v6 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(
                          a1,
                          16LL * (unsigned int)(HIDWORD(EmpParseLock.OtherOperationCount) + 1),
                          0x71576343u,
                          v4 | 0x80000000);
  *(_QWORD *)(a3 + 232) = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    v44 = 0LL;
    v45 = (unsigned int)(HIDWORD(EmpParseLock.OtherOperationCount) + 1);
    do
    {
      v10 = (_QWORD *)(v44 + *(_QWORD *)(a3 + 232));
      v44 += 16LL;
      v10[1] = v10;
      *v10 = v10;
      --v45;
    }
    while ( v45 );
  }
  v11 = ExAllocatePoolWithTagFromNode(
          (__int64)v10,
          16LL * (unsigned int)(HIDWORD(EmpParseLock.OtherOperationCount) + 1),
          0x71576343u,
          *(_DWORD *)(a3 + 24) | 0x80000000);
  OtherOperationCount_high = HIDWORD(EmpParseLock.OtherOperationCount);
  v13 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 256) = v11;
  v15 = ExAllocatePoolWithTagFromNode(v14, 16LL * (unsigned int)(OtherOperationCount_high + 1), 0x71576343u, v13);
  v16 = HIDWORD(EmpParseLock.OtherOperationCount);
  v17 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 264) = v15;
  v18 = ExAllocatePoolWithTagFromNode((unsigned int)(v16 + 1), 404LL * (unsigned int)(v16 + 1), 0x71576343u, v17);
  v19 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 280) = v18;
  v21 = ExAllocatePoolWithTagFromNode(
          v20,
          24LL * (unsigned int)(HIDWORD(EmpParseLock.OtherOperationCount) + 1),
          0x71576343u,
          v19 | 0x80000000);
  v22 = HIDWORD(EmpParseLock.OtherOperationCount);
  v23 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 272) = v21;
  v25 = ExAllocatePoolWithTagFromNode(v24, 4LL * (unsigned int)(v22 + 1), 0x71576343u, v23);
  v26 = HIDWORD(EmpParseLock.OtherOperationCount);
  v27 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 240) = v25;
  v29 = ExAllocatePoolWithTagFromNode(v28, 4LL * (unsigned int)(v26 + 1), 0x71576343u, v27);
  *(_QWORD *)(a3 + 248) = v29;
  if ( *(_QWORD *)(a3 + 232)
    && *(_QWORD *)(a3 + 256)
    && *(_QWORD *)(a3 + 264)
    && *(_QWORD *)(a3 + 280)
    && *(_QWORD *)(a3 + 272)
    && *(_QWORD *)(a3 + 240)
    && v29 )
  {
    for ( i = 0; i <= HIDWORD(EmpParseLock.OtherOperationCount); ++i )
    {
      v33 = 404LL * i;
      v34 = 3LL * i;
      v35 = 16LL * i;
      v36 = (_QWORD *)(v35 + *(_QWORD *)(a3 + 256));
      v36[1] = v36;
      *v36 = v36;
      v37 = (_QWORD *)(v35 + *(_QWORD *)(a3 + 264));
      v37[1] = v37;
      *v37 = v37;
      v38 = *(_QWORD *)(a3 + 272);
      *(_WORD *)(v38 + 8 * v34) = 1;
      *(_BYTE *)(v38 + 8 * v34 + 2) = 6;
      v39 = (_QWORD *)(v38 + 8 + 24LL * i);
      *(_DWORD *)(v38 + 8 * v34 + 4) = 0;
      *(_QWORD *)(v38 + 8 * v34 + 16) = v39;
      *v39 = v39;
      *(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * i) = 0;
      *(_DWORD *)(*(_QWORD *)(a3 + 248) + 4LL * i) = 0;
      memset_0((void *)(v33 + *(_QWORD *)(a3 + 280)), 255, 4LL * LODWORD(EmpParseLock.OtherOperationCount));
      *(_DWORD *)(v33 + *(_QWORD *)(a3 + 280)) = 0;
      v40 = 1;
      while ( v40 < LODWORD(EmpParseLock.OtherOperationCount) )
      {
        v41 = ExAllocatePoolWithTagFromNode((__int64)v30, 0x50uLL, 0x71576343u, *(_DWORD *)(a3 + 24) | 0x80000000);
        v30 = (_QWORD *)v41;
        if ( !v41 )
          goto LABEL_3;
        *(_DWORD *)(v41 + 32) = 3;
        *(_QWORD *)(v41 + 56) = a1;
        *(_QWORD *)(v41 + 64) = a2;
        *(_QWORD *)(v41 + 72) = a3;
        *(_DWORD *)(v41 + 40) = v40;
        *(_DWORD *)(v41 + 36) = i;
        *(_QWORD *)(v41 + 16) = CcAsyncReadWorkerThread;
        *(_QWORD *)(v41 + 24) = v41;
        *(_QWORD *)v41 = 0LL;
        v42 = v35 + *(_QWORD *)(a3 + 232);
        v43 = *(_QWORD **)(v42 + 8);
        if ( *v43 != v42 )
          __fastfail(3u);
        *v30 = v42;
        ++v40;
        v30[1] = v43;
        *v43 = v30;
        *(_QWORD *)(v42 + 8) = v30;
      }
    }
    for ( j = 0; ; ++j )
    {
      if ( j > HIDWORD(EmpParseLock.OtherOperationCount) )
      {
        v6 = 1;
        goto LABEL_3;
      }
      v47 = *(_DWORD *)(a3 + 24) | 0x80000000;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v48 = ExAllocatePoolWithTagFromNode((__int64)v30, 0x50uLL, 0x71576343u, v47);
      StartContext = (void *)v48;
      if ( !v48 )
        goto LABEL_3;
      *(_DWORD *)(v48 + 32) = 3;
      *(_QWORD *)(v48 + 56) = a1;
      *(_QWORD *)(v48 + 64) = a2;
      *(_QWORD *)(v48 + 72) = a3;
      *(_DWORD *)(v48 + 40) = 0;
      *(_DWORD *)(v48 + 36) = j;
      *(_QWORD *)(v48 + 16) = CcAsyncReadWorkerThread;
      *(_QWORD *)(v48 + 24) = v48;
      *(_QWORD *)v48 = 0LL;
      ++*(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * j);
      CcReferencePartitionAndPrivateVolumeCacheMap(a1, a2);
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             *(HANDLE *)(*(_QWORD *)(a1 + 8) + 128LL),
             0LL,
             (PKSTART_ROUTINE)CcAsyncReadWorker,
             StartContext) < 0 )
        break;
      ZwClose(ThreadHandle);
    }
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartitionAndPrivateVolumeCacheMap(a1, a2);
  }
LABEL_3:
  *v52 = v6;
  return v6;
}
