/*
 * XREFs of NtMapUserPhysicalPages @ 0x140B3C1D0
 * Callers:
 *     DifNtMapUserPhysicalPagesWrapper @ 0x14067F3F0 (DifNtMapUserPhysicalPagesWrapper.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiPageSizeToPteLevel @ 0x140471ED0 (MiPageSizeToPteLevel.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404E9C70 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1405289D4 (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiCaptureUlongPtrArray @ 0x14087EB38 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r13
  __int64 v8; // rbp
  char *PoolMm; // rdi
  NTSTATUS v10; // ebx
  __int64 AweNode; // rax
  __int64 v12; // rbx
  unsigned __int64 AweViewPageSize; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  int CurrentProcessorColor; // eax
  __int64 v19; // rdx
  unsigned __int64 PteAddress; // rax
  int v22; // r10d
  bool i; // zf
  int v24; // r10d
  unsigned __int64 v25; // rsi
  ULONG_PTR v26; // r15
  __int128 v27; // [rsp+40h] [rbp-1068h] BYREF
  __int64 v28; // [rsp+50h] [rbp-1058h]
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  if ( NumberOfPages - 1 > 0xFFFFFFFFFFFFELL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  v8 = 0LL;
  PoolMm = (char *)UserPfnArray;
  if ( (unsigned __int64)UserPfnArray <= 1 )
    goto LABEL_6;
  if ( NumberOfPages > 0x200 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (char *)ExAllocatePoolMm(64LL, 8 * v19, 2001890637, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      return -1073741670;
  }
  else
  {
    PoolMm = P;
  }
  v10 = MiCaptureUlongPtrArray(PoolMm, UserPfnArray, NumberOfPages);
  if ( v10 >= 0 )
  {
LABEL_6:
    v7 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v6);
    v8 = AweNode;
    if ( AweNode )
    {
      v12 = *(_QWORD *)(AweNode + 48);
      AweViewPageSize = MiGetAweViewPageSize(AweNode);
      if ( !AweViewPageSize )
        AweViewPageSize = MiPageChainCount(v12);
      MiPageSizeToPteLevel(AweViewPageSize);
      if ( v15 == 1 || (((v14 << 12) - 1) & v6) == 0 )
      {
        v17 = v6 + ((NumberOfPages * v15) << 12) - 1;
        if ( v17 <= v6 )
        {
          v10 = -1073741584;
          goto LABEL_26;
        }
        if ( v6 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) << 12
          && v17 <= (((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF) )
        {
          PteAddress = MiGetPteAddress(v6);
          for ( i = v22 == 0; ; i = v24 == 1 )
          {
            v25 = PteAddress;
            if ( i )
              break;
            PteAddress = MiGetPteAddress(PteAddress);
          }
          v26 = MiLockAwePagesShared(v12, (__int64)CurrentThread);
          if ( (unsigned __int64)PoolMm <= 1
            || (v10 = MiReferenceIncomingPhysicalPages(
                        v12,
                        (__int64)PoolMm,
                        NumberOfPages,
                        0LL,
                        (unsigned __int64 **)&v27,
                        v8,
                        v25),
                v10 >= 0) )
          {
            MiWriteAwePtes(v8, (__int64)PoolMm, NumberOfPages, 0LL, v25, 3, (__int64)&v27);
            v10 = 0;
          }
          if ( v26 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v26);
          goto LABEL_26;
        }
      }
    }
    v10 = -1073741585;
  }
LABEL_26:
  if ( (_QWORD)v27 )
    MiFreePhysicalPageChain(*(_QWORD *)(v8 + 48), &v27);
  if ( v7 )
    MiUnlockAweVadsShared((__int64)CurrentThread, v7);
  if ( (unsigned __int64)PoolMm > 1 && PoolMm != P )
    ExFreePoolWithTag(PoolMm, 0);
  return v10;
}
