/*
 * XREFs of MiReturnExcessPoolCharges @ 0x1403D1EA0
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x140367634 (MiReturnExcessPoolCommit.c)
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x1403D1B98 (MiGetLargePoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x14036EFB8 (MiReturnPoolCharges.c)
 */

__int64 __fastcall MiReturnExcessPoolCharges(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v3 = a1;
  v5 = a1;
  v7 = 0LL;
  return MiReturnPoolCharges(&v3, a2, 0);
}
