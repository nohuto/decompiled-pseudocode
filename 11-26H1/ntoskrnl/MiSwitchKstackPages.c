/*
 * XREFs of MiSwitchKstackPages @ 0x140530AD0
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F3688 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140294570 (MiCopyPfnEntryEx.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__m128i *a1, const __m128i *a2)
{
  MiCopyPfnEntryEx(a1, a2, 2);
  a1[2].m128i_i32[0] = a1[2].m128i_i32[0] & 0xFFF8FFFF | 0x60000;
  return MiSetPfnIdentity((__int64)a1, 2u);
}
