/*
 * XREFs of MiDeleteSystemPageTable @ 0x1402EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiAddSystemPageTableToList @ 0x1402EB128 (MiAddSystemPageTableToList.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReplicatePteChange @ 0x14052ABE0 (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // r14
  signed __int64 v6; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v9; // rsi
  __int64 ProcessorFlushList; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)(a1 + 32);
  BugCheckParameter4 = a3;
  if ( (*(_QWORD *)a2 & 1) == 0 )
  {
    if ( v3 != MiMakeDemandZeroPte(16) )
    {
      if ( v3 )
        KeBugCheckEx(0x1Au, 0x1440uLL, a2, v3, BugCheckParameter4);
      return 0LL;
    }
    *v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      MiReplicatePteChange(a2, 0LL);
      return 0LL;
    }
LABEL_18:
    MiDecreaseUsedPtes(v15, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v16);
    return 0LL;
  }
  v9 = *(_QWORD *)(v4 + 32);
  if ( !v9 )
  {
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
    *(_QWORD *)(v4 + 32) = ProcessorFlushList;
    v9 = ProcessorFlushList;
    MiInitializeTbFlushList(ProcessorFlushList, v6, *(_DWORD *)(ProcessorFlushList + 12), 8, 1);
  }
  if ( (v3 & 0x80u) == 0LL )
  {
    if ( (_DWORD)BugCheckParameter4 )
    {
      if ( !(unsigned int)MiEvictPageTableLock(
                            *(_QWORD *)(a1 + 32),
                            a2,
                            (unsigned int)BugCheckParameter4,
                            *(__int64 *)&CLFS_LSN_NULL_EXT) )
        return 0LL;
      if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
        MiDecreaseUsedPtes(v11, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v12);
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    MiAddSystemPageTableToList(a1, 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL);
    return 0LL;
  }
  MiInsertLargeTbFlushEntry(v9, (unsigned int)BugCheckParameter4, a2);
  MiRewritePteWithLockBit(v6, ((*(_DWORD *)a1 >> 2) & 1) == 0, a2, *(__int64 *)&CLFS_LSN_NULL_EXT);
  if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
    goto LABEL_18;
  return 0LL;
}
