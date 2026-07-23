/*
 * XREFs of MiDecommitLockNewPageTable @ 0x140363378
 * Callers:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDecommitComputeCheckPte @ 0x140413520 (MiDecommitComputeCheckPte.c)
 */

__int64 __fastcall MiDecommitLockNewPageTable(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rcx
  int v6; // esi
  char v7; // di
  __int64 NextPageTable; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v12; // edi
  unsigned __int64 valid; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 100);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v3 & 0xF0;
  if ( v6 == 96 && (v7 = 2, KeGetCurrentIrql() == 2) )
    MiLockWorkingSetSharedAtDpc(v5);
  else
    v7 = MiLockWorkingSetShared(v5, a2, a3);
  *(_BYTE *)(a1 + 101) = v7;
  if ( ((v6 - 64) & 0xFFFFFFDF) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    v17 = ((*(_QWORD *)(a1 + 80) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(a1 + 56) = v17;
    MiLockPageTableInternal(v16, v17, 0);
    return 1LL;
  }
  if ( ((v6 - 32) & 0xFFFFFFEF) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 100) & 4) == 0 )
    {
      MiMakeSystemAddressValid(
        *(_QWORD *)(a1 + 80),
        (*(_DWORD *)(*(_QWORD *)a1 + 48LL) >> 10) & 0x7F,
        v7,
        2 * ((*(_DWORD *)(a1 + 112) & 1) == 0));
      goto LABEL_8;
    }
    NextPageTable = MiGetNextPageTable(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72), v7, 0, &v18);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 64);
    if ( NextPageTable )
    {
      *(_QWORD *)(v9 + 24) += (NextPageTable - v10) >> 3;
      MiDecommitComputeCheckPte(a1, NextPageTable);
LABEL_8:
      *(_QWORD *)(a1 + 56) = ((*(_QWORD *)(a1 + 80) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      return 1LL;
    }
    *(_QWORD *)(v9 + 24) += 1 + ((*(_QWORD *)(a1 + 72) - v10) >> 3);
    return 0LL;
  }
  else
  {
    v12 = 0;
    while ( *(_QWORD *)(a1 + 64) <= *(_QWORD *)(a1 + 72) )
    {
      valid = MiLockLowestValidPageTableEx(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 80), &v18, 0);
      v14 = (*(_QWORD *)(a1 + 64) >> 9) & 0x7FFFFFFFF8LL;
      *(_QWORD *)(a1 + 56) = valid;
      if ( valid == v14 - 0x98000000000LL )
        return 1;
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), valid);
      v15 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 56) = 0LL;
      MiDecommitComputeCheckPte(a1, v15 + 4096);
    }
    return v12;
  }
}
