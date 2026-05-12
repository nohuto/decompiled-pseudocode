/*
 * XREFs of sub_140112D50 @ 0x140112D50
 * Callers:
 *     sub_1401130D0 @ 0x1401130D0 (sub_1401130D0.c)
 * Callees:
 *     sub_1400A1DE8 @ 0x1400A1DE8 (sub_1400A1DE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140112D50(__int64 a1, __int64 a2, int *a3, void *a4)
{
  __int64 v4; // rax
  __int64 v7; // rbx
  __int128 v9; // xmm0
  int v10; // ebx
  size_t v11; // r8
  __int64 result; // rax
  __int128 Src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 16);
  Src = 0LL;
  v14 = 0LL;
  v7 = *(_QWORD *)(v4 + 592);
  WORD1(Src) = 4614;
  v16 = 0LL;
  v17 = 0;
  v15 = 0LL;
  BYTE1(Src) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0x7F;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 29LL) & 7) != 0 )
    BYTE5(Src) |= 1u;
  v9 = *(_OWORD *)(v7 + 24);
  BYTE7(Src) |= 2u;
  BYTE4(Src) = 55;
  DWORD2(Src) = 1699567182;
  v14 = v9;
  sub_1400A1DE8(v7, (__int64)&v15, 4u);
  if ( (*(_BYTE *)(v7 + 256) & 1) != 0 )
    HIWORD(v17) = -16129;
  v10 = 60;
  v11 = (unsigned int)*a3;
  if ( (unsigned int)*a3 >= 0x3C )
    v11 = 60LL;
  memmove(a4, &Src, v11);
  if ( (unsigned int)*a3 < 0x3C )
    v10 = *a3;
  result = 0LL;
  *a3 = v10;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
