/*
 * XREFs of MiSoftFaultClusterTradePageFinish @ 0x1407173D0
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiSoftFaultClusterTradePageFinish(_QWORD *a1, __int64 *a2, char a3)
{
  __m128i *v3; // rsi
  const __m128i *v4; // rbx
  __int64 v7; // rcx

  v3 = (__m128i *)a1[9];
  v4 = (const __m128i *)a1[2];
  MiCopyPage(a1[8], (__int64)v4[0x22000000000LL].m128i_i64 / 48, (a3 & 0x40) != 0 ? 20 : 12);
  MiSwapHardFaultPage(a2, v4, v3);
  v7 = a1[7];
  v3[2].m128i_i32[0] &= 0xFFFF0000;
  return MiReturnResident(v7, 1uLL);
}
