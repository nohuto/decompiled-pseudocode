/*
 * XREFs of NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0
 * Callers:
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     StorBuildNVMeIdentifier @ 0x1400969B4 (StorBuildNVMeIdentifier.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquiryDeviceIdentifiersData(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  int v8; // edx
  unsigned int v9; // eax
  size_t v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  char v13; // cl
  char v14; // al
  _BYTE Src[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(Src, 0, sizeof(Src));
  v9 = StorBuildNVMeIdentifier(a1, v8, (__int64)Src);
  v10 = v9;
  v11 = 0;
  v12 = v9 + 8;
  if ( *a3 >= v9 + 8 )
  {
    v13 = *(_BYTE *)(a4 + 5);
    *(_BYTE *)(a4 + 3) = v9 + 4;
    v14 = *(_BYTE *)(a4 + 4) & 0xF3;
    *(_BYTE *)(a4 + 5) = v13 & 0xC0 | 8;
    *(_BYTE *)(a4 + 7) = v10;
    *(_BYTE *)(a4 + 4) = v14 | 3;
    *(_WORD *)a4 = -32000;
    memmove((void *)(a4 + 8), Src, v10);
    *a3 = v12;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v11;
}
