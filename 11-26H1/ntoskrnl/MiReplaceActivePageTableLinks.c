/*
 * XREFs of MiReplaceActivePageTableLinks @ 0x14033E260
 * Callers:
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiReplaceActivePageTableLinks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  v5 = *(_QWORD *)(a1 + 16) + 24 * ((*(_QWORD *)a2 >> 59) & 7LL);
  v6 = (a2 + 0x220000000000LL) / 48;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 80));
  v7 = *(_DWORD *)(a3 + 36);
  v8 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 16) = v8;
  v9 = v8 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a2 + 36) = v7 ^ (v7 ^ *(_DWORD *)(a2 + 36)) & 0xFFFF0000;
  if ( v9 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v5 + 96) = a2;
  }
  else
  {
    v10 = 6 * v9;
    *(_QWORD *)(8 * v10 - 0x220000000000LL + 16) = *(_QWORD *)(48 * v9 - 0x220000000000LL + 16) ^ (*(_QWORD *)(48 * v9 - 0x220000000000LL + 16) ^ (v6 << 24)) & 0xFFFFFF0000000000uLL;
    *(_DWORD *)(8 * v10 - 0x220000000000LL + 36) = v6 ^ (*(_DWORD *)(48 * v9 - 0x220000000000LL + 36) ^ v6) & 0xFFFF0000;
  }
  v11 = (unsigned __int16)v7 | (*(_QWORD *)(a3 + 16) >> 24) & 0x3FFFFF0000LL;
  if ( v11 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(v5 + 88) = a2;
  else
    *(_QWORD *)(48 * v11 - 0x220000000000LL + 16) = v6 ^ (v6 ^ *(_QWORD *)(48 * v11 - 0x220000000000LL + 16)) & 0xFFFFFF0000000000uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 80));
  *(_DWORD *)(a3 + 36) = v7 & 0xFBFFFFFF;
}
