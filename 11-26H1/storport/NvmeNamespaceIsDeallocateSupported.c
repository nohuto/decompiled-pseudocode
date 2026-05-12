/*
 * XREFs of NvmeNamespaceIsDeallocateSupported @ 0x140044F68
 * Callers:
 *     NvmeNamespaceDsmDeallocate @ 0x140044400 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401172A0 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117468 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x14011889C (NvmeNamespaceScsiUnmapRequest.c)
 *     NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl @ 0x1401ADFDC (NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeNamespaceIsDeallocateSupported(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = v1[131];
  if ( v2 && (*(_DWORD *)(v2 + 24) & 1) != 0 )
    return 0;
  if ( (*(_BYTE *)(v1[74] + 520LL) & 4) != 0 )
    return 1;
  v4 = v1[75];
  if ( !v4 )
    return 0;
  return *(_BYTE *)(v4 + 3) != 0;
}
