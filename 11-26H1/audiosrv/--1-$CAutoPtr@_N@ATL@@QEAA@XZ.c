/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x1800AF8CC
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71____::_1_::dtor$1 @ 0x1801645D8 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c_ea_1801645D8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)1);
  *a1 = 0LL;
}
