/*
 * XREFs of MiTrimViewLockProcessPte @ 0x140465EA0
 * Callers:
 *     MiTrimSharedPageFromView @ 0x140465634 (MiTrimSharedPageFromView.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiTrimViewGetFlushList @ 0x1403A9858 (MiTrimViewGetFlushList.c)
 */

__int64 __fastcall MiTrimViewLockProcessPte(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rsi
  __int64 v7; // rcx
  struct _LIST_ENTRY *Address; // rax
  __int64 v9; // r10
  int Flink; // ecx
  struct _LIST_ENTRY *v11; // rax
  __int64 **v12; // rdi
  unsigned __int64 v13; // r11
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 valid; // rax
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24) == 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 64) + 1024LL;
    *(_QWORD *)(a1 + 24) = v7;
    *(_BYTE *)(a1 + 264) = MiLockWorkingSetShared(v7, (__int64)a2, a3);
    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && !*(_QWORD *)(a1 + 40) )
      MiTrimViewGetFlushList((__int64 *)a1, 1);
  }
  MiLockVadTree(1u, (__int64)a2, a3);
  Address = MiLocateAddress(*(_QWORD *)(a1 + 272));
  v9 = (__int64)Address;
  if ( !Address )
    goto LABEL_23;
  Flink = (int)Address[3].Flink;
  if ( (Flink & 0x80000) != 0 || (*(_DWORD *)(v5 + 56) & 0x20) == 0 && (Flink & 0x1C) != 0 )
    goto LABEL_23;
  v11 = Address[5].Flink;
  v12 = (__int64 **)(a1 + 200);
  *(_QWORD *)(a1 + 200) = v11;
  if ( v11->Flink != (struct _LIST_ENTRY *)v5 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( v13 >= *(_QWORD *)(v9 + 88)
      && v13 < *(_QWORD *)(v9 + 88)
             + -8LL * (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
             + 8 * ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) + 1) )
    {
      *(_QWORD *)(a1 + 272) = ((__int64)(v13 - *(_QWORD *)(v9 + 88)) >> 3 << 12)
                            + ((*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12);
      goto LABEL_17;
    }
LABEL_23:
    MiUnlockVadTree(1, 0x11u);
    return 3221225497LL;
  }
  ProtoPteAddress = MiGetProtoPteAddress(v9, *(_QWORD *)(a1 + 272) >> 12, 8u, (unsigned int **)(a1 + 200));
  if ( !ProtoPteAddress || !*v12 || *(_QWORD *)(a1 + 288) != MiStartingOffset(*v12, ProtoPteAddress, 0xFFFFFFFF) )
    goto LABEL_23;
LABEL_17:
  MiUnlockVadTree(1, 0x11u);
  v15 = (((((*(_QWORD *)(a1 + 272) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 == v15 )
    return 0LL;
  if ( v16 )
    return 3221226029LL;
  valid = MiLockLowestValidPageTableEx(
            *(_QWORD *)(a1 + 24),
            ((*(_QWORD *)(a1 + 272) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            &v19,
            0);
  *(_QWORD *)(a1 + 56) = valid;
  if ( valid == v15 )
    return 0LL;
  *a2 = (__int64)((v15 << 25) + 0x10000000) >> 16 << 25 >> 16;
  return 3221225497LL;
}
