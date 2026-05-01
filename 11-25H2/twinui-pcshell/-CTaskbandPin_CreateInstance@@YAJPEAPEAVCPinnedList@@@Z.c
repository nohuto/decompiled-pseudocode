/*
 * XREFs of ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C4D80
 * Callers:
 *     ??R_lambda_1aef1f30231a1d8f4110e6f712366876_@@QEBA@XZ @ 0x1805BFBE0 (--R_lambda_1aef1f30231a1d8f4110e6f712366876_@@QEBA@XZ.c)
 *     ??R_lambda_943ebf8cb42eeb58ab3899b21541936c_@@QEBA@XZ @ 0x1805BFF3C (--R_lambda_943ebf8cb42eeb58ab3899b21541936c_@@QEBA@XZ.c)
 *     ??R_lambda_bef5e417c8b7d926babf502a16e6c1c1_@@QEBA@XZ @ 0x1805C00B0 (--R_lambda_bef5e417c8b7d926babf502a16e6c1c1_@@QEBA@XZ.c)
 *     ??R_lambda_cee785af8d302cd9df31740eee0ba185_@@QEBA@XZ @ 0x1805C0164 (--R_lambda_cee785af8d302cd9df31740eee0ba185_@@QEBA@XZ.c)
 *     _lambda_e444c801a41511fb3819c6a1e051bb24_::operator() @ 0x1805C0220 (_lambda_e444c801a41511fb3819c6a1e051bb24_--operator().c)
 *     _lambda_e9273f30aaf408505b3f0162e09ecc61_::operator() @ 0x1805C02CC (_lambda_e9273f30aaf408505b3f0162e09ecc61_--operator().c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805C3220 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x1806627A4 (--0CTaskbandPin@@QEAA@XZ.c)
 */

__int64 __fastcall CTaskbandPin_CreateInstance(struct CPinnedList **a1)
{
  CTaskbandPin *v2; // rax

  v2 = (CTaskbandPin *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v2 = CTaskbandPin::CTaskbandPin(v2);
  *a1 = v2;
  return v2 == 0LL ? 0x8007000E : 0;
}
