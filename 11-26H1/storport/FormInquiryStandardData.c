/*
 * XREFs of FormInquiryStandardData @ 0x1400FFE1C
 * Callers:
 *     ScsiInquiryRequest @ 0x1401167F4 (ScsiInquiryRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rax
  __m128i v7; // xmm0
  void *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ebx
  size_t v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rax
  __int128 v14; // xmm0
  _BYTE *v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int128 Src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 2) == 40;
  v23 = 0LL;
  v24 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  Src = 0LL;
  v21 = 0LL;
  v5 = *(_QWORD *)(v4 + 592);
  v6 = 64LL;
  v22 = 0LL;
  v7 = _mm_srli_si128((__m128i)0LL, 1);
  if ( !v2 )
    v6 = 24LL;
  v8 = *(void **)(v6 + a2);
  v9 = 60LL;
  if ( !v2 )
    v9 = 16LL;
  v10 = 0;
  v11 = *(unsigned int *)(v9 + a2);
  v12 = 7;
  BYTE2(Src) = 6;
  BYTE1(Src) = _mm_cvtsi128_si32(v7) & 0x7F;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  v13 = *(_QWORD *)(a1 + 176);
  if ( v13 )
    BYTE5(Src) = BYTE5(Src) & 0xFE | ((*(_BYTE *)(v13 + 29) & 7) != 0);
  v14 = *(_OWORD *)(v5 + 24);
  BYTE7(Src) |= 2u;
  LODWORD(v15) = 0;
  v21 = v14;
  BYTE4(Src) = 55;
  v16 = 7LL;
  LODWORD(v22) = 538976288;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  do
  {
    if ( (unsigned __int8)(*(_BYTE *)(v5 + v16 + 64) - 33) <= 0x5Du )
    {
      LODWORD(v15) = (_DWORD)v15 + 1;
      if ( (_DWORD)v15 == 4 )
        break;
    }
    if ( !v16 )
      break;
    --v12;
    --v16;
  }
  while ( v16 >= 0 );
  v17 = 0;
  if ( v12 < 8 )
  {
    v15 = (_BYTE *)(v5 + (int)v12 + 64LL);
    do
    {
      if ( (unsigned __int8)(*v15 - 33) <= 0x5Du )
      {
        v18 = v17++;
        *((_BYTE *)&v22 + v18) = *v15;
        if ( v17 >= 4 )
          break;
      }
      ++v12;
      ++v15;
    }
    while ( v12 < 8 );
  }
  if ( (*(_BYTE *)(v5 + 256) & 1) != 0 )
    HIWORD(v24) = -16129;
  if ( (unsigned int)v11 >= 0x3C )
  {
    v11 = 60LL;
  }
  else if ( !(_DWORD)v11 )
  {
    goto LABEL_21;
  }
  if ( v8 )
  {
    memmove(v8, &Src, v11);
    *(_BYTE *)(a2 + 3) = 1;
    return v10;
  }
LABEL_21:
  LOBYTE(v15) = 36;
  LOBYTE(v11) = 5;
  LOBYTE(v12) = 48;
  SetSrbSenseData(a2, v12, v11, (_DWORD)v15, 0);
  return (unsigned int)-1056964602;
}
