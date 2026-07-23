/*
 * XREFs of MxCreatePfn @ 0x140CFC1B4
 * Callers:
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MxCreatePfn(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned __int64 DemandZeroPte; // rdx
  char v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // rcx
  __int64 result; // rax
  __m128i v10; // [rsp+20h] [rbp-30h] BYREF
  __m128i v11; // [rsp+30h] [rbp-20h] BYREF
  __m128i v12; // [rsp+40h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
  v12.m128i_i64[0] = 0LL;
  v12.m128i_i64[1] = v1;
  v2 = *(_QWORD *)(a1 + 8);
  v10.m128i_i64[0] = 0LL;
  v10.m128i_i64[1] = v2;
  v11.m128i_i64[0] = 0LL;
  v12.m128i_i8[2] = 6;
  v11.m128i_i64[1] = 1LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = 1;
  if ( (v4 & 0x18) == 8 )
  {
    v7 = 2;
    DemandZeroPte |= 0x300uLL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    v7 = 0;
    DemandZeroPte |= 0x100uLL;
  }
  v12.m128i_i32[0] = v12.m128i_i32[0] & 0xFF3FFFFF | (v7 << 22);
  v12.m128i_i8[2] |= 0x10u;
  v8 = 6 * v6;
  *(__m128i *)(8 * v8 - 0x220000000000LL) = _mm_loadu_si128(&v10);
  *(__m128i *)(8 * v8 - 0x220000000000LL + 16) = _mm_loadu_si128(&v11);
  *(__m128i *)(8 * v8 - 0x220000000000LL + 32) = _mm_loadu_si128(&v12);
  *(_QWORD *)(8 * v8 - 0x220000000000LL + 16) = DemandZeroPte;
  *(_QWORD *)(8 * v8 - 0x220000000000LL + 40) = *(_QWORD *)(48 * v6 - 0x220000000000LL + 40) | 0x40000000000000LL;
  if ( v5[9] )
  {
    if ( v6 == (v6 & 0xFFFFFFFFFFFFFE00uLL) )
      *(_DWORD *)(48 * v6 - 0x220000000000LL + 36) = *(_DWORD *)(48 * v6 - 0x220000000000LL + 36) & 0xE7FFFFFF | 0x10000000;
    *(_QWORD *)(48 * v6 - 0x220000000000LL + 40) |= 0x10000000000uLL;
  }
  else if ( !v5[10] || v5[8] )
  {
    result = *(_DWORD *)(48 * v6 - 0x220000000000LL + 32) & 0xFFFF0000 | 1;
    goto LABEL_13;
  }
  result = *(_DWORD *)(48 * v6 - 0x220000000000LL + 32) & 0xFFFF0000 | 2;
LABEL_13:
  *(_DWORD *)(48 * v6 - 0x220000000000LL + 32) = result;
  return result;
}
