/*
 * XREFs of NvmeNamespaceScsiInquiryRequest @ 0x140117AC4
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401172A0 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117468 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117558 (NvmeNamespacePopulateInquiryDeviceCharacteristicsData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0 (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117688 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryStandardData @ 0x140117744 (NvmeNamespacePopulateInquiryStandardData.c)
 *     NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x14011783C (NvmeNamespacePopulateInquiryVpdSupportedPagesData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  void *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v5 = 64LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v5 = 24LL;
  v8 = *(void **)(v5 + a3);
  v9 = 60LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v9 = 16LL;
  v10 = *(_DWORD *)(v9 + a3);
  LODWORD(v19) = v10;
  if ( !v8 || !v10 )
    goto LABEL_28;
  memset_0(v8, 0, v10);
  v11 = *(unsigned __int8 *)(a4 + 2);
  if ( (*(_BYTE *)(a4 + 1) & 1) != 0 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v12 = NvmeNamespacePopulateInquiryVpdSupportedPagesData(v11, a3, &v19, (__int64)v8);
      goto LABEL_23;
    }
    v14 = v11 - 128;
    if ( !v14 )
    {
      v12 = NvmeNamespacePopulateInquirySerialNumberData(a1, a3, (unsigned int *)&v19, (__int64)v8);
      goto LABEL_23;
    }
    v15 = v14 - 3;
    if ( !v15 )
    {
      v12 = NvmeNamespacePopulateInquiryDeviceIdentifiersData(a1, a3, (unsigned int *)&v19, (__int64)v8);
      goto LABEL_23;
    }
    v16 = v15 - 45;
    if ( !v16 )
    {
      v12 = NvmeNamespacePopulateInquiryBlockLimitsData(a1, a3, &v19, (__int64)v8);
      goto LABEL_23;
    }
    v17 = (unsigned int)(v16 - 1);
    if ( !(_DWORD)v17 )
    {
      v12 = NvmeNamespacePopulateInquiryDeviceCharacteristicsData(v17, a3, &v19, (__int64)v8);
      goto LABEL_23;
    }
    if ( (_DWORD)v17 == 1 )
    {
      v12 = NvmeNamespacePopulateInquiryBlockProvisioningData(a1, a3, &v19, (__int64)v8);
      goto LABEL_23;
    }
LABEL_28:
    SetSrbSenseData(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)v11 )
  {
    SetSrbSenseData(a3, 6, 5, 36, 0);
    v13 = -1073741811;
    goto LABEL_24;
  }
  v12 = NvmeNamespacePopulateInquiryStandardData(a1, a3, (int *)&v19, v8);
LABEL_23:
  v13 = v12;
LABEL_24:
  if ( !v13 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
      *(_DWORD *)(a3 + 60) = v19;
    else
      *(_DWORD *)(a3 + 16) = v19;
  }
  return v13;
}
