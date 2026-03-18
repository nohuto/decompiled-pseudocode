/*
 * XREFs of MiPurgeZeroPage @ 0x14028E7C0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiPurgeZeroPage(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = (a1 + 0x220000000000LL) / 48;
  MiUnlinkFreeOrZeroedPage(v1, 0LL, 0x400000u);
  MiInsertPageInFreeOrZeroedList(v1, 2LL);
  return 1LL;
}
