/*
 * XREFs of sub_1400D3FBC @ 0x1400D3FBC
 * Callers:
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 * Callees:
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 */

__int64 __fastcall sub_1400D3FBC(_DWORD *a1, __int64 a2)
{
  KIRQL v4; // di
  __int64 v5; // r8

  v4 = KfRaiseIrql(2u);
  LODWORD(a2) = sub_1400CD684(a1, a2, v5);
  KeLowerIrql(v4);
  return (unsigned int)a2;
}
