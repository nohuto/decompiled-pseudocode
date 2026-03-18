/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x14001AA78
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1400015C0 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // r9
  __int64 v4; // r10
  unsigned __int8 v5; // dl
  __int64 v6; // rdi
  unsigned int v7; // r8d
  bool v8; // al
  __int64 v9; // r9
  __int64 v10; // r10
  _DWORD *v11; // r11
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  _DWORD *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v18);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_BYTE *)(*(unsigned int *)(v4 + 52) + v4 + 10);
  else
    v5 = *(_BYTE *)(v4 + 7);
  v6 = v5;
  if ( *v18 >= 8u )
  {
    *(_BYTE *)(SrbDataBuffer + 3) = 4;
    *(_BYTE *)(SrbDataBuffer + 5) &= 0x98u;
    *(_WORD *)SrbDataBuffer = -19968;
    v8 = IsDeallocateSupported(a1);
    v13 = v12 & 0x7F | (v8 ? 0x80 : 0);
    v14 = *(_BYTE *)(v9 + 6);
    *(_BYTE *)(v9 + 5) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8 * v6 + 1672) + 65LL) == (_BYTE)v7 )
    {
      if ( IsDeallocateSupported(a1) )
        v15 = v16 & 0xF8 | 1;
      else
        v15 = v16 & 0xF8;
    }
    else
    {
      v15 = v14 & 0xF8 | 2;
    }
    *(_BYTE *)(v9 + 6) = v15;
    *v11 = 8;
    *(_BYTE *)(v10 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v7;
}
