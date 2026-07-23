/*
 * XREFs of MiFlushFileOnlyMdl @ 0x140501964
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     MiTransferFileExtent @ 0x1404FDB1C (MiTransferFileExtent.c)
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(
        __int64 a1,
        struct _MDL *a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi

  if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x30000000) == 0x20000000 )
  {
    MiTransferFileExtent(a2, BugCheckParameter2, a3, 1, a6);
    if ( *(_DWORD *)a6 || *(_QWORD *)(a6 + 8) != a2->ByteCount )
      KeBugCheckEx(0x1Au, 0x1484uLL, BugCheckParameter2, a3, (ULONG_PTR)a2);
  }
  else
  {
    v8 = (LODWORD(a2->StartVa) + a2->ByteOffset) & 0xFFF;
    v9 = a2->ByteCount + 4095LL;
    *(_QWORD *)(a6 + 8) = 0LL;
    v10 = v8 + v9;
    *(_DWORD *)a6 = 0;
    MiPersistMdl(a2);
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = v10 & 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
