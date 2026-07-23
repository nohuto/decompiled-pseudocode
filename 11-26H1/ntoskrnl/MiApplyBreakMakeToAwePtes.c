/*
 * XREFs of MiApplyBreakMakeToAwePtes @ 0x140705570
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteAweClusterPte @ 0x140530318 (MiWriteAweClusterPte.c)
 */

__int64 __fastcall MiApplyBreakMakeToAwePtes(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // edi
  signed __int64 *i; // rsi

  v5 = 0;
  for ( i = (signed __int64 *)(((__int64)(*a1 << 25) >> 16) + 8 * a2); v5 < a3; i += a1[30] )
  {
    MiWriteAweClusterPte(a1[5], i, *i & 0xFFFFFFFFFFFFFBFEuLL | 1, 5, a1[30]);
    ++v5;
  }
  return 0LL;
}
