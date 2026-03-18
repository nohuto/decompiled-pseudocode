/*
 * XREFs of FormInquirySerialNumberData @ 0x14001ABD4
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     SerialNumberFromNvmeId @ 0x140022A5C (SerialNumberFromNvmeId.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // r8
  unsigned __int8 v5; // dl
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // r15
  __int64 v10; // rax
  bool v11; // si
  bool v12; // di
  unsigned int v13; // ebp
  __int64 SrbDataBuffer; // rax
  char v15; // r8
  _QWORD *v16; // r10
  __int64 v17; // r11
  unsigned int *v18; // r14
  __int64 result; // rax
  _OWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned int *v24; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v3 = 40;
  v24 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v5 = *(_BYTE *)(a2 + 7);
  v6 = v5;
  v7 = *(_QWORD *)(a1 + 8LL * v5 + 1672);
  v8 = v7 + 68;
  v9 = (_QWORD *)(v7 + 84);
  v10 = *(_QWORD *)(v7 + 68);
  if ( !v10 )
    v10 = *(_QWORD *)(v8 + 8);
  v11 = v10 != 0;
  v12 = *v9 != 0LL;
  if ( !v10 )
    v3 = *v9 != 0LL ? 20 : 30;
  v13 = v3 + 4;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v24);
  v18 = v24;
  if ( *v24 < v13 )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  *(_WORD *)SrbDataBuffer = 0x8000;
  v20 = (_OWORD *)(SrbDataBuffer + 4);
  *(_BYTE *)(SrbDataBuffer + 3) = v15;
  if ( v11 )
  {
    v21 = 16;
  }
  else
  {
    if ( !v12 )
    {
      *v20 = *(_OWORD *)(v2 + 4);
      *(_DWORD *)(SrbDataBuffer + 20) = *(_DWORD *)(v2 + 20);
      *(_BYTE *)(SrbDataBuffer + 24) = 95;
      v22 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 8 * v6 + 1672) + 18LL);
      *(_BYTE *)(SrbDataBuffer + 28) = `HexFromUshort'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(v17 + 8 * v6 + 1672) + 18LL) & 0xF];
      *(_BYTE *)(SrbDataBuffer + 27) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v22 >> 4];
      *(_BYTE *)(SrbDataBuffer + 26) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v22 >> 8) & 0xF];
      *(_BYTE *)(SrbDataBuffer + 25) = `HexFromUshort'::`2'::hexDigits[v22 >> 12];
      v23 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 8 * v6 + 1672) + 16LL);
      *(_BYTE *)(SrbDataBuffer + 32) = `HexFromUshort'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(v17 + 8 * v6 + 1672) + 16LL) & 0xF];
      *(_BYTE *)(SrbDataBuffer + 31) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v23 >> 4];
      *(_BYTE *)(SrbDataBuffer + 30) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v23 >> 8) & 0xF];
      *(_BYTE *)(SrbDataBuffer + 29) = `HexFromUshort'::`2'::hexDigits[v23 >> 12];
      *(_BYTE *)(SrbDataBuffer + 33) = 46;
      goto LABEL_17;
    }
    v16 = v9;
    v21 = 8;
  }
  result = SerialNumberFromNvmeId(v16, v21, v20);
  if ( !(_DWORD)result )
  {
LABEL_17:
    *v18 = v13;
    result = 0LL;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return result;
}
