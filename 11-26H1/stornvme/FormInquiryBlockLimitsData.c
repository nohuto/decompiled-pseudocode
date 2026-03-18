/*
 * XREFs of FormInquiryBlockLimitsData @ 0x140001010
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x140001580 (GetControllerMaxTransferSize.c)
 *     IsDeallocateSupported @ 0x1400015C0 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ett
  unsigned int v12; // eax
  _BYTE *v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  _BYTE *v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ebx
  unsigned int v27; // edi
  unsigned int v28; // eax
  _BYTE *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax

  v2 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    v6 = 60LL;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v6 = 16LL;
    v5 = *(_BYTE *)(a2 + 7);
  }
  if ( *(_DWORD *)(v6 + a2) >= 0x40u )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_BYTE *)(v4 + 1) = -80;
    v8 = a1 + 8LL * v5;
    v9 = *(_QWORD *)(v8 + 1672);
    v10 = *(_DWORD *)(v9 + 52);
    v11 = *(_DWORD *)(v9 + 104);
    *(_BYTE *)(v4 + 7) = v11 / v10;
    *(_BYTE *)(v4 + 6) = (unsigned __int16)(v11 / v10) >> 8;
    v12 = (unsigned int)GetControllerMaxTransferSize(a1, v11 % v10) / v10;
    v13[11] = v12;
    v13[10] = BYTE1(v12);
    v13[9] = BYTE2(v12);
    v13[8] = HIBYTE(v12);
    v14 = *(_DWORD *)(*(_QWORD *)(v8 + 1672) + 100LL) / v10;
    v15 = *(_DWORD *)(*(_QWORD *)(v8 + 1672) + 100LL) % v10;
    v13[15] = v14;
    v13[14] = BYTE1(v14);
    v13[13] = BYTE2(v14);
    v13[12] = HIBYTE(v14);
    if ( (unsigned __int8)IsDeallocateSupported(v16, v15) )
    {
      v20 = *(unsigned __int8 *)(v18 + 4075);
      if ( !(_BYTE)v20 )
        v20 = 256;
      v21 = *(_QWORD *)(v18 + 4080);
      if ( v21 )
      {
        if ( v21 > 0xFFFFFFFF )
          LODWORD(v21) = -1;
        v22 = v21;
        v23 = v21;
        v24 = v21;
      }
      else
      {
        v24 = (0x40000000 / v10) << 6;
        v21 = (unsigned __int8)((unsigned __int8)(0x40000000 / v10) << 6);
        v22 = v24;
        v23 = v24;
      }
      v25 = *(_DWORD *)(v18 + 48);
      v26 = v22 >> 8;
      v27 = HIWORD(v23);
      v28 = HIBYTE(v24);
      if ( v25 )
      {
        v26 = v25 >> 8;
        LOBYTE(v21) = *(_DWORD *)(v18 + 48);
        v27 = HIWORD(v25);
        LOBYTE(v28) = HIBYTE(*(_DWORD *)(v18 + 48));
      }
      v17[3] = 60;
      v17[21] = v27;
      v17[26] = BYTE1(v20);
      v17[25] = BYTE2(v20);
      v17[24] = HIBYTE(v20);
      v17[23] = v21;
      v17[22] = v26;
      v17[20] = v28;
      v17[27] = v20;
      v29 = *(_BYTE **)(v8 + 1672);
      v17[31] = v29[160];
      v17[30] = v29[161];
      v17[29] = v29[162];
      v17[28] = v29[163];
      v30 = *(_QWORD *)(v8 + 1672);
      v31 = *(_DWORD *)(v30 + 164);
      if ( v31 )
      {
        v17[35] = v31;
        v17[34] = *(_BYTE *)(v30 + 165);
        v17[33] = *(_BYTE *)(v30 + 166);
        v17[32] = *(_BYTE *)(v30 + 167) | 0x80;
      }
    }
    else
    {
      v17[3] = 60;
    }
    result = 0LL;
    *(_BYTE *)(v19 + 3) = 1;
  }
  else
  {
    LOBYTE(a1) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v2, a2, v4, a1);
    return 3238002694LL;
  }
  return result;
}
