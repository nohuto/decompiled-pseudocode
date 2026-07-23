/*
 * XREFs of AlpcpCaptureMessageData @ 0x14098CCB0
 * Callers:
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3, char a4)
{
  __int64 v4; // rdi
  size_t v9; // rdi
  void *v10; // rcx
  void *v11; // rcx
  ULONG_PTR v13; // r15
  void *v14; // rcx
  void *v15; // rcx
  size_t v16; // r12
  __int64 Pool2; // rax
  ULONG_PTR v18; // rcx
  int v19; // r12d
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rcx

  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v9 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v9 = 512LL;
  if ( a2 <= v9 )
  {
    if ( a3 )
    {
      v10 = (void *)(a1 + 280);
      if ( a4 )
        RtlCopyFromUser(v10, a3, a2);
      else
        RtlCopyVolatileMemory(v10, a3, a2);
    }
    v11 = *(void **)(a1 + 224);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x42456C41u);
      v21 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v21 )
        AlpcpReleasePagedPoolQuota(v21, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v13 = *(_QWORD *)(a1 + 232);
  if ( a2 <= v13 + v9 )
    goto LABEL_11;
  v15 = *(void **)(a1 + 224);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v16 = a2 - v9;
  Pool2 = ExAllocatePool2(0x100uLL);
  v18 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 224) = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v16;
    if ( !v18 || (v19 = AlpcpChargePagedPoolQuota(v18, v16 - v13), v19 >= 0) )
    {
LABEL_11:
      if ( a3 )
      {
        v14 = (void *)(a1 + 280);
        if ( a4 )
        {
          RtlCopyFromUser(v14, a3, v9);
          RtlCopyFromUser(*(void **)(a1 + 224), &a3[v9], a2 - v9);
        }
        else
        {
          RtlCopyVolatileMemory(v14, a3, v9);
          RtlCopyVolatileMemory(*(void **)(a1 + 224), &a3[v9], a2 - v9);
        }
      }
      return 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
    v20 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
    AlpcpReleasePagedPoolQuota(v20, v13);
    return (unsigned int)v19;
  }
  else
  {
    if ( v18 )
      AlpcpReleasePagedPoolQuota(v18, v13);
    return 3221225626LL;
  }
}
