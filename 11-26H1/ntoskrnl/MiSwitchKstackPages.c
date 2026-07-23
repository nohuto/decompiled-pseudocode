/*
 * XREFs of MiSwitchKstackPages @ 0x140532FD0
 * Callers:
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__m128i *a1, const __m128i *a2)
{
  MiCopyPfnEntryEx(a1, a2, 2);
  a1[2].m128i_i32[0] = a1[2].m128i_i32[0] & 0xFFF8FFFF | 0x60000;
  return MiSetPfnIdentity((__int64)a1, 2u);
}
