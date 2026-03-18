/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x140363B4C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = (__int64)(a3 << 25) >> 16;
      MiInsertTbFlushEntry(a1, a3, v5, 0);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
}
