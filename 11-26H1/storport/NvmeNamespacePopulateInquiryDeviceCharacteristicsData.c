/*
 * XREFs of NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117558
 * Callers:
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquiryDeviceCharacteristicsData(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a3 >= 8u )
  {
    *(_BYTE *)(a4 + 7) &= 0xF0u;
    *(_WORD *)a4 = -20224;
    *(_WORD *)(a4 + 3) = 60;
    *(_BYTE *)(a4 + 5) = 1;
    *(_BYTE *)(a2 + 3) = 1;
    *a3 = 8;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return 3221225485LL;
  }
  return result;
}
