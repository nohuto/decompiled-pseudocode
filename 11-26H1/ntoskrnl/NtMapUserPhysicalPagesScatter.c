/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140879900
 * Callers:
 *     DifNtMapUserPhysicalPagesScatterWrapper @ 0x14067B690 (DifNtMapUserPhysicalPagesScatterWrapper.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiFreePhysicalPageChain @ 0x1403C73D4 (MiFreePhysicalPageChain.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiWriteAwePtes @ 0x140477F10 (MiWriteAwePtes.c)
 *     MiPageChainCount @ 0x14047AB90 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404F0690 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404FA958 (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1405139B8 (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x140526364 (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140702580 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiCaptureUlongPtrArray @ 0x140878758 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapUserPhysicalPagesScatter(void *a1, unsigned __int64 a2, char *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  char *PoolMm; // rsi
  __int64 v9; // r13
  __int64 v10; // r15
  char *v11; // r14
  int CurrentProcessorColor; // eax
  ULONG_PTR v13; // rdx
  int v14; // edi
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // r15
  __int64 AweNode; // rax
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 v20; // r11
  unsigned __int64 *v21; // rbx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  ULONG_PTR v25; // rbx
  ULONG_PTR v26; // [rsp+40h] [rbp-2078h]
  char *v27; // [rsp+48h] [rbp-2070h]
  __int128 v28; // [rsp+50h] [rbp-2068h] BYREF
  __int64 v29; // [rsp+60h] [rbp-2058h]
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v31; // [rsp+1070h] [rbp-1048h] BYREF

  memset_0(P, 0, sizeof(P));
  v29 = 0LL;
  v28 = 0LL;
  if ( a2 > 0xFFFFFFFFFFFFFLL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  PoolMm = P;
  v9 = 0LL;
  v10 = 8 * a2;
  v11 = a3;
  if ( a2 > 0x200 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    v13 = 16 * a2;
    if ( (unsigned __int64)a3 <= 1 )
      v13 = 8 * a2;
    PoolMm = (char *)ExAllocatePoolMm(64LL, v13, 2001890637, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      return 3221225626LL;
  }
  v14 = MiCaptureUlongPtrArray(PoolMm, a1, a2);
  if ( v14 < 0 )
    goto LABEL_44;
  if ( !a2 )
    return 0LL;
  if ( (unsigned __int64)a3 <= 1 )
    goto LABEL_15;
  v11 = &v31;
  if ( a2 > 0x200 )
    v11 = &PoolMm[v10];
  v14 = MiCaptureUlongPtrArray(v11, a3, a2);
  if ( v14 < 0 )
  {
LABEL_44:
    v16 = 0LL;
  }
  else
  {
LABEL_15:
    v15 = *(_QWORD *)PoolMm;
    v27 = &PoolMm[v10];
    v14 = 0;
    v26 = MiLockAweVadsShared((__int64)CurrentThread);
    v16 = v26;
    AweNode = MiGetAweNode(v15);
    if ( !AweNode || (*(_DWORD *)(AweNode + 56) & 3) != 0 )
    {
      v14 = -1073741585;
    }
    else
    {
      v18 = *(_QWORD *)(AweNode + 48);
      v9 = AweNode;
      v20 = MiPageChainCount(v18);
      v21 = (unsigned __int64 *)PoolMm;
      do
      {
        v22 = *v21;
        if ( v20 == 1 )
        {
          v23 = *v21;
        }
        else
        {
          if ( (((v20 << 12) - 1) & v22) != 0 )
            goto LABEL_43;
          v23 = v22 + (v20 << 12) - 1;
        }
        if ( v22 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12
          || v23 > (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
        {
          v24 = MiGetAweNode(*v21);
          if ( !v24 || (*(_DWORD *)(v24 + 56) & 3) != 0 || *(_QWORD *)(v24 + 48) != v18 )
          {
LABEL_43:
            v14 = -1073741585;
            goto LABEL_35;
          }
          v19 = *(_QWORD *)(v24 + 40);
        }
        ++v21;
      }
      while ( v21 < (unsigned __int64 *)v27 );
      v25 = MiLockAwePagesShared(v18, (__int64)CurrentThread);
      if ( (unsigned __int64)v11 <= 1
        || (v14 = MiReferenceIncomingPhysicalPages(
                    v18,
                    (__int64)v11,
                    a2,
                    (__int64)PoolMm,
                    (unsigned __int64 **)&v28,
                    v9,
                    0LL),
            v14 >= 0) )
      {
        MiWriteAwePtes(v9, (__int64)v11, a2, (__int64)PoolMm, 0LL, 1, (__int64)&v28);
      }
      if ( v25 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v25);
LABEL_35:
      v16 = v26;
    }
  }
  if ( (_QWORD)v28 )
    MiFreePhysicalPageChain(*(_QWORD *)(v9 + 48), &v28);
  if ( v16 )
    MiUnlockAweVadsShared((__int64)CurrentThread, v16);
  if ( PoolMm != P )
    ExFreePoolWithTag(PoolMm, 0);
  return (unsigned int)v14;
}
