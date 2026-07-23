/*
 * XREFs of MiCopyKstack @ 0x14050CEF4
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx

  v6 = (a1 + 0x220000000000LL) / 48;
  v7 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPageNoOverride(a3 << 25 >> 16, (__int64)(v7 << 25) >> 16, 1LL);
  v8 = *(_QWORD *)v7;
  if ( a4 )
  {
    *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiFlushSingleTbEntry((__int64)(v7 << 25) >> 16, 2LL);
    *(_QWORD *)v7 = (v6 << 12) & 0xFFFFFFFFFF000LL ^ (v8 & 0xFFF0000000000FDFuLL | 0x20);
  }
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x50000;
  MiSetPfnIdentity(a2, 0);
  return (__int64)(v7 << 25) >> 16;
}
