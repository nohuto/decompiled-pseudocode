/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1400015F0
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GUIDToSCSINameString @ 0x14001AE30 (GUIDToSCSINameString.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r8
  unsigned int *v5; // r15
  _WORD *v6; // r9
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  BOOL v14; // ebp
  int v15; // ecx
  unsigned int v16; // edi
  size_t v17; // rax
  __int64 result; // rax
  unsigned int v19; // eax
  _BYTE *v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // ecx
  char v23; // al
  int v24; // [rsp+80h] [rbp+8h]
  _WORD *v25; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v26; // [rsp+90h] [rbp+18h]

  v2 = *(unsigned __int16 **)(a1 + 1560);
  v26 = v2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = (unsigned int *)(a2 + 60);
    v6 = *(_WORD **)(a2 + 64);
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v6 = *(_WORD **)(a2 + 24);
    v5 = (unsigned int *)(a2 + 16);
    v7 = *(_BYTE *)(a2 + 7);
  }
  v8 = 0LL;
  v9 = v7;
  v25 = v6;
  v10 = *(_QWORD *)(a1 + 8LL * v7 + 1672);
  v11 = v10 + 68;
  v12 = *(_QWORD *)(v10 + 68);
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 76);
  v13 = v10 + 84;
  v14 = v12 != 0;
  if ( !*(_QWORD *)(v10 + 84) || v12 )
  {
    v15 = 0;
    v16 = 76;
    if ( v12 )
      v16 = 44;
  }
  else
  {
    v15 = 1;
    v16 = 28;
  }
  v17 = *v5;
  v24 = v15;
  if ( (unsigned int)v17 < v16 )
  {
    LOBYTE(v6) = 36;
    LOBYTE(v2) = 5;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, v2, v6);
    return 3238002694LL;
  }
  if ( (v17 & 3) != 0 )
  {
    if ( (_DWORD)v17 )
    {
      memset(v6, 0, v17);
      goto LABEL_18;
    }
  }
  else
  {
    v19 = (unsigned int)v17 >> 2;
    if ( v19 )
    {
      memset(v6, 0, 4LL * v19);
LABEL_18:
      v15 = v24;
      v6 = v25;
      v2 = v26;
    }
  }
  *v6 = -32000;
  *((_BYTE *)v6 + 3) = v16 - 4;
  v20 = v6 + 4;
  *((_BYTE *)v6 + 4) = v6[2] & 0xF0 | 3;
  *((_BYTE *)v6 + 5) = *((_BYTE *)v6 + 5) & 0xC0 | 8;
  *((_BYTE *)v6 + 7) = v16 - 8;
  if ( v14 )
  {
    GUIDToSCSINameString(v11, v20, 16LL, (unsigned __int8)(v16 - 8));
  }
  else if ( v15 )
  {
    GUIDToSCSINameString(v13, v20, 8LL, (unsigned __int8)(v16 - 8));
  }
  else
  {
    v21 = *v2;
    *((_BYTE *)v6 + 11) = `HexFromUshort'::`2'::hexDigits[*v2 & 0xF];
    *((_BYTE *)v6 + 10) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v21 >> 4];
    *((_BYTE *)v6 + 9) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v21 >> 8) & 0xF];
    *v20 = `HexFromUshort'::`2'::hexDigits[v21 >> 12];
    *(_OWORD *)(v6 + 6) = *(_OWORD *)(v2 + 12);
    *(_OWORD *)(v6 + 14) = *(_OWORD *)(v2 + 20);
    *(_QWORD *)(v6 + 22) = *((_QWORD *)v2 + 7);
    if ( (unsigned int)v9 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8 * v9 + 1672) )
    {
      _mm_lfence();
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 1672) + 16LL);
    }
    else
    {
      LOWORD(v22) = 0;
    }
    *((_BYTE *)v6 + 55) = `HexFromUshort'::`2'::hexDigits[v22 & 0xF];
    *((_BYTE *)v6 + 54) = `HexFromUshort'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v22 >> 4) & 0xF];
    v23 = `HexFromUshort'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v22 >> 8) & 0xF];
    *((_BYTE *)v6 + 52) = `HexFromUshort'::`2'::hexDigits[(unsigned __int64)(unsigned __int16)v22 >> 12];
    *((_BYTE *)v6 + 53) = v23;
    *(_OWORD *)(v6 + 28) = *(_OWORD *)(v2 + 2);
    *((_DWORD *)v6 + 18) = *((_DWORD *)v2 + 5);
  }
  *v5 = v16;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
