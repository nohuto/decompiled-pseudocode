/*
 * XREFs of GetCharDimensions @ 0x1400BFF0C
 * Callers:
 *     ValidateExternalLogFont @ 0x1400C02C0 (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1401479A8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 *     FinalUserInit @ 0x14021974C (FinalUserInit.c)
 * Callees:
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     _GetTextMetricsW @ 0x1400C00C4 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  int v6; // r14d
  int v7; // ecx
  __int64 v8; // xmm2_8
  __int128 v9; // xmm4
  unsigned int v10; // esi
  __int128 v11; // xmm3
  __int64 DPIServerInfo; // rax
  int v14; // [rsp+30h] [rbp-40h]
  __m128i v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-10h]

  v14 = 0;
  HIBYTE(v16) = 0;
  v15 = 0LL;
  v6 = GreTextInitialized();
  if ( v6 && (unsigned int)GetTextMetricsW(a1) )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo();
    v7 = *(_DWORD *)(DPIServerInfo + 96);
    v11 = *(_OWORD *)(DPIServerInfo + 40);
    v9 = *(_OWORD *)(DPIServerInfo + 72);
    v15 = *(__m128i *)(DPIServerInfo + 56);
    v16 = *(_QWORD *)(DPIServerInfo + 88);
    v8 = v16;
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    v14 = v11;
    if ( !v15.m128i_i32[1] )
      v10 = 8;
    v15.m128i_i32[1] = v10;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v11;
    *(__m128i *)(a2 + 16) = v15;
    *(_OWORD *)(a2 + 32) = v9;
    *(_QWORD *)(a2 + 48) = v8;
    *(_DWORD *)(a2 + 56) = v7;
  }
  if ( a3 )
    *a3 = v14;
  if ( v6 && (v16 & 0x100000000000000LL) != 0 && (unsigned int)GreGetTextExtentW(a1) )
    return 0LL;
  else
    return v10;
}
