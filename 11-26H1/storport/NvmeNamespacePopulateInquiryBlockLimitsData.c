/*
 * XREFs of NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401172A0
 * Callers:
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 *     NvmeNamespaceScsiInquiryRequest @ 0x140117AC4 (NvmeNamespaceScsiInquiryRequest.c)
 * Callees:
 *     NvmeNamespaceIsDeallocateSupported @ 0x140044F68 (NvmeNamespaceIsDeallocateSupported.c)
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeNamespacePopulateInquiryBlockLimitsData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // ecx
  int v10; // r9d
  int v11; // r8d
  int v12; // eax
  _BYTE *v13; // r10
  __int64 v14; // r11
  unsigned int v15; // ecx
  int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned __int64 v19; // rax

  v4 = 0;
  if ( *a3 >= 0x40u )
  {
    v9 = *(_DWORD *)(a1 + 64);
    v10 = *(_DWORD *)(a1 + 72) / v9;
    v11 = *(_DWORD *)(a1 + 76) / v9;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 620LL) / v9;
    *(_BYTE *)(a4 + 7) = v11;
    *(_BYTE *)(a4 + 15) = v10;
    *(_BYTE *)(a4 + 10) = BYTE1(v12);
    *(_BYTE *)(a4 + 9) = BYTE2(v12);
    *(_BYTE *)(a4 + 14) = BYTE1(v10);
    *(_BYTE *)(a4 + 11) = v12;
    *(_BYTE *)(a4 + 8) = HIBYTE(v12);
    *(_BYTE *)(a4 + 13) = BYTE2(v10);
    *(_WORD *)a4 = -20480;
    *(_BYTE *)(a4 + 3) = 60;
    *(_BYTE *)(a4 + 6) = BYTE1(v11);
    *(_BYTE *)(a4 + 12) = HIBYTE(v10);
    if ( NvmeNamespaceIsDeallocateSupported(a1) )
    {
      v15 = *(_DWORD *)(v14 + 64);
      if ( v15 )
      {
        v16 = 256;
        v17 = (0x40000000 / v15) << 6;
        v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 600LL);
        if ( v18 )
        {
          if ( *(_BYTE *)(v18 + 3) )
            v16 = *(unsigned __int8 *)(v18 + 3);
          v19 = *(_QWORD *)(v18 + 8);
          if ( v19 )
          {
            v17 = -1;
            if ( v19 < 0xFFFFFFFF )
              v17 = v19;
          }
        }
        v13[23] = v17;
        v13[22] = BYTE1(v17);
        v13[21] = BYTE2(v17);
        v13[26] = BYTE1(v16);
        v13[27] = v16;
        v13[25] = BYTE2(v16);
        v13[20] = HIBYTE(v17);
        v13[24] = HIBYTE(v16);
        v13[31] = *(_BYTE *)(v14 + 84);
        v13[30] = *(_BYTE *)(v14 + 85);
        v13[29] = *(_BYTE *)(v14 + 86);
        v13[28] = *(_BYTE *)(v14 + 87);
        if ( *(_DWORD *)(v14 + 88) )
        {
          v13[35] = *(_BYTE *)(v14 + 88);
          v13[34] = *(_BYTE *)(v14 + 89);
          v13[33] = *(_BYTE *)(v14 + 90);
          v13[32] = *(_BYTE *)(v14 + 91) | 0x80;
        }
      }
    }
    *a3 = 64;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    SetSrbSenseData(a2, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  return v4;
}
