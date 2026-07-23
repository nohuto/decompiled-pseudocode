/*
 * XREFs of MiLockActivePageTableInList @ 0x1404867B4
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 */

unsigned __int64 __fastcall MiLockActivePageTableInList(signed __int64 a1, unsigned __int8 a2, char a3, int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v7 = *(_QWORD *)(a1 + 16) + 8 * (3LL * a2 + 10);
LABEL_2:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v7);
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      if ( !v8 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
        goto LABEL_2;
      }
      v9 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
      if ( (a3 & 1) == 0
        || (v14 = (__int64)(v9 << 25) >> 16 << 25 >> 16, v14 < 0xFFFFF68000000000uLL)
        || v14 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( a4 || (unsigned int)MiLockPageTableInternal(a1, *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL, 1) )
          break;
      }
      v15 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFLL;
      if ( v15 == 0x3FFFFFFFFFLL )
        goto LABEL_10;
      v8 = 48 * v15 - 0x220000000000LL;
    }
    v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)v8 >> 59;
    v12 = *(_QWORD *)v8 >> 49;
    if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
      MiRemoveActivePageTableLinks(a1, v8, 1);
    *(_QWORD *)v8 = v10 & 0xC001FFFFFFFFFFFFuLL | ((v12 & 0x3FF | ((unsigned __int64)(v11 & 7) << 10)) << 49);
    MiInsertActivePageTableLinksTail(a1, v8, v11 & 7, 1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
    return v9;
  }
  else
  {
LABEL_10:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
    return 0LL;
  }
}
