/*
 * XREFs of sub_1800889A0 @ 0x1800889A0
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18004F428 @ 0x18004F428 (sub_18004F428.c)
 *     sub_18004F4C4 @ 0x18004F4C4 (sub_18004F4C4.c)
 *     sub_18004FA2C @ 0x18004FA2C (sub_18004FA2C.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 *     sub_180087CD4 @ 0x180087CD4 (sub_180087CD4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800889A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  size_t v9; // r14
  const void *v10; // rax
  const __m128i *v11; // rax
  __int64 *v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  float v17; // xmm2_4
  float v18; // xmm1_4
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int8 v22[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+24h] [rbp-DCh] BYREF
  int v24; // [rsp+28h] [rbp-D8h] BYREF
  int v25; // [rsp+2Ch] [rbp-D4h] BYREF
  _QWORD v26[30]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v27[16]; // [rsp+120h] [rbp+20h] BYREF
  size_t v28; // [rsp+130h] [rbp+30h]

  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  sub_1800143C0((__int64)v27);
  while ( 1 )
  {
    v8 = sub_18004F428(a2, (__int64)v27);
    if ( !(unsigned __int8)std::ios_base::operator bool(v8 + *(int *)(*(_QWORD *)v8 + 4LL)) )
      break;
    v9 = v28;
    if ( v28 )
    {
      v10 = (const void *)sub_1800148EC((__int64)v27);
      if ( !sub_18001CFB0(v10, v9, "\r", 1LL) )
      {
        v11 = (const __m128i *)sub_1800148EC((__int64)v27);
        if ( v11->m128i_i8[0] != 35 )
        {
          v12 = (__int64 *)(a3 + 8);
          if ( v5 )
          {
            sub_18004F4C4(v26, (__int64)v27);
            v25 = 0;
            v24 = 0;
            v23 = 0;
            v15 = std::istream::operator>>(v26, &v25);
            v16 = std::istream::operator>>(v15, &v24);
            std::istream::operator>>(v16, &v23);
            v17 = (float)v23;
            v18 = (float)v24;
            v19 = 2 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            v20 = *v12;
            *(float *)(v20 + 8 * v19) = (float)v25;
            *(float *)(v20 + 8 * v19 + 4) = v18;
            *(float *)(v20 + 8 * v19 + 8) = v17;
            *(_DWORD *)(v20 + 8 * v19 + 12) = 1065353216;
            ++v7;
            sub_18004FA2C((__int64)v26);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v22[0] = 32;
            v5 = sub_180087CD4(v11, (const __m128i *)((char *)v11 + v9), v22) + 1;
            v6 = v5 * v5 * v5;
            v13 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
            if ( v6 < v13 )
            {
              v14 = *v12 + 16 * v6;
              goto LABEL_13;
            }
            if ( v6 > v13 )
            {
              if ( v6 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
              {
                v14 = sub_180087C7C(*(_QWORD *)(a3 + 16), v6 - v13, a3 + 8);
LABEL_13:
                *(_QWORD *)(a3 + 16) = v14;
              }
              else
              {
                sub_180087AAC((const void **)(a3 + 8), v5 * v5 * v5);
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  return sub_1800129D0((__int64)v27);
}
