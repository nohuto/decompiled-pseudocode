/*
 * XREFs of NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x14011783C
 * Callers:
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquiryVpdSupportedPagesData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a3 >= 0xBu )
  {
    *(_WORD *)a4 = 0;
    *(_DWORD *)(a4 + 3) = -2088763386;
    *(_WORD *)(a4 + 7) = -20048;
    *(_BYTE *)(a4 + 9) = -78;
    *(_BYTE *)(a2 + 3) = 1;
    *a3 = 11;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return 3221225485LL;
  }
  return result;
}
