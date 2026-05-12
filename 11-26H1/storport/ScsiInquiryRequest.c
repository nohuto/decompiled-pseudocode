/*
 * XREFs of ScsiInquiryRequest @ 0x1401167F4
 * Callers:
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 * Callees:
 *     FormInquiryStandardData @ 0x1400FFE1C (FormInquiryStandardData.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401172A0 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117468 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespacePopulateInquiryDeviceCharacteristicsData @ 0x140117558 (NvmeNamespacePopulateInquiryDeviceCharacteristicsData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0 (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117688 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryVpdSupportedPagesData @ 0x14011783C (NvmeNamespacePopulateInquiryVpdSupportedPagesData.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 ScsiInquiryRequest(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // r9d
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
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
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v3 = v19;
  v5 = 64LL;
  v6 = a3;
  v7 = a2;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v5 = 24LL;
  v8 = *(void **)(v5 + a2);
  v9 = 60LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v9 = 16LL;
  v10 = *(_DWORD *)(v9 + a2);
  LODWORD(v19) = v10;
  if ( !v8 || !v10 )
    goto LABEL_28;
  memset_0(v8, 0, v10);
  v11 = *(unsigned __int8 *)(v6 + 2);
  if ( (*(_BYTE *)(v6 + 1) & 1) != 0 )
  {
    if ( !*(_BYTE *)(v6 + 2) )
    {
      v12 = NvmeNamespacePopulateInquiryVpdSupportedPagesData(v11, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
    v14 = v11 - 128;
    if ( !v14 )
    {
      v12 = NvmeNamespacePopulateInquirySerialNumberData(a1, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
    v15 = v14 - 3;
    if ( !v15 )
    {
      v12 = NvmeNamespacePopulateInquiryDeviceIdentifiersData(a1, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
    v16 = v15 - 45;
    if ( !v16 )
    {
      v12 = NvmeNamespacePopulateInquiryBlockLimitsData(a1, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
    v17 = (unsigned int)(v16 - 1);
    if ( !(_DWORD)v17 )
    {
      v12 = NvmeNamespacePopulateInquiryDeviceCharacteristicsData(v17, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
    if ( (_DWORD)v17 == 1 )
    {
      v12 = NvmeNamespacePopulateInquiryBlockProvisioningData(a1, v7, (__int64 *)va, v8);
      goto LABEL_23;
    }
LABEL_28:
    LOBYTE(v3) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v7, a2, a3, v3, 0);
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)v11 )
  {
    LOBYTE(v3) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v7, a2, a3, v3, 0);
    v13 = -1073741811;
    goto LABEL_24;
  }
  v12 = FormInquiryStandardData(a1, v7);
LABEL_23:
  v13 = v12;
LABEL_24:
  if ( !v13 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 60) = v19;
    else
      *(_DWORD *)(v7 + 16) = v19;
  }
  return v13;
}
