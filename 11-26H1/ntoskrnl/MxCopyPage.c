/*
 * XREFs of MxCopyPage @ 0x140CF5774
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiCopyPtes @ 0x1403422BC (MiCopyPtes.c)
 *     MxGetPhase0Mapping @ 0x140C80058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rbp
  unsigned __int64 *v5; // rdi

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v5 = MiMakeValidPte((unsigned __int64)v5, a1, -1610612732);
  MiCopyPtes((_QWORD *)Phase0Mapping, a2, 512LL);
  *v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return MiFlushSingleTbEntry(Phase0Mapping, 2LL);
}
