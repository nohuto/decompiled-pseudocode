/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x1409919C8
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAvailableBufferSize @ 0x140A53310 (AlpcpAvailableBufferSize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  char *v2; // r14
  char v3; // r15
  size_t v4; // rdi
  __int64 v5; // rsi
  size_t v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // r12
  void *v11; // rcx
  char *v12; // rdx
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rcx
  size_t v16; // r13
  __int64 Pool2; // rax
  ULONG_PTR v18; // rcx

  v2 = (char *)(*(_QWORD *)(a1 + 176) & 0xFFFFFFFFFFFFFFFEuLL);
  v3 = *(_BYTE *)(a1 + 176) & 1;
  v4 = *(unsigned __int16 *)(a1 + 240);
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32) - 40LL;
  else
    v6 = 512LL;
  if ( v4 <= v6 )
  {
    if ( v2 )
    {
      v7 = (void *)(a1 + 280);
      if ( v3 )
        RtlCopyFromUser(v7, v2, v4);
      else
        RtlCopyVolatileMemory(v7, v2, v4);
    }
    v8 = *(void **)(a1 + 224);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      v9 = *(_QWORD *)(a1 + 48);
      if ( v9 )
        AlpcpReleasePagedPoolQuota(v9, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return;
  }
  if ( v4 > 0xFFD7 )
    return;
  v10 = *(_QWORD *)(a1 + 232);
  if ( v4 > v10 + v6 )
  {
    v15 = *(void **)(a1 + 224);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x42456C41u);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    v16 = v4 - v6;
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 224) = Pool2;
    v18 = *(_QWORD *)(a1 + 48);
    if ( Pool2 )
    {
      *(_QWORD *)(a1 + 232) = v16;
      if ( !v18 || (int)AlpcpChargePagedPoolQuota(v18, v16 - v10) >= 0 )
        goto LABEL_13;
      ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      v18 = *(_QWORD *)(a1 + 48);
    }
    else if ( !v18 )
    {
      return;
    }
    AlpcpReleasePagedPoolQuota(v18, v10);
    return;
  }
LABEL_13:
  if ( v2 )
  {
    v11 = (void *)(a1 + 280);
    if ( v3 )
      RtlCopyFromUser(v11, v2, v6);
    else
      RtlCopyVolatileMemory(v11, v2, v6);
    v12 = &v2[v6];
    v13 = *(void **)(a1 + 224);
    v14 = v4 - v6;
    if ( v3 )
      RtlCopyFromUser(v13, v12, v14);
    else
      RtlCopyVolatileMemory(v13, v12, v14);
  }
}
