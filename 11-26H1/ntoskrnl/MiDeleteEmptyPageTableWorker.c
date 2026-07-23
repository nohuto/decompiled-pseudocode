/*
 * XREFs of MiDeleteEmptyPageTableWorker @ 0x14029E7D8
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x14029E7C0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableWorker(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v7; // rbp
  __int64 PteShadow; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // esi

  v3 = *(_QWORD **)(a1 + 184);
  v7 = *v3;
  *(_QWORD *)(v7 + 64) = a2;
  *(_QWORD *)(v7 + 80) = a2 + 8;
  *(_QWORD *)(v7 + 48) = (__int64)(a2 << 25) >> 16;
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (PteShadow & 1) == 0 || (PteShadow & 0x80u) != 0LL )
    return 0LL;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a2);
  v9 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    v9 = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (*(_DWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 36) & 0x4000000) != 0 )
    v10 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 36;
  else
    v10 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16) >> 17;
  v11 = v10 & 0x3FF;
  if ( (*(_DWORD *)a1 & 4) != 0 )
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a2);
  if ( v11 )
    return 0LL;
  *(_DWORD *)(v7 + 100) ^= (*(_DWORD *)(v7 + 100) ^ (a3 << 18)) & 0x1C0000;
  MiDecommitHandleValidPte(v7, PteShadow);
  *((_BYTE *)v3 + (((a2 >> 3) & 0x1FF) >> 3) + 16) |= 1 << ((a2 >> 3) & 7);
  if ( !v3[11] )
    v3[11] = a2;
  return 1LL;
}
