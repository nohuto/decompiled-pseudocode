/*
 * XREFs of MiCommitVadEmptyPacket @ 0x1403133AC
 * Callers:
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

void __fastcall MiCommitVadEmptyPacket(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)a1;
  if ( *(_WORD *)(a1 + 48) )
  {
    MiIncreaseUsedPtes(a1, *(_QWORD *)(a1 + 40), *(unsigned __int16 *)(a1 + 48), 2LL);
    *(_WORD *)(a1 + 48) = 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    MiUnlockPageTableInternal(v2, v5);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( !a2 )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 12);
    if ( *(_DWORD *)(a1 + 8) == 1 )
      MiUnlockWorkingSetExclusive(v2, v5);
    else
      MiUnlockWorkingSetShared(v2, v5);
  }
}
