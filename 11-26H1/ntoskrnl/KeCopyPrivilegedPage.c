/*
 * XREFs of KeCopyPrivilegedPage @ 0x1404CA384
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiTradeBootImagePage @ 0x140D00E4C (MiTradeBootImagePage.c)
 * Callees:
 *     VslCopyProtectedPage @ 0x1404CA3C0 (VslCopyProtectedPage.c)
 */

__int64 __fastcall KeCopyPrivilegedPage(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  return VslCopyProtectedPage(a3, a4, a1, a2, a5, a6 & 1);
}
