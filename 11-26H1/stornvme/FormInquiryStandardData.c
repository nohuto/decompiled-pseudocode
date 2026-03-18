/*
 * XREFs of FormInquiryStandardData @ 0x140001F50
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeCopyFirmwareRevision @ 0x140001EC0 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // r13
  unsigned __int8 v9; // r12
  unsigned int *v10; // r14
  __int64 v11; // r15
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned int v22; // [rsp+28h] [rbp-39h]
  unsigned __int8 v23; // [rsp+38h] [rbp-29h]
  unsigned __int8 v24; // [rsp+39h] [rbp-28h]
  __int128 Src; // [rsp+40h] [rbp-21h] BYREF
  __int128 v26; // [rsp+50h] [rbp-11h]
  __int128 v27; // [rsp+60h] [rbp-1h] BYREF
  __int64 v28; // [rsp+70h] [rbp+Fh]
  int v29; // [rsp+78h] [rbp+17h]

  v2 = *(_BYTE *)(a2 + 2) == 40;
  v3 = *(_QWORD *)(a1 + 1560);
  Src = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v29 = 0;
  v27 = 0LL;
  if ( v2 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = 60LL;
    v8 = *(void **)(a2 + 64);
    v9 = *(_BYTE *)(v6 + a2 + 10);
    v24 = *(_BYTE *)(v6 + a2 + 8);
    v23 = *(_BYTE *)(v6 + a2 + 9);
  }
  else
  {
    v7 = 16LL;
    v8 = *(void **)(a2 + 24);
    v9 = *(_BYTE *)(a2 + 7);
    v24 = *(_BYTE *)(a2 + 5);
    v23 = *(_BYTE *)(a2 + 6);
  }
  v10 = (unsigned int *)(a2 + v7);
  BYTE1(Src) &= ~0x80u;
  BYTE2(Src) = 6;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  v11 = a1 + 8LL * v9;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 1672) + 66LL) )
    BYTE5(Src) |= 1u;
  v12 = *(_OWORD *)(v3 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  v26 = v12;
  LODWORD(v27) = 538976288;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v3, (__int64)&v27, 4u);
  if ( (*(_BYTE *)(v3 + 256) & 1) != 0 )
    HIWORD(v29) = -16129;
  v16 = *v10;
  if ( *v10 >= 0x3C )
  {
    v16 = 60;
  }
  else if ( !v16 )
  {
LABEL_10:
    LOBYTE(v15) = 36;
    LOBYTE(v14) = 5;
    LOBYTE(v13) = 48;
    NVMeSetSenseData(a2, v13, v14, v15);
    v17 = -1056964602;
    goto LABEL_11;
  }
  if ( !v8 )
    goto LABEL_10;
  memmove(v8, &Src, v16);
  *v10 = v16;
  *(_BYTE *)(a2 + 3) = 1;
  v17 = 0;
LABEL_11:
  v18 = *(_DWORD *)(a1 + 212);
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(a1 + 330) * (*(unsigned __int16 *)(a1 + 326) - 1LL);
    if ( v19 >= 0xFFFFFFFF )
      v19 = 0xFFFFFFFFLL;
    v20 = *(unsigned int *)(a1 + 152);
    if ( (_DWORD)v20 && v19 >= v20 )
      LODWORD(v19) = *(_DWORD *)(a1 + 152);
    v22 = (unsigned int)v19 / v18;
    StorPortSetDeviceQueueDepth(a1, v24, v23, v9);
  }
  StorPortExtendedFunction(46LL, a1, *(_QWORD *)(v11 + 1672), ~(unsigned __int8)(*(_DWORD *)(a1 + 56) >> 14) & 8, v22);
  return v17;
}
