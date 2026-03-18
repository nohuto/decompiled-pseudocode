/*
 * XREFs of PfpPartitionInitialize @ 0x1407C726C
 * Callers:
 *     PfpPartitionCreate @ 0x14060006C (PfpPartitionCreate.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PfTInitialize @ 0x1407C65A4 (PfTInitialize.c)
 */

__int64 __fastcall PfpPartitionInitialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  memset_0(a1 + 2, 0, 0x310uLL);
  *a1 = a2;
  a1[1] = a3;
  return PfTInitialize((__int64)a1, 0);
}
