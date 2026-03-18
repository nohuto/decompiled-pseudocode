/*
 * XREFs of MiInsertAweFlushList @ 0x140533384
 * Callers:
 *     MiWriteAwePtes @ 0x140477F10 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140702FEC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140343930 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiInsertAweFlushList(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v7; // ebp

  v4 = *(_QWORD *)(a1 + 240);
  v5 = a3;
  *(_DWORD *)(a2 + 20) |= a4;
  v7 = *(_DWORD *)(a1 + 236);
  if ( v7 )
  {
    for ( ; v4; --v4 )
    {
      MiInsertLargeTbFlushEntry(a2, v7, v5);
      v5 += 8LL;
    }
  }
  else
  {
    MiInsertTbFlushEntry(a2, a3 << 25 >> 16, v4, 0);
  }
}
