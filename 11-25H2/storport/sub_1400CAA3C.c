/*
 * XREFs of sub_1400CAA3C @ 0x1400CAA3C
 * Callers:
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400DC2F8 @ 0x1400DC2F8 (sub_1400DC2F8.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400CAA3C(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmAllocateContiguousNodeMemory(a2, 0x100000000LL, -1LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 840) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_DWORD *)(result + 16) = a2;
  }
  return result;
}
