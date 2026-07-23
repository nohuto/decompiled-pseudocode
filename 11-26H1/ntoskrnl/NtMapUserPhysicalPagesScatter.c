/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x14087FCE0
 * Callers:
 *     DifNtMapUserPhysicalPagesScatterWrapper @ 0x14067F270 (DifNtMapUserPhysicalPagesScatterWrapper.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404E9C70 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1405289D4 (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCaptureUlongPtrArray @ 0x14087EB38 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r12
  char *v8; // r14
  char *PoolMm; // rsi
  ULONG_PTR v10; // r15
  int CurrentProcessorColor; // eax
  ULONG_PTR v12; // rdx
  unsigned __int64 *v13; // r13
  NTSTATUS v14; // edi
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // r15
  __int64 AweNode; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  ULONG_PTR v25; // rbx
  __int64 v26; // [rsp+40h] [rbp-2078h]
  ULONG_PTR v27; // [rsp+48h] [rbp-2070h]
  char *v28; // [rsp+50h] [rbp-2068h]
  __int128 v29; // [rsp+58h] [rbp-2060h] BYREF
  __int64 v30; // [rsp+68h] [rbp-2050h]
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v32; // [rsp+1070h] [rbp-1048h] BYREF

  memset_0(P, 0, sizeof(P));
  v30 = 0LL;
  v29 = 0LL;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v8 = (char *)UserPfnArray;
  PoolMm = P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    v12 = 16 * NumberOfPages;
    if ( (unsigned __int64)UserPfnArray <= 1 )
      v12 = 8 * NumberOfPages;
    PoolMm = (char *)ExAllocatePoolMm(64LL, v12, 2001890637, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      return -1073741670;
  }
  v13 = (unsigned __int64 *)PoolMm;
  v14 = MiCaptureUlongPtrArray(PoolMm, VirtualAddresses, NumberOfPages);
  if ( v14 < 0 )
    goto LABEL_44;
  if ( !NumberOfPages )
    return 0;
  if ( (unsigned __int64)UserPfnArray <= 1 )
    goto LABEL_15;
  v8 = &v32;
  if ( NumberOfPages > 0x200 )
    v8 = &PoolMm[v10];
  v14 = MiCaptureUlongPtrArray(v8, UserPfnArray, NumberOfPages);
  if ( v14 < 0 )
  {
LABEL_44:
    v18 = 0LL;
    v16 = 0LL;
  }
  else
  {
LABEL_15:
    v15 = *(_QWORD *)PoolMm;
    v28 = &PoolMm[v10];
    v14 = 0;
    v27 = MiLockAweVadsShared((__int64)CurrentThread);
    v16 = v27;
    AweNode = MiGetAweNode(v15);
    if ( !AweNode || (*(_DWORD *)(AweNode + 56) & 3) != 0 )
    {
      v18 = 0LL;
      v14 = -1073741585;
    }
    else
    {
      v19 = *(_QWORD *)(AweNode + 48);
      v26 = AweNode;
      v21 = MiPageChainCount(v19);
      do
      {
        v22 = *v13;
        if ( v21 == 1 )
        {
          v23 = *v13;
        }
        else
        {
          if ( (((v21 << 12) - 1) & v22) != 0 )
            goto LABEL_43;
          v23 = v22 + (v21 << 12) - 1;
        }
        if ( v22 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
          || v23 > (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF) )
        {
          v24 = MiGetAweNode(*v13);
          if ( !v24 || (*(_DWORD *)(v24 + 56) & 3) != 0 || *(_QWORD *)(v24 + 48) != v19 )
          {
LABEL_43:
            v18 = v26;
            v14 = -1073741585;
            goto LABEL_35;
          }
          v20 = *(_QWORD *)(v24 + 40);
        }
        ++v13;
      }
      while ( v13 < (unsigned __int64 *)v28 );
      v18 = v26;
      v25 = MiLockAwePagesShared(v19, (__int64)CurrentThread);
      if ( (unsigned __int64)v8 <= 1
        || (v14 = MiReferenceIncomingPhysicalPages(
                    v19,
                    (__int64)v8,
                    NumberOfPages,
                    (__int64)PoolMm,
                    (unsigned __int64 **)&v29,
                    v26,
                    0LL),
            v14 >= 0) )
      {
        MiWriteAwePtes(v26, (__int64)v8, NumberOfPages, (__int64)PoolMm, 0LL, 1, (__int64)&v29);
      }
      if ( v25 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v25);
LABEL_35:
      v16 = v27;
    }
  }
  if ( (_QWORD)v29 )
    MiFreePhysicalPageChain(*(_QWORD *)(v18 + 48), &v29);
  if ( v16 )
    MiUnlockAweVadsShared((__int64)CurrentThread, v16);
  if ( PoolMm != P )
    ExFreePoolWithTag(PoolMm, 0);
  return v14;
}
